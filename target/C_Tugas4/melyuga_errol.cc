#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>


void lingkaran(float TITIK_LAYAR_X, float TITIK_LAYAR_Y, float LEBAR_X, float LEBAR_Y, float JUMLAH_SUDUT, float ROTASI){
	GLfloat derajat = (360.0f / JUMLAH_SUDUT) * M_PI / 180.0f;
	glBegin(GL_TRIANGLE_FAN);

	GLfloat sudut = 0.0f - ROTASI;
	for(int k=0;k<JUMLAH_SUDUT;++k){
		glVertex2f(TITIK_LAYAR_X + (LEBAR_X * cos(sudut)), TITIK_LAYAR_Y + LEBAR_Y * sin((sudut)));
		sudut += derajat;
	}
	glEnd();
}

void myDisplay(){
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 1.0, 5/255);
	for(int i=0;i<50;i++){
		lingkaran(50, 55-i, 50-i, 50, 1000, 20);
	}

	glColor3f(1.0, 1.0, 1.0);
	lingkaran(50, 54, 44, 45, 1000, 20);

	glColor3f(1.0, 1.0, 5/255);
	for(int i=0;i<50;i++){
		lingkaran(50, 50-i, 40-i, 43, 1000, 20);
	}

	glColor3f(1.0, 1.0, 1.0);
	lingkaran(50, 50, 34, 35, 1000, 20);

	glColor3f(1.0, 1.0, 5/255);
	for(int i=0;i<50;i++){
		lingkaran(50, 46-i, 29-i, 33, 1000, 20);
	}

	glColor3f(1.0, 1.0, 1.0);
	lingkaran(50, 45, 22, 27, 1000, 20);

	glColor3f(1.0, 1.0, 5/255);
	lingkaran(50, 40, 18, 25, 1000, 20);

	glColor3f(1.0, 1.0, 1.0);
	lingkaran(50, 40, 12, 17, 1000, 20);

	glColor3f(1.0, 1.0, 5/255);
	lingkaran(50, 40, 7, 10, 1000, 20);

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 5/255);
	glVertex2i(43, 20);
	glVertex2i(57, 20);
	glVertex2i(57, 40);
	glVertex2i(43, 40);
	glutSwapBuffers();
}

int main(int argc, char**argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500, 400);
	glLineWidth(5.0);
	glutCreateWindow("Mellyuga Errol W - 672018237");
	glutDisplayFunc(myDisplay);
	gluOrtho2D(-10.0, 150.0, -10.0, 150.0);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glutMainLoop();
}
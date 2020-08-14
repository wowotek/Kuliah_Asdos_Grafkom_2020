#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>


void lingkaran(float TITIK_LAYAR_X, float TITIK_LAYAR_Y, float LEBAR_X, float LEBAR_Y, float JUMLAH_SUDUT, float ROTASI)
{
	GLfloat derajat=(360.0f/JUMLAH_SUDUT)* M_PI / 180.0f;
	glBegin(GL_TRIANGLE_FAN);
		GLfloat sudut = 0.0f - ROTASI;
		for (int _k=0;_k <JUMLAH_SUDUT; ++ _k){
		glVertex2f(TITIK_LAYAR_X + (LEBAR_X*cos(sudut)), TITIK_LAYAR_Y + (LEBAR_Y*sin(sudut)));
		sudut += derajat;
		}
	glEnd();
}

void Display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,0.3);
	for(int i = 0; i<50; i++){
		lingkaran (50,55-i,50-i,50,1000,20);//cone utama
	}
	
	glColor3f(1.0,1.0,1.0);
	for(int i = 0; i<45; i++){
		lingkaran (50,55-i,45-i,45,1000,20);//putih1
	}

	glColor3f(1.0,1.0,0.3);
	for(int i = 0; i<42; i++){
		lingkaran (50,50-i,43-i,43,1000,20);//kuning1
	}

	glColor3f(1.0,1.0,1.0);
	for(int i = 0; i<39; i++){
		lingkaran (50,50-i,39-i,39,1000,20);//putih2
	}

	glColor3f(1.0,1.0,0.3);
	for(int i = 0; i<36; i++){
		lingkaran (50,46-i,37-i,37,1000,20);//kuning2
	}

	glColor3f(1.0,1.0,1.0);
	for(int i = 0; i<39; i++){
		lingkaran (50,46-i,33-i,33,1000,20);//putih3
	}

	glColor3f(1.0,1.0,0.3);
	for(int i = 0; i<36; i++){
		lingkaran (50,42-i,31-i,31,1000,20);//kuning3
	}

	glColor3f(1.0,1.0,1.0);
	for(int i = 0; i<39; i++){
		lingkaran (50,42-i,27-i,27,1000,20);//putih4
	}

	glColor3f(1.0,1.0,0.3);
	for(int i = 0; i<39; i++){
		lingkaran (50,37-i,25-i,25,1000,20);//kuning4
	}

	glutSwapBuffers();
}

int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500,400);
	glLineWidth(5.0);
	glutCreateWindow("Haidar Shiddiqramzy - 672018293");
	glutDisplayFunc(Display);
	gluOrtho2D(-10, 150.0, -10, 150.0);
	glClearColor(1.0,1.0,1.0,1.0);
	glutMainLoop();
}
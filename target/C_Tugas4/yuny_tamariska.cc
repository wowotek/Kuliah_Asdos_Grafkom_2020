#include <GL/glut.h>
#include <cmath>


void lingkaran (float TITIK_LAYAR_X,float TITIK_LAYAR_Y,float LEBAR_X, float LEBAR_Y, float JUMLAH_SUDUT, float ROTASI ){
	GLfloat derajat = (360.0f/JUMLAH_SUDUT)*M_PI/180.0f;
	
	glBegin(GL_TRIANGLE_FAN);
		GLfloat sudut = 0.0f - ROTASI;
		for (int _k = 0; _k < JUMLAH_SUDUT; ++_k) {
			glVertex2f(TITIK_LAYAR_X + (LEBAR_X * cos(sudut)), TITIK_LAYAR_Y + (LEBAR_Y * sin(sudut)));
			sudut += derajat;
		}
		glEnd();
}

void myDisplay (){
	glClear(GL_COLOR_BUFFER_BIT);

	for (int i = 0; i < 9; i++){
		if (i%2==0){
			glColor3f(1.0, 1.0, 0.0);
			lingkaran (65, 60-(i*5), 45-(i*5), 50, 1000, 10);		
	}
		else{
			glColor3f(1.0, 1.0, 1.0);
			lingkaran (65, 60-(i*2), 45-(i*5), 45, 1000, 10);	
		}
	}
	glutSwapBuffers();
}

int main (int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize (500, 400);
	glutCreateWindow ("Yuny Tamariska Bota - 672018269");
	glutDisplayFunc(myDisplay);
	gluOrtho2D(-10, 150.0, -10, 150.0);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glutMainLoop();
}
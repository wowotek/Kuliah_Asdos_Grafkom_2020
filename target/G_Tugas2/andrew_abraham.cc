#include<iostream>
#include <math.h>
#include <GL/glut.h>

double rad = 0;
const double PI = 3.141592653587793;
int i;
void lingkaran(int jari2, int jumlah_titik, int x_tengah, int y_tengah) {
	glBegin(GL_POLYGON);
	for (i = 0; i <= 360; i++) {
		float sudut = i * (2 * PI / jumlah_titik);
		float x = x_tengah + jari2 * cos(sudut);
		float y = y_tengah + jari2 * sin(sudut);
		glVertex2f(x, y);
	}
	glEnd();
}

void
OnDisplayRender(void) {
	glClear(GL_COLOR_BUFFER_BIT);

	//Titik Tengah
	glEnable(GL_POINT_SMOOTH);
	glPointSize(50);
	glBegin(GL_POINTS);
	glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
	glVertex2f(50, 50);
	glEnd();


	//Merkurius
	glPointSize(5);
	glBegin(GL_POINTS);
	glColor3f(0, 1, 1);
	glVertex2f(sin(rad) * 15 + 50, cos(rad) + 15 + 50);
	glEnd();

	//Venus
	glPointSize(5);
	glBegin(GL_POINTS);
	glColor3f(0, 0, 1);
	glVertex2f(sin(rad) * 20 + 50, cos(rad) + 20 + 50);
	glEnd();


	//Bumi
	glPointSize(5);
	glBegin(GL_POINTS);
	glColor3f(1, 0, 0);
	glVertex2f(sin(rad) * 25 + 50, cos(rad) + 25 + 50);
	glEnd();

	//Mars
	glPointSize(10);
	glBegin(GL_POINTS);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(sin(rad) * 30 + 50, cos(rad) + 30 + 50);
	glEnd();


	glFlush();
}

void
OnDisplayUpdate(int) {
	rad += 0.0001f;
	rad += 0.0001f;
	rad += 0.0001f;
	rad += 0.0001f;
	std::cout << rad << std::endl;

	glutPostRedisplay();
	glutTimerFunc(10, OnDisplayUpdate, 1);
}

int
main(int argc, char** argv) {
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(480, 150);
	glutInitWindowSize(800, 800);

	glutCreateWindow(argv[0]);

	gluOrtho2D(0, 100, 100, 0);
	glClearColor(0.0, 0.0, 0.0, 0.0); //Black

	glutTimerFunc(10, OnDisplayUpdate, 1);
	glutDisplayFunc(OnDisplayRender);
	glutMainLoop();

	return(0);
}
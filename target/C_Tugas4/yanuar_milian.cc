#include <iostream>
#include <GL/freeglut.h>
#include <math.h>

void cone(float TITIK_LAYAR_X, float TITIK_LAYAR_Y, 
	float LEBAR_X, float LEBAR_Y, float JUMLAH_SUDUT, float ROTASI) {
	GLfloat derajat = (360.0f / JUMLAH_SUDUT) * 3.14 / 100.0f;
	glBegin(GL_TRIANGLE_FAN);
		GLfloat sudut = 0.0f - ROTASI;
		for (int _k = 0; _k < JUMLAH_SUDUT; ++_k) {
			glVertex2f(
				TITIK_LAYAR_X + (LEBAR_X * cos(sudut)),
				TITIK_LAYAR_Y + (LEBAR_Y * sin(sudut))
			);
			sudut += derajat;
		}
	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);

	for (int i = 0,j=0; i < 100; ++i, ++j) {
		glColor3f(1.0, 1.0, 0.0);
		cone(250, 220 - i, 200 - i, 230, 1000, 50);
	}

	for (int i = 0; i < 100; ++i) {
		glColor3f(1.0, 1.0, 1.0);
		cone(250, 230 - i, 180 - i, 205, 1000, 50);
	}

	for (int i = 0; i < 100; ++i) {
		glColor3f(1.0, 1.0, 0.0);
		cone(250, 235 - i, 180 - i, 180, 1000, 50);
	}

	for (int i = 0; i < 100; ++i) {
		glColor3f(1.0, 1.0, 1.0);
		cone(250, 245 - i, 160 - i, 155, 1000, 50);
	}

	for (int i = 0; i < 100; ++i) {
		glColor3f(1.0, 1.0, 0.0);
		cone(250, 255 - i, 160 - i, 125, 1000, 50);
	}

	for (int i = 0; i < 100; ++i) {
		glColor3f(1.0, 1.0, 1.0);
		cone(250, 265 - i, 140 - i, 100, 1000, 50);
	}

	for (int i = 0; i < 100; ++i) {
		glColor3f(1.0, 1.0, 0.0);
		cone(250, 275 - i, 140 - i, 100, 1000, 50);
	}

	for (int i = 0; i < 100; ++i) {
		glColor3f(1.0, 1.0, 1.0);
		cone(250, 285 - i, 130 - i, 80, 1000, 50);
	}

	for (int i = 0; i < 100; ++i) {
		glColor3f(1.0, 1.0, 0.0);
		cone(250, 275 - i, 145- i, 70, 1000, 50);
	}

	for (int i = 0; i < 100; ++i) {
		glColor3f(1.0, 1.0, 1.0);
		cone(250, 130 - i, 80 - i, 200, 1000, 50);
	}

	for (int i = 0; i < 100; ++i) {
		glColor3f(1.0, 1.0, 0.0);
		cone(250, 220 - i, 140 - i, 90, 1000, 50);
	}

	glBegin(GL_POLYGON);
		glColor3f(1.0, 1.0, 0.0);
		glVertex2f(173.0, 0.0);
		glVertex2f(330.0, 0.0);
		glVertex2f(412.0, 113.0);
		glVertex2f(445.0, 223.0);
		glVertex2f(439.0, 270.0);
		glVertex2f(66.0, 269.0);
		glVertex2f(57.0, 263.0);
		glVertex2f(65.0, 172.0);
		glVertex2f(86.0, 109.0);
	glEnd();

	glFlush();
}

void initGL() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 499.0, 0.0, 499.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Yanuar Chris Milian - 672018329");
	glutDisplayFunc(display);

	initGL();

	glutMainLoop();

	return 0;
}

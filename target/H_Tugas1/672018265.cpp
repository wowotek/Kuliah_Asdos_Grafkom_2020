#include <iostream>
#include <GL/freeglut.h>

void display() {
	glClear(GL_COLOR_BUFFER_BIT);

	
	glBegin(GL_TRIANGLES);
	glColor3f(0.4, 1, 0.4);
	glVertex2i(0, 100);
	glVertex2i(275, 350);
	glVertex2i(575, 0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0, 0.5, 0.4);
	glVertex2i(400, 100);
	glVertex2i(550, 300);
	glVertex2i(800, 100);
	glEnd();

	glColor3f(0.0, 0.0, 7.0);
	glBegin(GL_POLYGON);
	glVertex2i(0, 0);
	glVertex2i(800, 0);
	glVertex2i(800, 100);
	glVertex2i(0, 100);
	glEnd();

	glColor3f(0.7, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(50, 125);
	glVertex2i(450, 125);
	glVertex2i(375, 50);
	glVertex2i(125, 50);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.5, 0.6, 0.5);
	glVertex2i(175, 125);
	glVertex2i(325, 125);
	glVertex2i(250, 200);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.5, 0.6);
	glVertex2i(600, 25);
	glVertex2i(625, 50);
	glVertex2i(675, 75);
	glVertex2i(700, 25);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.4, 0.4, 0.4);
	glVertex2i(650, 20);
	glVertex2i(680, 50);
	glVertex2i(700, 95);
	glVertex2i(750, 20);
	glEnd();

	glFlush();
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 799.0, 0.0, 499.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Points");
	glutDisplayFunc(display);

	myinit();
	glutMainLoop();

	return 0;
}
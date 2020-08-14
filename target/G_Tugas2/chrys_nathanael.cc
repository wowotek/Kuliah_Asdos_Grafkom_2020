#include <iostream>
#include <math.h>
#include <GL/freeglut.h>

double radm = 0;
double radv = 0;
double radb = 0;
double radm1 = 0;


void display() {
	glClear(GL_COLOR_BUFFER_BIT);

	//matahari
	glPointSize(20);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 0);
	glVertex2f(50, 50);
	glEnd();

	//merkurius
	glPointSize(5);
	glBegin(GL_POINTS);
	glColor3f(0, 0.5, 0);
	glVertex2f(sin(radm) * 10 + 50, cos(radm) * 10 + 50);
	glEnd();

	//venus
	glPointSize(8);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 0);
	glVertex2f(sin(radv) * 17 + 50, cos(radv) * 17 + 50);
	glEnd();

	//bumi
	glPointSize(15);
	glBegin(GL_POINTS);
	glColor3f(0, 0, 1);
	glVertex2f(sin(radb) * 25 + 50, cos(radb) * 25 + 50);
	glEnd();

	//mars
	glPointSize(7);
	glBegin(GL_POINTS);
	glColor3f(1, 0.5, 0);
	glVertex2f(sin(radm1) * 38 + 50, cos(radm1) * 38 + 50);
	glEnd();
	glFlush();
	glutSwapBuffers();
}

void Timer(int) {
	glutPostRedisplay();
	glutTimerFunc(25, Timer, 1);

	radm += 0.1f;
	radv += 0.05f;
	radb += 0.018f;
	radm1 += 0.0080f;
}


void myinit() {
	glClearColor(0, 0, 0, 0);
	glColor3f(1.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 100, 100, 0);// left,right,bottom,top
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Made By ChrysN");
	glEnable(GL_POINT_SMOOTH);
	glutDisplayFunc(display);
	myinit();
	glutTimerFunc(25, Timer, 1);
	glutMainLoop();

	return 0;
}
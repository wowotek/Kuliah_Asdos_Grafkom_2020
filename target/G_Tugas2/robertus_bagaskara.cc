#define _USE_MATH_DEFINES
#include <iostream>
#include <GL/freeglut.h>
#include <math.h>

double mercuriusRad, venusRad, earthRad, marsRad, moonRad, phobosRad, deimosRad = 0; 
double xMercurius, yMercurius, xVenus, yVenus, xEarth, yEarth, xMars, yMars, xMoon, yMoon,
		xPhobos, yPhobos, xDeimos, yDeimos;

void mercurius() {
	glPointSize(10);
	glColor3ub(242, 112, 31);
	glBegin(GL_POINTS);
	xMercurius = sin(mercuriusRad) * 110 + 300;
	yMercurius = cos(mercuriusRad) * 110 + 300;
	glVertex2f(xMercurius, yMercurius);
	glEnd();
}

void venus() {
	glPointSize(13);
	glColor3ub(224, 212, 193);
	glBegin(GL_POINTS);
	xVenus = sin(venusRad) * 150 + 300;
	yVenus = cos(venusRad) * 150 + 300;
	glVertex2f(xVenus, yVenus);
	glEnd();
}

void earth() {
	glPointSize(15);
	glColor3ub(123, 232, 138);
	glBegin(GL_POINTS);
	xEarth = sin(earthRad) * 200 + 300;
	yEarth = cos(earthRad) * 200 + 300;
	glVertex2f(xEarth, yEarth);
	glEnd();
}

void mars() {
	glPointSize(12);
	glColor3ub(245, 66, 66);
	glBegin(GL_POINTS);
	xMars = sin(marsRad) * 250 + 300;
	yMars = cos(marsRad) * 250 + 300;
	glVertex2f(xMars, yMars);
	glEnd();
}

void moon() {
	glPointSize(7);
	glColor3ub(242, 240, 228);
	glBegin(GL_POINTS);
	xMoon = sin(moonRad) * 18 + xEarth;
	yMoon = cos(moonRad) * 18 + yEarth;
	glVertex2f(xMoon, yMoon);
	glEnd();
}

void phobos() {
	glPointSize(6);
	glColor3ub(209, 208, 203);
	glBegin(GL_POINTS);
	xPhobos = sin(phobosRad) * 18 + xMars;
	yPhobos = cos(phobosRad) * 18 + yMars;
	glVertex2f(xPhobos, yPhobos);
	glEnd();
}

void deimos() {
	glPointSize(5);
	glColor3ub(209, 208, 203);
	glBegin(GL_POINTS);
	xDeimos = sin(deimosRad) * 25 + xMars;
	yDeimos = cos(deimosRad) * 25 + yMars;
	glVertex2f(xDeimos, yDeimos);
	glEnd();
}

void sunCenter(double r, int vertex) {
	double coord = (double)vertex;
	glColor3ub(252, 202, 3);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = r * cos(2 * M_PI * i / coord) + 300;
		double y = r * sin(2 * M_PI * i / coord) + 300;
		glVertex2d(x, y);
	}
	glEnd();
}

void orbitalLine(double r, int vertex) {
	double coord = (double)vertex;
	glLineWidth(1);
	glColor3ub(209, 208, 203);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = r * cos(2 * M_PI * i / coord) + 300;
		double y = r * sin(2 * M_PI * i / coord) + 300;
		glVertex2d(x, y);
	}
	glEnd();
}

void linePlanet() {
	glLineWidth(1);
	glColor3ub(209, 208, 203);
	glBegin(GL_LINE_LOOP);
	glVertex2f(xMercurius, yMercurius);
	glVertex2f(300, 300);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(xVenus, yVenus);
	glVertex2f(300, 300);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(xEarth, yEarth);
	glVertex2f(300, 300);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(xMars, yMars);
	glVertex2f(300, 300);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(xMoon, yMoon);
	glVertex2f(xEarth, yEarth);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(xPhobos, yPhobos);
	glVertex2f(xMars, yMars);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(xDeimos, yDeimos);
	glVertex2f(xMars, yMars);
	glEnd();
}

void OnDisplayUpdate(int) {
	mercuriusRad -= 0.015f;
	venusRad -= 0.007f;
	earthRad -= 0.005f;
	marsRad -= 0.003f;
	moonRad -= 0.05f;
	phobosRad -= 0.07f;
	deimosRad -= 0.05f;
	glutPostRedisplay();
	glutTimerFunc(7, OnDisplayUpdate, 1);
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	linePlanet();
	orbitalLine(110, 300);
	orbitalLine(150, 300);
	orbitalLine(200, 300);
	orbitalLine(250, 300);
	sunCenter(30, 300);
	mercurius();
	venus();
	earth();
	mars();
	moon();
	phobos();
	deimos();
	glFlush();
}

void myInit() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 599.0, 0.0, 599.0);

	glEnable(GL_POINT_SMOOTH);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Simple Orbital Using OpenGL");
	glutDisplayFunc(display);
	glutTimerFunc(7, OnDisplayUpdate, 1);
	myInit();
	glutMainLoop();

	return 0;
}
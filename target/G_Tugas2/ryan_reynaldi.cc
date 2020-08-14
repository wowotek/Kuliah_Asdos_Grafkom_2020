#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <GL/freeglut.h>

double radmerkurius = 0;
double radvenus = 0;
double radbumi = 0;
double radmars = 0;

void sun(double r, int vertex) {
	glBegin(GL_POLYGON);
	{
		glColor3f(1, 0.5, 0);
		double ver = (double)vertex;
		for (int i = 0; i < vertex; i++) {
			double x = r * cos(2 * M_PI * i / ver);
			double y = r * sin(2 * M_PI * i / ver);
			glVertex2f(x, y);
		}
	}
	glEnd();
}

void orbit(double r, int vertex) {
	glBegin(GL_LINE_LOOP);
	{
		glColor3f(1, 1, 1);
		double ver = (double)vertex;
		for (int i = 0; i < vertex; i++) {
			double x = r * cos(2 * M_PI * i / ver);
			double y = r * sin(2 * M_PI * i / ver);
			glVertex2f(x, y);
		}
	}
	glEnd();
}

void OnDisplayRender() {
	glClear(GL_COLOR_BUFFER_BIT);
	sun(50.0 , 25);
	orbit(121, 300);
	orbit(200, 300);
	orbit(292, 300);
	orbit(453, 300);


	glPointSize(9);
	glBegin(GL_POINTS); 
	{
		glColor3f(0.75, 0.75, 0.75);
		glVertex2f(sin(radmerkurius) * 120 + 6, cos(radmerkurius) * 120 + 6); // planet merkurius
	}
	glEnd();

	glPointSize(12);
	glBegin(GL_POINTS);
	{
		glColor3f(1, 1, 0);
		glVertex2f(sin(radvenus) * 200 + 6, cos(radvenus) * 200 + 6); // planet venus
	}
	glEnd();

	glPointSize(16);
	glBegin(GL_POINTS);
	{
		glColor3f(0, 0, 1);
		glVertex2f(sin(radbumi) * 280 + 6, cos(radbumi) * 280 + 6); // planet bumi

	}
	glEnd();

	glPointSize(10);
	glBegin(GL_POINTS);
	{
		glColor3f(1.5, 0.75, 0);
		glVertex2f(sin(radmars) * 450 + 6, cos(radmars) * 450 + 6); // planet mars
	}
	glEnd();
	
	
	glutSwapBuffers();
}


void OnDisplayUpdate(int) {
	radmerkurius += 0.03f;
	radvenus += 0.015;
	radbumi += 0.01f;
	radmars += 0.005f;
	std::cout << sin(radmerkurius) + 50 << std::endl;
	glutPostRedisplay();
	glutTimerFunc(7, OnDisplayUpdate, 1);
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(500, 500);
	glutCreateWindow("tugas 2");
	gluOrtho2D(-500, 500, 500, -500);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glutTimerFunc(7, OnDisplayUpdate, 1);
	glutDisplayFunc(OnDisplayRender);
	glEnable(GL_POINT_SMOOTH);
	glutMainLoop();
	return 0;
}
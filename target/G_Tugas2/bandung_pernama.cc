#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <GL/freeglut.h>

double rad1 = 0;
double rad2 = 0;
double rad3 = 0;
double rad4 = 0;


void lingkaran(int x_pos, int y_pos, double r, int vertex) {
	double ngon = (double)vertex;
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = x_pos + r * cos(2 * M_PI * i / ngon);
		double y = y_pos + r * sin(2 * M_PI * i / ngon);
		glVertex2d(x, y);

	}
	glEnd();
}

void garis(int x_pos, int y_pos, double r, int vertex) {
	double ngon = (double)vertex;
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = x_pos + r * cos(2 * M_PI * i / ngon);
		double y = y_pos + r * sin(2 * M_PI * i / ngon);
		glVertex2d(x, y);

	}
	glEnd();
}


void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1.0, 1.2, 0.0);
	lingkaran(0,0,8, 60);
	
	glColor3f(0.1, 0.8, 0.2);
	lingkaran(sin(rad1)*25+0, cos(rad1)*-25+0 , 1.5, 60);
	
	glColor3f(0.8, 1.0, 0.6);
	lingkaran(sin(rad2)*45+0,cos(rad2)*-45+0, 2, 60);
	
	glColor3f(0.4, 0.8, 1.0);
	lingkaran(sin(rad3) * 70 + 0, cos(rad3) * -70 + 0, 2.5, 60);
	
	glColor3f(1.0, 0.7, 0.0);
	lingkaran(sin(rad4) * 95 + 0, cos(rad4) * -95 + 0, 1.9, 60);
	
	glColor3f(1.0, 1.0, 1.0);
	lingkaran(sin(rad3) * 70 + sin(rad3)*10, cos(rad3) * -70 + cos(rad3)*10, 1.0, 60);
	
	glColor3f(1.0, 1.0, 1.0);
	lingkaran(sin(rad4) * 95 + sin(rad3) * 10, cos(rad4) * -95 + cos(rad3) * 10, 1.0, 60);
	
	glColor3f(1.0, 1.0, 1.0);
	lingkaran(sin(rad4) * 95 + sin(rad1) * 5, cos(rad4) * -95 + cos(rad1) * 5, 1.0, 60);
	
	glColor3f(0.5, 1.0, 0.5);
	garis(0, 0, 25, 60);
	
	glColor3f(0.5, 1.0, 0.5);
	garis(0, 0, 45, 60);
	
	glColor3f(0.5, 1.0, 0.5);
	garis(0, 0, 70, 60);
	
	glColor3f(0.5, 1.0, 0.5);
	garis(0, 0, 95, 60);

	glutSwapBuffers();

}

void timer(int) {
	rad1 += 0.03f;
	rad2 += 0.02f;
	rad3 += 0.01f;
	rad4 += 0.009f;

	glutPostRedisplay();
	glutTimerFunc(7, timer, 1);
}

void myinit() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-100, 100, -100, 100);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Tata Surya 672018162");
	glutDisplayFunc(display);
	glutTimerFunc(7, timer, 1);
	myinit();
	glutMainLoop();

	return 0;
}
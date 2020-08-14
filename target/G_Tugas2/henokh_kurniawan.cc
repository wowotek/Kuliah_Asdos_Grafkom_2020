#include <iostream> 
#include <GL/glut.h>
#include <math.h>

double deltaX, deltaC, deltaQ, deltaA = 0;

void project() {
	glPointSize(35);
	glBegin(GL_POINTS);
	{glColor3ub(255, 190, 25);
	glVertex2f(50, 50);
	}
	glEnd();
	glPointSize(15);
	glBegin(GL_POINTS);
	{glColor3ub(180, 266, 241);
	glVertex2f(sin(deltaX) * 10 + 50, cos(deltaX) * 10 + 50);
	}
	glEnd();
	glPointSize(20);
	glBegin(GL_POINTS);
	{glColor3ub(222, 200, 354);
	glVertex2f(sin(deltaC) * 20 + 50, cos(deltaC) * 20 + 50);
	}
	glEnd();
	glPointSize(25);
	glBegin(GL_POINTS);
	{glColor3ub(255, 244, 403);
	glVertex2f(sin(deltaQ) * 30 + 50, cos(deltaQ) * 30 + 50);
	}
	glEnd();
	glPointSize(20);
	glBegin(GL_POINTS);
	{glColor3ub(100, 110, 115);
	glVertex2f(sin(deltaA) * 40 + 50, cos(deltaA) * 40 + 50);
	}
	glEnd();
	glFlush();
}
void tampilan() {
	glClearColor(0, 3, 0, 3);
	glClear(GL_COLOR_BUFFER_BIT);
	project();
}
void rotasi(int) {
	glutPostRedisplay();
	deltaX += 0.05f;
	deltaC += 0.02f;
	deltaQ += 0.03f;
	deltaA += 0.04f;
	glutTimerFunc(20, rotasi, 1);
	glEnable(GL_POINT_SMOOTH);
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("Tweening");
	glutInitWindowSize(1000, 700);
	gluOrtho2D(0, 100, 100, 0);
	glutDisplayFunc(tampilan);
	glutTimerFunc(20, rotasi, 0);
	glutMainLoop();
	return 0;
}
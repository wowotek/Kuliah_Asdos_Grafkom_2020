#include <iostream>
#include <Windows.h>
#include <GL/freeglut.h>
#include <GL/glut.h>
#include <GL/GL.h>
#include <stdio.h>

void display() {

	//Langit
	glBegin(GL_POLYGON);
	glColor3f(0, 1, 1);
	glVertex2f(-1, -0.6);
	glVertex2f(1, -0.6);
	glVertex2f(1, 1);
	glVertex2f(-1, 1);
	glEnd();
	glFlush();

	//Matahari
	float x1, y1, x2, y2;
	float angle;
	double radius = 0.1;
	x1 = 0.5, y1 = 0.5;
	glColor3f(1.0, 1.0, 0.6);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x1, y1);
	for (angle = 1.0f; angle < 361.0f; angle += 0.2)
	{
		x2 = x1 + sin(angle) * radius;
		y2 = y1 + cos(angle) * radius;
		glVertex2f(x2, y2);
	}
	glEnd();
	glFlush();

	//Burung-Burung
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	glVertex3f(-0.8, 0.4, 0.0);
	glVertex3f(-0.3, 0.8, 0.0);
	glVertex3f(0.9, 0.5, 0.0);
	glVertex3f(0.2, 0.95, 0.0);
	glEnd();
	glFlush();

	//Pulau
	glBegin(GL_TRIANGLES);
	glColor3f(0, 1, 0);
	glVertex2f(-1, -0.6);
	glVertex2f(0.5, -0.6);
	glVertex2f(-0.4, 0.3);
	glEnd();
	glFlush();

	//Tiang Bendera
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.3, 0);
	glVertex2f(-0.4, 0.3);
	glVertex2f(-0.39, 0.3);
	glVertex2f(-0.39, 0.4);
	glVertex2f(-0.4, 0.4);
	glEnd();
	glFlush();

	//Bendera
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex2f(-0.4, 0.4);
	glVertex2f(-0.3, 0.4);
	glVertex2f(-0.3, 0.5);
	glVertex2f(-0.4, 0.5);
	glEnd();
	glFlush();


	//Laut
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex2f(-1, -0.6);
	glVertex2f(1, -0.6);
	glVertex2f(1, -1);
	glVertex2f(-1, -1);
	glEnd();
	glFlush();

	//Kapal
	glBegin(GL_POLYGON);
	glColor3f(0.3, 0.1, 0.5);
	glVertex2f(-0.3, -0.8);
	glVertex2f(0.3, -0.8);
	glVertex2f(0.5, -0.4);
	glVertex2f(-0.5, -0.4);
	glEnd();
	glFlush();

	//Tiang
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.3, 0);
	glVertex2f(0.1, -0.4);
	glVertex2f(0.12, -0.4);
	glVertex2f(0.12, 0.4);
	glVertex2f(0.1, 0.4);
	glEnd();
	glFlush();

	//Layar
	glBegin(GL_TRIANGLES);
	glColor3f(1, 0, 0);
	glVertex2f(0.1, -0.2);
	glVertex2f(0.6, 0.2);
	glVertex2f(0.1, 0.5);
	glEnd();
	glFlush();


}

void Initialize() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
	glPointSize(5.0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1000, 600);
	glutInitWindowPosition(200, 100);
	glutCreateWindow("GrafkomH-672018072-Tugas1");
	Initialize();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
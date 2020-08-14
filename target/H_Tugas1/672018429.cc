#include <iostream>
#include <Windows.h>
#include <GL/freeglut.h>
#include <GL/glut.h>
#include <GL/GL.h>
#include <stdio.h>

void display() {

	//BUAT LANGIT
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(-1, -0.6);
	glVertex2f(1, -0.6);
	glVertex2f(1, 1);
	glVertex2f(-1, 1);
	glEnd();
	glFlush();

	//BUAT BURUNG
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	glVertex3f(-0.4, 0.4, 0.0);
	glVertex3f(-0.2, 0.8, 0.0);
	glVertex3f(0.7, 0.5, 0.0);
	glVertex3f(0.1, 0.95, 0.0);
	glEnd();
	glFlush();

	//BUAT PULAU
	glBegin(GL_TRIANGLES);
	glColor3f(0, 1, 0);
	glVertex2f(-2, -0.6);
	glVertex2f(0.5, -0.6);
	glVertex2f(-0.4, 0.3);
	glEnd();
	glFlush();

	//BUAT TIANG BENDERA
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.3, 0);
	glVertex2f(-0.4, 0.3);
	glVertex2f(-0.39, 0.3);
	glVertex2f(-0.39, 0.4);
	glVertex2f(-0.4, 0.4);
	glEnd();
	glFlush();

	//BUAT BENDERA
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex2f(-0.4, 0.4);
	glVertex2f(-0.3, 0.4);
	glVertex2f(-0.3, 0.5);
	glVertex2f(-0.4, 0.5);
	glEnd();
	glFlush();

	//BUAT LAUT
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex2f(-1, -0.6);
	glVertex2f(1, -0.6);
	glVertex2f(1, -1);
	glVertex2f(-1, -1);
	glEnd();
	glFlush();

	//BUAT KAPAL
	glBegin(GL_POLYGON);
	glColor3f(0.4, 0.1, 0.5);
	glVertex2f(-0.4, -0.8);
	glVertex2f(0.4, -0.8);
	glVertex2f(0.7, -0.4);
	glVertex2f(-0.7, -0.4);
	glEnd();
	glFlush();

	//BUAT TIANG
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.3, 0);
	glVertex2f(0.1, -0.4);
	glVertex2f(0.12, -0.4);
	glVertex2f(0.12, 0.4);
	glVertex2f(0.1, 0.4);
	glEnd();
	glFlush();

	//INI LAYAR
	glBegin(GL_TRIANGLES);
	glColor3f(1.00, 0.43, 0.78);
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
#include <GL/freeglut.h>
#include <iostream>
#include <stdlib.h>
#include <Windows.h>


void display() {
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_POLYGON);//badan kapal

	//bodykapal
	glColor3f(1, 1, 1);
	glVertex2f(-0.8, -0.2);//kiri bawah
	glVertex2f(-0.2, -0.2);//kanan bawah
	glVertex2f(0.0, 0.0);//kanan atas
	glVertex2f(-0.9, 0.0);//kiri atas
	glEnd();

	glBegin(GL_POLYGON);//atas kapal
	glColor3f(0.0, 0.15, 0.7546);
	glVertex2f(-0.20, 0.0);
	glVertex2f(-0.75, 0.0);
	glVertex2f(-0.70, 0.15);
	glVertex2f(-0.35, 0.15);
	glEnd();
	
	glBegin(GL_POLYGON);//kotak
	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(0.1, 0.9);//kiri atas
	glVertex2f(0.4, 0.9);//kanan atas
	glVertex2f(0.4, 0.6);//kanan bawah
	glVertex2f(0.1, 0.6);//kiri bawah
	glEnd();

	glBegin(GL_POLYGON);//segitiga
	glColor3f(1.0, 0.34, 0.5);
	glVertex2f(0.7, 0.9);//kiri atas
	glVertex2f(0.9, 0.6);//kanan bawah
	glVertex2f(0.5, 0.6);//kiri bawah
	glEnd();

	glBegin(GL_POLYGON);//tambah
	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(0.2, 0.5);//atas kiri
	glVertex2f(0.3, 0.5);//atas kanan
	glVertex2f(0.3, 0.2);
	glVertex2f(0.2, 0.2);
	glEnd();

	glBegin(GL_POLYGON);//tambah
	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(0.1, 0.3);//atas kiri
	glVertex2f(0.4, 0.3);
	glVertex2f(0.4, 0.4);
	glVertex2f(0.1, 0.4);
	glEnd();

	glBegin(GL_POLYGON);//layang layang
	glColor3f(0.2, 1.0, 0.5);
	glVertex2f(0.25, 0.1);//atas
	glVertex2f(0.4, -0.075);//kanan
	glVertex2f(0.25, -0.4);//bawah
	glVertex2f(0.1, -0.075);//kiri
	glEnd();

	glBegin(GL_POLYGON);//layang layang
	glColor3f(0.9, 0.0, 0.25);
	glVertex2f(0.7, 0.1);//atas
	glVertex2f(0.9, -0.12);//kanan
	glVertex2f(0.82, -0.4);//bawah kanan
	glVertex2f(0.58, -0.4);//bawh kiri
	glVertex2f(0.5, -0.12);//kiri
	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(900, 700);
	//glutInitWindowPosition(200, 100);
	glutCreateWindow("TUGAS ASISTEN DOSEN 1");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
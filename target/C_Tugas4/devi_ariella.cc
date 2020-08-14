#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>


void tampill(void)
{
	glClearColor(1, 1, 1, 1);
	glPointSize(8.0);
	glLineWidth(3.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 700, 0, 600);
}

void lingk(int titik, int jari2nya, int xx, int yy) {
	glBegin(GL_POLYGON);
	const double phi = 3.14;
	for (int a = 0; a <= 360; a++) {
		float sudut = a * (2 * phi / titik);
		float x = xx + jari2nya * cos(sudut);
		float y = yy + jari2nya * sin(sudut);
		glVertex2f(x, y);
	}
	glEnd();
}

void tampil(void) {
	glClear(GL_COLOR_BUFFER_BIT);

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glColor3f(1.0,1.0,0.3);
	lingk(130, 200, 280, 250);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,0.3);
	glVertex2i(120, 130);
	glVertex2i(220, 0);
	glVertex2i(350, 0);
	glVertex2i(440, 130);
	glEnd();

	glColor3f(1, 1, 1);
	lingk(330, 180, 280, 250);
	glEnd();

    glColor3f(1.0,1.0,0.3);
	lingk(160, 160, 280, 240);
	glEnd();

	glColor3f(1, 1, 1);
	lingk(360, 140, 280, 230);
	glEnd();

    glColor3f(1.0,1.0,0.3);
	lingk(190, 120, 280, 220);
	glEnd();

	glColor3f(1, 1, 1);
	lingk(390, 100, 280, 210);
	glEnd();

	glColor3f(1.0,1.0,0.3);
	lingk(220, 80, 280, 200);
	glEnd();

	glColor3f(1, 1, 1);
	lingk(420, 50, 280, 190);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,0.3);
	glVertex2i(260, 200);
	glVertex2i(300, 200);
	glVertex2i(300, 50);
	glVertex2i(260, 50);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,0.3);
	glVertex2i(280, 190);
	glVertex2i(190, 40);
	glVertex2i(370, 40);
	glEnd();



	glFlush();
}


int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(650, 450);
	glutInitWindowPosition(100, 50);
	glutCreateWindow("Devi Ariella - 672018037");
	glutDisplayFunc(tampil);
	tampill();
	glutMainLoop();
}

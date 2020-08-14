#include <iostream>
#include <GL/freeglut.h>


void tampilan() {
	glClear(GL_COLOR_BUFFER_BIT);
	//laut
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex2f(-1, 0);
	glVertex2f(639.0, 0);
	glVertex2f(639.0, 100.5);
	glVertex2f(-1, 100.5);
	glEnd();
	//kapal
	glBegin(GL_QUADS);
	glColor3f(0, 0.5, 0.5); 
	glVertex2f(300.0, 100.5);
	glVertex2f(400.0, 100.5);
	glVertex2f(460.0, 130.5);
	glVertex2f(250.0, 130.5);
	glEnd();
	
	//tiang kapal
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(355.0, 130.5);
	glVertex2f(355.0, 200.0);
	glEnd();
	//layar
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 1.0, 0);
	glVertex2f(356.0, 200.0);
	glVertex2f(356.0, 140.0);
	glVertex2f(430.0, 140.0);
	glEnd();
	//burung
	glLineWidth(0.5);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);
	glVertex2f(190.0, 310.0);
	glVertex2f(210.0, 330.0);
	glVertex2f(220.0, 315.0);
	glVertex2f(230.0, 330.0);
	glVertex2f(250.0, 310.0);
	glEnd();
	//gelembung laut
	glPointSize(5.0);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(100, 20);
	glVertex2f(130, 30);
	glVertex2f(120, 20);
	glVertex2f(140, 40);
	glVertex2f(200, 40);
	glVertex2f(300, 10);
	glEnd();
	//kotak barang
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex2f(253, 131.5);
	glVertex2f(308, 131.5);
	glVertex2f(308, 186.5);
	glVertex2f(253, 186.5);
	glEnd();
	glFlush();


}

void in() {
	glClearColor(0.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 639.0, 0.0, 479.0);
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Tugas 1-672018297");
	glutDisplayFunc(tampilan);
	in();
	glutMainLoop();
	return (0);
}
#include <iostream>
#include <GL/freeglut.h>
#include <vector>
#include <cmath>


#define HEIGHT 480
#define WIDTH 640

using namespace std;


void drawLatar() {
	//langit
	glColor3ub(86, 35, 73);
	glBegin(GL_QUADS);
		glVertex2f(0.0, HEIGHT);
		glVertex2f(0.0, HEIGHT-100);
		glVertex2f(WIDTH, HEIGHT-100);
		glVertex2f(WIDTH, HEIGHT);
	glEnd();

	glColor3ub(173, 105, 137);
	glBegin(GL_QUADS);
		glVertex2f(0.0, HEIGHT - 100);
		glVertex2f(0.0, HEIGHT - 200);
		glVertex2f(WIDTH, HEIGHT - 200);
		glVertex2f(WIDTH, HEIGHT -100);
	glEnd();

	glColor3ub(255, 162, 153);
	glBegin(GL_QUADS);
		glVertex2f(0.0, HEIGHT - 200);
		glVertex2f(0.0, HEIGHT - 350);
		glVertex2f(WIDTH, HEIGHT - 350);
		glVertex2f(WIDTH, HEIGHT - 200);
	glEnd();

	//laut
	glColor3ub(99, 183, 175);
	glBegin(GL_QUADS);
		glVertex2f(0.0, HEIGHT - 350);
		glVertex2f(0.0, HEIGHT - 480);
		glVertex2f(WIDTH, HEIGHT - 480);
		glVertex2f(WIDTH, HEIGHT - 350);
	glEnd();
}

void drawBintang(int jumlahBintang) {
	//bintang
	glColor3ub(255, 255, 255);
	glBegin(GL_POINTS);
	for (int i = 0; i < jumlahBintang; i++) {		
		glVertex2i(rand() % WIDTH, rand() %  HEIGHT - 100 + HEIGHT);
	}
	glEnd();
}

void drawKapal() {
	//kapal
	glColor3ub(30, 35, 43);
	glBegin(GL_POLYGON);
		glVertex2f(100, 100);
		glVertex2f(400, 100);
		glVertex2f(350, 25);
		glVertex2f(150, 25);
	glEnd();
	glColor3ub(19, 23, 28);
	glBegin(GL_POLYGON);
		glVertex2f(400, 100);
		glVertex2f(350, 25);
		glVertex2f(150, 25);
	glEnd();
	glBegin(GL_LINES);
		glVertex2i(250, 100);
		glVertex2i(250, 150);
	glEnd();
	glBegin(GL_LINES);
		glVertex2i(251, 100);
		glVertex2i(251, 150);
	glEnd();
	glBegin(GL_TRIANGLES);
		glVertex2i(251, 150);
		glVertex2i(251, 120);
		glVertex2i(271, 120);
	glEnd();

	glColor3ub(136, 136, 136);
	glBegin(GL_QUADS);
		glVertex2i(120,100);
		glVertex2i(220, 100);
		glVertex2i(220, 150);
		glVertex2i(150, 150);
	glEnd();
	glColor3ub(105, 105, 105);
	glBegin(GL_TRIANGLES);
		glVertex2i(120, 100);
		glVertex2i(220, 100);
		glVertex2i(220, 150);
		 
	glEnd();
}

void drawGunungEs() {
	//gunung es
	glBegin(GL_POLYGON);
		glVertex2i(680, 200);
		glVertex2i(400, 0);
		glVertex2i(680, 0);
	glEnd();
}

void drawPesawat() {
	//pesawat
	glBegin(GL_TRIANGLES);
		glVertex2i(500, 350);
		glVertex2i(500, 300);
		glVertex2i(350, 325);
	glEnd();
	glColor3ub(105, 105, 105);
	glBegin(GL_TRIANGLES);
		glVertex2i(500, 340);
		glVertex2i(500, 300);
		glVertex2i(350, 325);
	glEnd();
}



void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	drawLatar();
	drawKapal();
	drawBintang(24);
	drawGunungEs();
	drawPesawat();
	glFlush();
}


void myinit() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, WIDTH, 0.0, HEIGHT);
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Kapal Tetanus");
	glutDisplayFunc(display);

	myinit();
	glutMainLoop();
	return 0;
}
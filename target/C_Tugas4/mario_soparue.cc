#include <iostream>
#include <GL/glut.h>
#include <math.h>

void Initialize() {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glPointSize(15.0);
	glLineWidth(25.0);
	glViewport(30, 600, 60, 300);
}


const double PI = 3.14;
int i, radius, jumlah_titik, x_tengah, y_tengah;

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5f, 1.0f, 0.0f);
	//1
	glBegin(GL_POLYGON);
	radius = 5;
	jumlah_titik = 45;
	x_tengah = 0;
	y_tengah = 0;
	for (i = 0; i <= 360; i++) {
		float sudut = i * (2 * PI / jumlah_titik);
		float x = x_tengah + radius * cos(sudut);
		float y = y_tengah + radius * sin(sudut);
		glVertex2f(x / 100, y / 100);
	}
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-0.05, 0);
	glVertex2f(0.05, 0);
	glVertex2f(0, -4);
	glEnd();
	//2
	glBegin(GL_LINE_LOOP);
	radius = 20;
	jumlah_titik = 45;
	x_tengah = 0;
	y_tengah = 0;
	for (i = 0; i <= 360; i++) {
		float sudut = i * (2 * PI / jumlah_titik);
		float x = x_tengah + radius * cos(sudut);
		float y = y_tengah + radius * sin(sudut);
		glVertex2f(x /100, y/100);
	}
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(0, -0.25);
	glVertex2f(-0.15, -0.10);
	glVertex2f(0, -4);
	glVertex2f(0.15, -0.10);
	glEnd();
	//3
	glBegin(GL_LINE_LOOP);
	radius = 40;
	jumlah_titik = 45;
	x_tengah = 0;
	y_tengah = 0;
	for (i = 0; i <= 360; i++) {
		float sudut = i * (2 * PI / jumlah_titik);
		float x = x_tengah + radius * cos(sudut);
		float y = y_tengah + radius * sin(sudut);
		glVertex2f(x / 100, y / 100);
	}
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(0, -0.50);
	glVertex2f(-0.30, -0.25);
	glVertex2f(0, -3);
	glVertex2f(0.30, -0.25);
	glEnd();
	//4
	glBegin(GL_LINE_LOOP);
	radius = 60;
	jumlah_titik = 45;
	x_tengah = 0;
	y_tengah = 0;
	for (i = 0; i <= 360; i++) {
		float sudut = i * (2 * PI / jumlah_titik);
		float x = x_tengah + radius * cos(sudut);
		float y = y_tengah + radius * sin(sudut);
		glVertex2f(x / 100, y / 100);
	}
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(0, -0.80);
	glVertex2f(-0.50, -0.35);
	glVertex2f(0, -3);
	glVertex2f(0.50, -0.35);
	glEnd();
	//5
	glBegin(GL_LINE_LOOP);
	radius = 80;
	jumlah_titik = 45;
	x_tengah = 0;
	y_tengah = 0;
	for (i = 0; i <= 360; i++) {
		float sudut = i * (2 * PI / jumlah_titik);
		float x = x_tengah + radius * cos(sudut);
		float y = y_tengah + radius * sin(sudut);
		glVertex2f(x / 100, y / 100);
	}
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(0, -1.00);
	glVertex2f(-0.70, -0.40);
	glVertex2f(0, -3);
	glVertex2f(0.70, -0.40);
	glEnd();
	glFlush();
}


int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 400);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("mario philson soparue - 672017213");
	Initialize();
	glutDisplayFunc(Draw);
	glutMainLoop();
	return 0;
}
#include <iostream> 
#include <math.h>
#include <GL/glut.h>

double me, ve, bu, ma = 0;
const double PI = 3.141592653589793;
int i, radius, jumlah_titik, x_tengah, y_tengah;
void planet() {
	//line1
	glColor3ub(255, 255, 255);
	glBegin(GL_LINE_LOOP);
	radius = 1000;
	jumlah_titik = 30;
	x_tengah = 5000;
	y_tengah = 5000;
	for (i = 0; i <= 360; i++) {
		float sudut = i * (2 * PI / jumlah_titik);
		float x = x_tengah + radius * cos(sudut);
		float y = y_tengah + radius * sin(sudut);
		glVertex2f(x / 100, y / 100);
	}
	glEnd();
	//line2
	glColor3ub(255, 255, 255);
	glBegin(GL_LINE_LOOP);
	radius = 2000;
	jumlah_titik = 45;
	for (i = 0; i <= 360; i++) {
		float sudut = i * (2 * PI / jumlah_titik);
		float x = x_tengah + radius * cos(sudut);
		float y = y_tengah + radius * sin(sudut);
		glVertex2f(x / 100, y / 100);
	}
	glEnd();
	//line3
	glColor3ub(255, 255, 255);
	glBegin(GL_LINE_LOOP);
	radius = 3000;
	jumlah_titik = 60;
	for (i = 0; i <= 360; i++) {
		float sudut = i * (2 * PI / jumlah_titik);
		float x = x_tengah + radius * cos(sudut);
		float y = y_tengah + radius * sin(sudut);
		glVertex2f(x / 100, y / 100);
	}
	glEnd();
	//line4
	glColor3ub(255, 255, 255);
	glBegin(GL_LINE_LOOP);
	radius = 4000;
	jumlah_titik = 60;
	for (i = 0; i <= 360; i++) {
		float sudut = i * (2 * PI / jumlah_titik);
		float x = x_tengah + radius * cos(sudut);
		float y = y_tengah + radius * sin(sudut);
		glVertex2f(x / 100, y / 100);
	}
	glEnd();

	//matahari
	glPointSize(80);
	glBegin(GL_POINTS);
	{
		glColor3ub(255, 190, 19);
		glVertex2f(50, 50);
	}
	glEnd();
	//merkurius
	glPointSize(18);
	glBegin(GL_POINTS);
	{
		glColor3ub(128, 128, 128);
		glVertex2f(sin(me) * 10 + 50, cos(me) * 10 + 50);
	}
	glEnd();
	//venus
	glPointSize(22);
	glBegin(GL_POINTS);
	{
		glColor3ub(219, 203, 39);
		glVertex2f(sin(ve) * 20 + 50, cos(ve) * 20 + 50);
	}
	glEnd();
	//bumi
	glPointSize(27);
	glBegin(GL_POINTS);
	{
		glColor3ub(35, 156, 213);
		glVertex2f(sin(bu / 2) * 30 + 50, cos(bu / 2) * 30 + 50);
	}
	glEnd();

	//bulan
	glPointSize(5);
	glBegin(GL_POINTS);
	{
		glColor3ub(250, 250, 250);
		glVertex2f(sin(bu * 4) * 5 + (sin(bu / 2) * 30 + 50), cos(bu * 4) * 5 + (cos(bu / 2) * 30 + 50));
	}
	glEnd();

	//mars
	glPointSize(20);
	glBegin(GL_POINTS);
	{
		glColor3ub(234, 137, 48);
		glVertex2f(sin(ma / 1.5) * 40 + 50, cos(ma / 1.5) * 40 + 50);
	}
	glEnd();

	//satelit1
	glPointSize(8);
	glBegin(GL_POINTS);
	{
		glColor3ub(244, 0, 0);
		glVertex2f(sin(ma * 8) * 3 + (sin(ma / 1.5) * 40 + 50), cos(ma * 8) * 3 + (cos(ma / 1.5) * 40 + 50));
	}
	glEnd();
	//satelit2
	glPointSize(12);
	glBegin(GL_POINTS);
	{
		glColor3ub(255, 0, 0);
		glVertex2f(sin(ma * 4) * 6 + (sin(ma / 1.5) * 40 + 50), cos(ma * 4) * 6 + (cos(ma / 1.5) * 40 + 50));
	}
	glEnd();

	glFlush();
}

void DisplayUpdate(int) {
	me += 0.06f;
	ve += 0.03f;
	bu += 0.02f;
	ma += 0.01f;

	glutPostRedisplay();
	glutTimerFunc(1000 / 60, DisplayUpdate, 1);

}


void DisplayRender() {
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	planet();

}

int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Dio Yudha Perdana 672018165");
	glutDisplayFunc(DisplayRender);
	gluOrtho2D(0, 100, 100, 0);
	glEnable(GL_POINT_SMOOTH);
	glutTimerFunc(1000 / 60, DisplayUpdate, 1);
	glutMainLoop();

	return 0;

}
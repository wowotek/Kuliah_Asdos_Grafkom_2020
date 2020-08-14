#include <iostream>
#include <GL/freeglut.h>
//Matius Andreatna
//672018239
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glColor3f(0, 0.3, 0.3);
	glVertex2f(100.0, 200.0);
	glColor3f(0.3, 0.3, 0);
	glVertex2f(100.0, 380.0);
	glColor3f(0.3, 0, 0.3);
	glVertex2f(280.0, 380.0);
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(280.0, 200.0);
	glEnd();

	glLineWidth(2);
	glColor3f(0, 0.5, 0.5);
	glBegin(GL_LINE_LOOP);
	glVertex2f(100.0, 200.0);
	glVertex2f(100.0, 380.0);
	glVertex2f(280.0, 380.0);
	glVertex2f(280.0, 200.0);
	glEnd();

	glColor3f(0, 0, 0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2f(100.0, 200.0);
	glVertex2f(280.0, 380.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(100.0, 380.0);
	glVertex2f(280.0, 200.0);
	glEnd();

	glFlush();
}

void UkuranLayar(int& horizontal, int& vertical)
{
	RECT desktop;
	const HWND hDesktop = GetDesktopWindow();
	GetWindowRect(hDesktop, &desktop);
	horizontal = desktop.right;
	vertical = desktop.bottom;
}

void myinit() {
	glClearColor(0.0, 0.0, 0.8, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 499.0, 0.0, 499.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);

	int horizontal = 0, vertical = 0;
	UkuranLayar(horizontal, vertical);
	float xMid = (horizontal - 640) / 2, yMid = (vertical - 640) / 2;

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 640);
	glutInitWindowPosition(xMid, yMid);
	glutCreateWindow("Matius Andreatna | 672018239");
	glutDisplayFunc(display);

	myinit();
	glutMainLoop();

	return 0;
}
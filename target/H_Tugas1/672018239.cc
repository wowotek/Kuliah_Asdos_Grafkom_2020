#include <iostream>
#include <GL/freeglut.h>
#include <Windows.h>

//Matius Andreatna
//672018239

void laut() {
	glColor3f(0.0, 0.0, 1);
	glBegin(GL_POLYGON);
	glVertex2d(0, 0);
	glVertex2d(640, 0);
	glColor3f(0.0, 0.0, 0.2);
	glVertex2d(640, 225);
	glVertex2d(0, 225);
	glEnd();
}

void kapal() {
	glColor3f(0.2, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2d(75, 175);
	glColor3f(0.4, 0, 0);
	glVertex2d(300, 175);
	glVertex2d(360, 240);
	glColor3f(0.2, 0, 0);
	glVertex2d(30, 240);
	glEnd();
	
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2d(75, 240);
	glColor3f(0.5, 0.5, 0.5);
	glVertex2d(300, 240);
	glVertex2d(250, 290);
	glColor3f(0, 0, 0);
	glVertex2d(100, 290);
	glEnd();

	int x = 100;
	for (int i = 0; i < 4; i++) {
		glColor3d(1, 1, 1);
		glBegin(GL_POLYGON);
		glVertex2d(x, 255);
		glColor3d(1, 1, 0);
		glVertex2d(x + 30, 255);
		glColor3d(1, 1, 1);
		glVertex2d(x + 30, 275);
		glColor3d(1, 1, 0);
		glVertex2d(x, 275);
		x += 40;
		glEnd();
	}

	glColor3d(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2d(125, 350);
	glVertex2d(75 ,350);
	glVertex2d(75, 335);
	glVertex2d(125, 335);
	glEnd();

	glColor3d(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2d(125, 335);
	glVertex2d(75, 335);
	glVertex2d(75, 320);
	glVertex2d(125, 320);
	glEnd();

	glColor3d(0, 0, 0);
	glLineWidth(2);
	glBegin(GL_LINES);
	glVertex2d(125, 290);
	glVertex2d(125, 350);
	glEnd();
}

void lingkaran(int radius, int jumlah_titik, int x_tengah, int y_tengah) {
	glColor3f(1, 0.1, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i <= 360; i++) {
		float sudut = i * (2 * 3.14 / jumlah_titik);
		float x = x_tengah + radius * cos(sudut);
		float y = y_tengah + radius * sin(sudut);
		glVertex2f(x, y);
	}
	glEnd();
}

void pantai() {
	glColor3f(0.2, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2d(480, 0);
	glVertex2d(640, 0);
	glColor3f(0.4, 0, 0);
	glVertex2d(640, 180);
	glEnd();
}

void burung(int radius, int jumlah_titik, int x_tengah, int y_tengah) {
	glColor3d(0, 0, 0);
	glBegin(GL_LINE_STRIP);
	for (int i = 0; i <= 20; i++) {
		float sudut = i * (2 * 3.14 / jumlah_titik);
		float x = x_tengah + radius * cos(sudut);
		float y = y_tengah + radius * sin(sudut);
		glVertex2f(x, y);
	}
	glEnd();
	glBegin(GL_LINE_STRIP);
	for (int i = 20; i <= 40; i++) {
		float sudut = i * (2 * 3.14 / jumlah_titik);
		float x = x_tengah + radius * cos(sudut);
		float y = y_tengah + radius * sin(sudut);
		glVertex2f(x+radius*2-5, y+radius/2);
	}
	glEnd();
}

void langit() {
	glColor4f(1.0, 0.5, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(0, 225);
	glVertex2d(640, 225);
	glColor3f(0.0, 0.0, 0.2);
	glVertex2d(640, 480);
	glVertex2d(0, 480);
	glEnd();
}

void hujan() {
	glColor3f(0, 0, 1);
	glBegin(GL_LINES);
	for (int i = 0; i <= 640; i+=20) {
		for (int j = 225; j <= 480; j+=20) {
			glVertex2f(i, j);
			glVertex2f(i-10, j-5);
		}
	}
	glEnd();
}

void kilat() {
	glColor3f(1, 1, 0);
	int x = 70;
	for (int i = 0; i <= 5; i++) {
		glBegin(GL_LINE_STRIP);
		glVertex2i(500 - i * x, 480);
		glVertex2i(450 - i * x, 400);
		glVertex2i(500 - i * x, 400);
		glVertex2i(450 - i * x, 320);
		glEnd();
	}
}

void tampilan() {
	glClear(GL_COLOR_BUFFER_BIT);
	langit();
	lingkaran(80, 70, 600, 225);
	kilat();
	hujan();
	laut();
	kapal();
	pantai();
	burung(20, 70, 500, 250);
	burung(20, 70, 550, 270);
	burung(20, 70, 600, 275);
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
	glClearColor(1.0, 0.5, 0.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 639.0, 0.0, 479.0);
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);

	int horizontal = 0, vertical = 0;
	UkuranLayar(horizontal, vertical);
	float xMid = (horizontal - 640) / 2, yMid = (vertical - 480) / 2;

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(xMid, yMid);
	glutCreateWindow("Matius Andreatna | 672018239");
	glutDisplayFunc(tampilan);

	myinit();
	glutMainLoop();

	return 0;
}
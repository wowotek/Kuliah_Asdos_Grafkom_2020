#include <GL/glut.h>

int A1[] = {50, 50};
int A2[] = {50, 200};
int A3[] = {100, 50};
int A4[] = {100, 200};
int B1[] = {150, 200};
int B2[] = {150, 50};
int B3[] = {200, 200};
int B4[] = {200, 50};

void myInitial() {
	glClearColor(1, 1, 1, 1);
	glPointSize(5.0);
	glLineWidth(3.0);
	gluOrtho2D(0.0, 320.0, 0.0, 320.0);
}

void putWarna(int r = 1, int g = 1, int b = 1, float a = 1) {
	glColor4f(r / 255.0f, g / 255.0f, b / 255.0f, a);
}

void titik(float x1, float y1, float xx1, float yy1, float x2, float y2, float xx2, float yy2) {
	float m1 = (yy1 - y1) / (xx1 - x1);
	float m2 = (yy2 - y2) / (xx2 - x2);
	float c1 = y1 - (m1 * x1);
	float c2 = y2 - (m2 * x2);

	float rX = (c2 - c1) / (m1 - m2);
	float rY = (m1 * rX) + c1;
	putWarna(252, 3, 69);
	glBegin(GL_POINTS);
		glVertex2f(rX, rY);
	glEnd();
}

void garr(int x, int y, int xx, int yy) {
	glBegin(GL_LINES);
		glVertex2i(x, y);
		glVertex2i(xx, yy);
	glEnd();
}

void tampil() {
	glClear(GL_COLOR_BUFFER_BIT);

	//ke kanan
	putWarna(252, 211, 3);
	garr(A1[0], A1[1], B1[0], B1[1]);

	putWarna(3, 252, 78);
	garr(A3[0], A3[1], B3[0], B3[1]);

	//ke kiri
	putWarna(3, 152, 252);
	garr(A2[0], A2[1], B2[0], B2[1]);

	putWarna(0, 0, 0);
	garr(A4[0], A4[1], B4[0], B4[1]);

	//titik gann
	titik(A1[0], A1[1], B1[0], B1[1], A2[0], A2[1], B2[0], B2[1]);

	titik(A1[0], A1[1], B1[0], B1[1], A4[0], A4[1], B4[0], B4[1]);

	titik(A3[0], A3[1], B3[0], B3[1], A2[0], A2[1], B2[0], B2[1]);

	titik(A3[0], A3[1], B3[0], B3[1], A4[0], A4[1], B4[0], B4[1]);

	putWarna(0, 0, 0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(A1[0], A1[1]);
		glVertex2i(A2[0], A2[1]);
		glVertex2i(B3[0], B3[1]);
		glVertex2i(B4[0], B4[1]);
	glEnd();

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 400);
	glutInitWindowPosition(533, 254);
	glutCreateWindow("Muchamad Iqbal Fauzi-672018382");

	glutDisplayFunc(tampil);
	myInitial();
	glutMainLoop();
}
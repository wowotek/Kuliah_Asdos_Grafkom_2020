#include <iostream>
#include <GL/glut.h>
#include <algorithm>

using namespace std;

char huruf[100];
int indx, mX = 0, mY = 0;
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

void output() {
	system("cls");
	cout << "MouseX: " << mX << " | " << "MouseY: " << mY << endl;
	for (auto i : huruf) {
		if (i > 0)
			cout << char(i) << ' ';
	}
}

void pencet(unsigned char key, int x, int y) {
	int size = sizeof(huruf) / sizeof(huruf[0]);
	auto cek = find(huruf, huruf + size, key);
	if (cek == end(huruf)) {
		huruf[indx] = key;
		indx++;
	}
	output();
}

void lepas(unsigned char key, int x, int y) {
	int size = sizeof(huruf) / sizeof(huruf[0]);
	auto cek = find(huruf, huruf + size, key);
	if (cek != end(huruf)) {
		huruf[distance(huruf, cek)] = 0;
	}
	output();
}

void mouse(int x, int y) {
	mX = x;
	mY = y;
	output();
}
void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1.0, 0.0, 1.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(10, 10);
	glutInitWindowPosition(0, 0);
	glutCreateWindow(" ");
	glutDisplayFunc(display);
	glutMotionFunc(mouse);
	glutKeyboardUpFunc(lepas);
	glutKeyboardFunc(pencet);

	myinit();
	glutMainLoop();

	return 0;
}
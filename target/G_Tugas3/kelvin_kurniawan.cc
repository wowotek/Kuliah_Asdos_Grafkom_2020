#include <iostream> // Opsional
#include <math.h>
#include <GL/freeglut.h>
#include <vector>
#include <algorithm>

std::vector<unsigned char> myKey;

int x_pos, y_pos;

void renderObject() {
	glClear(GL_COLOR_BUFFER_BIT);

	glFlush();
}

void displayTerminal() {
	system("cls");
	std::cout << "Mouse Coordinates, X : " << x_pos << " | Y : " << y_pos << std::endl;
	for (unsigned char x : myKey) {
		std::cout << x << " ";
	}
}

void onKeyboardDownEvent(unsigned char key, int mouseX, int mouseY) {
	myKey.push_back(key);
	displayTerminal();
}

void onKeyboardUpEvent(unsigned char key, int mouseX, int mouseY) {
	myKey.erase(std::remove(myKey.begin(), myKey.end(), key), myKey.end());
	displayTerminal();
}

void mouseEvent(int x, int y) {
	x_pos = x;
	y_pos = y;

	displayTerminal();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(500, 0);
	glutCreateWindow("Tugas Ketiga ~ Kelvin Kurniawan");

	glutSetKeyRepeat(GLUT_KEY_REPEAT_OFF);
	glutDisplayFunc(renderObject);
	glutKeyboardFunc(onKeyboardDownEvent);
	glutKeyboardUpFunc(onKeyboardUpEvent);
	glutMotionFunc(mouseEvent);
	gluOrtho2D(0, 200, 0, 200);

	glutMainLoop();

	glClearColor(1.0, 1.0, 1.0, 1.0);
	glPointSize(10);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 100.0, 0.0, 100.0);

	return 0;
}
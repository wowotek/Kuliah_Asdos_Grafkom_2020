#include <iostream>
#include <GL/freeglut.h>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;
int i[100];
int j;

void display() {

}

void myKeyboard(unsigned char key, int x, int y)
{
	int cari = key;
	int ukur = sizeof(i) / sizeof(i[0]);
	auto cek = find(i, i + ukur, key);
	std::cout << key << " ";

	if (cek == end(i)) {
		i[j] = key;
		j++;
	}
}

void myKeyboardup(unsigned char key, int X, int Y)
{
	int ukur = sizeof(i) / sizeof(i[0]);
	int search = key;
	auto cek = find(i, i + ukur, key);
	std::cout << key << " ";

	if (cek == end(i)) {
		i[distance(i, cek)] = 0;
		j++;
	}
	system("cls");
}

void myMouse(int x, int y) // Bonus (Ketika tombol di lepas maka koordinat hilang)
{
	system("cls");
	std::cout << "mouseX: " << x << " | mouseY: " << y << std::endl;
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 50, 0, 50);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(100, 100);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("672018096");
	glutDisplayFunc(display);
	glutKeyboardFunc(myKeyboard);
	glutKeyboardUpFunc(myKeyboardup);
	glutPassiveMotionFunc(myMouse);
	myinit();
	glutMainLoop();
	return 0;
}
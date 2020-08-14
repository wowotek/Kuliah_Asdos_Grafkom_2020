#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <GL/freeglut.h>

char un[1000];
char idx;

void display() {

}


void myMouse(int mouseX, int mouseY)//harus di klik
{
	system("clear");
	std::cout <<  " mouseX: " << mouseX << " | mouseY: " << mouseY << std::endl;
}
void myKeyboard(unsigned char key, int mouseX, int mouseY)
{
	char ukur = sizeof(un) / sizeof(un[0]);
	auto cek = std::find(un, un + ukur, key);
	std::cout << key << " ";

	if (cek == std::end(un)) {
		un[idx] = key;
		idx++;
	}
}

void myKeyboardup(unsigned char key, int mouseX, int mouseY)
{
	system("clear");
	char ukur = sizeof(un) / sizeof(un[0]);
	auto cek = std::find(un, un + ukur, key);
	std::cout << key << " ";

	if (cek == std:: end(un)) {
		un[std::distance(un,cek)] = 0;
		idx++;
	}

}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 100.0, 0.0, 100.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(0, 300);
	glutCreateWindow("Points");
	glutDisplayFunc(display);
	glutKeyboardFunc(myKeyboard);
	glutKeyboardUpFunc(myKeyboardup);
	glutPassiveMotionFunc(myMouse);
	myinit();
	glutMainLoop();

	return 0;
}
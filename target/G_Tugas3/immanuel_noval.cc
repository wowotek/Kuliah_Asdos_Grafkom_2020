#include <iostream>
#include <GL/freeglut.h>
#include <cstdlib>
#include <math.h>
#include <vector>

std::vector<int> mouseX;
std::vector<int> mouseY;

void myMouseClick(int mouseX , int mouseY) {
	system("cls");
	std::cout << " Mouse X : " << mouseX << " | Mouse Y : " << mouseY << std::endl;
	glutPostRedisplay();
}

void myKeyboardDown(unsigned char key, int mouseX, int mouseY) {
	
	std::cout << key << " ";
	glutPostRedisplay();
}

void myKeyboardUp(unsigned char key, int mouseX, int mouseY) {
	system("cls");
	std::cout << key << " ";
	glutPostRedisplay();
}

void Tampil(void) {

}

int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_DOUBLE);
	glutInitWindowSize(100, 100);
	glutCreateWindow("Imanuel Noval Amanda Prahara 672018145");

	glutDisplayFunc(Tampil);

	glutMotionFunc(myMouseClick);
	glutKeyboardUpFunc(myKeyboardUp);
	glutKeyboardFunc(myKeyboardDown);

	gluOrtho2D(0, 100, 100, 0);
	glutMainLoop();

	return 0;
}

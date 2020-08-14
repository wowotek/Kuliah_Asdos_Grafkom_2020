#include <iostream>
#include <GL/glut.h>

unsigned char array;
int index;

void render(void)
{

}

void keyboardDown(unsigned char button, int X, int Y)
{

	std::cout << button << array;

}

void keyboardUp(unsigned char button, int X, int Y)
{

	std::cout << button << std::endl;
	glutPostRedisplay();
	system("clear");
}

void mouseMovement(int x, int y) {

	system("clear");
	std::cout << "mouseX:  " << x << " | " << "mouseY:  " << y << std::endl;

}

void mouseUp(int button, int state, int x, int y) {

	system("clear");
	std::cout << "mouseX: " << x << " | " << "mouseY: " << y << std::endl;

}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_MULTISAMPLE);
	glutInitWindowSize(100, 100);
	glutInitWindowPosition(600, 300);
	glutCreateWindow("Dio Yudha Perdana 672018165");
	glutDisplayFunc(render);

	glutMotionFunc(mouseMovement);
	glutMouseFunc(mouseUp);
	glutKeyboardFunc(keyboardDown);
	glutKeyboardUpFunc(keyboardUp);

	glClearColor(0, 0, 0, 1);
	gluOrtho2D(0, 100, 100, 0);

	glutMainLoop();
	return 0;

}
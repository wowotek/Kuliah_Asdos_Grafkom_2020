#include <iostream>
#include <GL/glut.h>
#include <algorithm>

#define WINDOW_WIDTH 500
#define WINDOW_HEIGHT 500	

#define CANVAS_WIDTH WINDOW_WIDTH 
#define CANVAS_HEIGHT WINDOW_HEIGHT 

#define ub unsigned char

void OnRender(void) {

}
void Mouse(int button, int state, int x, int y) {
	std::cout << button << " " << state << " " << x << " " << y << std::endl;
}
void myMovementMouse(int x, int y) {
	std::cout  << x << " " << y << std::endl;
}
void OnKeyboardDownEvent(ub key, int mouseX, int mouseY) {
	system("clear"); // IF WINDOWS USE "CLEAR" FOR LINUX
	std::cout << key << " DOWN" << std::endl;
}
void OnKeyboardUpEvent(ub key, int mouseX, int mouseY) {
	system("clear"); // IF WINDOWS USE "CLEAR" FOR LINUX
	std::cout << key << " UP" << std::endl;
}
void OnKeyboardSpecialDownEvent(int key, int mouseX, int mouseY) {
	system("clear"); // IF WINDOWS USE "CLEAR" FOR LINUX
	std::cout << "SPECIAL " << key << " DOWN" << std::endl;
}
void OnKeyboardSpecialUpEvent(int key, int mouseX, int mouseY) {
	system("clear"); // IF WINDOWS USE "CLEAR" FOR LINUX
	std::cout << "SPECIAL " << key << " UP" << std::endl;
}

int main(int argc, char** argv) {
	//GLUT INIT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_MULTISAMPLE);
	glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);

	glutCreateWindow(argv[0]);

	glutDisplayFunc(OnRender);

	glutMouseFunc(Mouse);
	glutMotionFunc(myMovementMouse);

	glutKeyboardFunc(OnKeyboardDownEvent);
	glutKeyboardUpFunc(OnKeyboardUpEvent);
	glutSpecialFunc(OnKeyboardSpecialDownEvent);
	glutSpecialUpFunc(OnKeyboardSpecialUpEvent);

	glClearColor(0, 0, 0, 1);
	gluOrtho2D(0, CANVAS_WIDTH, CANVAS_HEIGHT, 0);

	glEnable(GL_LINE_SMOOTH);
	glEnable(GL_POINT_SMOOTH);
	glEnable(GL_POLYGON_SMOOTH);

	glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);
	glHint(GL_POINT_SMOOTH_HINT, GL_NICEST);
	glHint(GL_POLYGON_SMOOTH_HINT, GL_NICEST);

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);

	glEnable(GL_BLEND);

	glutMainLoop();

	return 0;
}
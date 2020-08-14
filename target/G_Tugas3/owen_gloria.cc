#include <iostream>
#include <GL/glut.h>

#define WINDOW_WIDTH 10
#define WINDOW_HEIGHT 10

#define CANVAS_WIDTH WINDOW_WIDTH 
#define CANVAS_HEIGHT WINDOW_HEIGHT

#define ub unsigned char

void
OnRender(void)
{

}

void
OnKeyboardDownEvent(ub key, int mouseX, int mouseY)
{
	system("clear");
	std::cout << key << "DOWN" << std::endl;
}

void
OnKeyboardUpEvent(ub key, int mouseX, int mouseY)
{
	system("clear");
	std::cout << key << "UP" << std::endl;
}

void
OnKeyboardSpecialDownEvent(int key, int mouseX, int mouseY)
{
	system("clear");
	std::cout << "Special" << key << "DOWN" << std::endl;
}

void
OnKeyboardSpecialUpEvent(int key, int mouseX, int mouseY)
{
	system("clear");
	std::cout << "Special" << key << "UP" << std::endl;
}

void myMouse(int button, int state, int x, int y) {
	
	std::cout << button << "   " << state << "UP" << x << "DOWN" << y << std::endl;

	//GLUT_LEFT_BUTTON GLUT_RIGHT_BUTTON GLUT_MIDDLE_BUTTON

	
	//GLUT_UP GLUT_DOWN
}

int main(int argc, char** argv) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_MULTISAMPLE);
	glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);

	glutCreateWindow(argv[0]);

	glutDisplayFunc(OnRender);

	glutKeyboardFunc(OnKeyboardDownEvent);
	glutKeyboardUpFunc(OnKeyboardUpEvent);
	glutSpecialFunc(OnKeyboardSpecialDownEvent);
	glutSpecialUpFunc(OnKeyboardSpecialUpEvent);

	glutMouseFunc(myMouse);

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
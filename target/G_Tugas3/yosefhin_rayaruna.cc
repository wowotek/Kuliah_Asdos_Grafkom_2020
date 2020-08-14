#include <iostream>
#include <GL/freeglut.h>

#define WINDOW_WIDTH 10
#define WINDOW_HEIGHT 10

#define CANVAS_WIDTH WINDOW_WIDTH 
#define CANVAS_HEIGHT WINDOW_HEIGHT 

#define ub unsigned char 

ub poskey[256]; 

void display(void) {
	
}

void OnMouseEvent(int button, int state, int X, int Y) {
	system("cls");
	std::cout << "X = " << X << " Y = " << Y << std:: endl; 
}

void OnKeyboardDownEvent(ub key, int X, int Y) {
	poskey[key] = true; 
	std::cout << key;
}

void OnKeyboardUpEvent(ub key, int X, int Y) {
	poskey[key] = false;
	if (poskey[key] == false) {
		system("cls");
	}
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 500, 0, 500);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_MULTISAMPLE);
	glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("TUGAS 3 ASDOS");
	glutDisplayFunc(display);
	glutSetKeyRepeat(GLUT_KEY_REPEAT_OFF);
	glutKeyboardFunc(OnKeyboardDownEvent);
	glutKeyboardUpFunc(OnKeyboardUpEvent);
	glutMouseFunc(OnMouseEvent); 
	myinit();
	glutMainLoop();

	return 0;
}
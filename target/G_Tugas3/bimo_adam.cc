#include <iostream>
#include <GL/freeglut.h>

bool* keystate = new bool[256];
//unsigned char keystate[256];

void display(void) {
}

void mouse(int button, int state, int x, int y) {
	if (state == 0);
	system("cls");
	std::cout << "Klik Mouse | X : " << x << " Y : " << y << std::endl;
}

void keyup(unsigned char key, int x, int y) {
	keystate[key] = false;
	if (keystate[key] == false) {
		system("cls");
		
	}
	
}

void keydown(unsigned char key, int x, int y) {
	keystate[key] = true;
	std::cout << key << " ";
	glutKeyboardUpFunc(keyup);
	
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_MULTISAMPLE);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(50, 50);
	glutCreateWindow(argv[0]);
	glutDisplayFunc(display);
	glutSetKeyRepeat(GLUT_KEY_REPEAT_OFF);

	glutMouseFunc(mouse);
	glutKeyboardFunc(keydown);
	

	glClearColor(0, 0, 0, 1);
	gluOrtho2D(-100, 100, -100, 100);

	glutMainLoop();

	return 0;
}
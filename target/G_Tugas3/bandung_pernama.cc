#include <iostream>
#include <GL/freeglut.h>
#include <vector>
#include <algorithm>


using namespace std;
int X = 0, Y = 0;
vector<char> sv;
vector<char>::iterator tes;

void printOut(void);
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

void keyboardDown(unsigned char key, int x, int y) {
	tes = find(sv.begin(), sv.end(), key);
	if (tes == sv.end()) sv.push_back(key);
	printOut();
}

void keyboardUp(unsigned char key, int x, int y) {
	tes = find(sv.begin(), sv.end(), key);
	if (tes != sv.end()) {
		int index = distance(sv.begin(), tes);
		sv.erase(sv.begin() + index);
	} printOut();
}
void printOut() {
	system("clear");
	cout << "Mouse X: " << X << " | " << "Mouse Y: " << Y << endl;
	for (auto it : sv) cout << it << ' ';
}

void mouse(int x, int y) {
	X = x;
	Y = y;
	printOut();
}

void mouseklik(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON && (state == GLUT_DOWN || state == GLUT_UP)) {
		X = x;
		Y = y;
	}
	printOut();
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
	glutInitWindowSize(50, 100);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Bandung Pernama-672018162");
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboardDown);
	glutKeyboardUpFunc(keyboardUp);
	glutMotionFunc(mouse);				  
	glutMouseFunc(mouseklik);		       
	
	myinit();
	glutMainLoop();
	return 0;
}
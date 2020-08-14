#include <GL/freeglut.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int KursorX = 0, KursorY = 0;
vector<char> arr;
vector<char>::iterator graf;
void printOut(void);
void tampilan() {
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}
void qwertyDown(unsigned char key, int x, int y) {
	graf = find(arr.begin(), arr.end(), key);
	if (graf== arr.end()) arr.push_back(key);
	printOut();
}

void qwertyUp(unsigned char key, int x, int y) {
	graf = find(arr.begin(), arr.end(), key);
	if (graf != arr.end()) {
		int index = distance(arr.begin(), graf);
		arr.erase(arr.begin() + index);
	} printOut();
}

void printOut() {
	system("clear");
	cout << "KursorX: " << KursorX << " | " << "KursorY: " << KursorY << endl;
	for (auto it : arr) cout << it << ' ';
}

void Button(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON && (state == GLUT_DOWN || state == GLUT_UP)) {
		KursorX = x;
		KursorY = y;
	}
	printOut();
}

void Geser(int x, int y) {
	KursorX = x;
	KursorY = y;
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
	glutInitWindowSize(70, 70);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Heinricho Dimas Prasetya");
	glutDisplayFunc(tampilan);	  
	glutKeyboardFunc(qwertyDown);
	glutKeyboardUpFunc(qwertyUp);
	glutMotionFunc(Geser);
	glutMouseFunc(Button);
	myinit();
	glutMainLoop();
	return 0;
}
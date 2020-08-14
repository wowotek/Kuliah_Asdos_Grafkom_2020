#include <iostream> 
#include <GL/glut.h>
#include <vector>
#include <algorithm>


using namespace std;
int MouseX = 0, MouseY = 0;
vector<char> ini;
vector<char>::iterator coba;
void printOut(void);




void tampilan() {
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}



void keyboardDown(unsigned char key, int x, int y) { //keyboard
	coba = find(ini.begin(), ini.end(), key);
	if (coba == ini.end()) ini.push_back(key);
	printOut();
}




void keyboardUp(unsigned char key, int x, int y) {
	coba = find(ini.begin(), ini.end(), key);
	if (coba != ini.end()) {
		int index = distance(ini.begin(), coba);
		ini.erase(ini.begin() + index);
	} printOut();
}


void printOut() {
	system("clear");
	cout << "MouseX: " << MouseX << " | " << "MouseY: " << MouseY << endl;
	for (auto it : ini) cout << it << ' ';
}



void krusor(int x, int y) {
	MouseX = x;
	MouseY = y;
	printOut();
}



void pressmouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON && (state == GLUT_DOWN || state == GLUT_UP)) {
		MouseX = x;
		MouseY = y;
	}
	printOut();
}



void layar2() {
	glColor3f(1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glColor3f(1.0, 1.0, 0.0);
}



int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(500, 100);
	glutCreateWindow("faisal hakim 672018167");
	glutMotionFunc(krusor);
	glutMouseFunc(pressmouse);
	glutDisplayFunc(tampilan);
	glutKeyboardFunc(keyboardDown);
	glutKeyboardUpFunc(keyboardUp);
	layar2();
	glutMainLoop();
	return 0;
}
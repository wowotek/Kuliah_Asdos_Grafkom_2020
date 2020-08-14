#include <GL/freeglut.h>
#include <iostream>
#include <algorithm>

using namespace std;

int total = 0;
char karakter[999];

int TitikX = 0;
int TitikY = 0;
bool ketemu = false;

void Render() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
	gluOrtho2D(0, 640, 480, 0);
}

void Cetak(void) {
	system("cls");
	cout << "MouseX : " << TitikX << " | " << "MouseY : " << TitikY << endl;
	for (int i = 0; i < total; i++) {
		if (karakter[i] != 0)
			cout << karakter[i] << " ";
	}
}

void KeyboardDown(unsigned char key, int x, int y) {

	ketemu = false;
	for (auto i : karakter) {
		if (i == key) {
			ketemu = true;
		}
	}
	if (!ketemu) {
		karakter[total] = key;
		total++;
	}
	Cetak();
}
void KeyboardUp(unsigned char key, int x, int y) {
	char* temukan = find(karakter, karakter + sizeof(karakter) / sizeof(karakter[0]), key);
	if (temukan != end(karakter)) {
		int jarak = distance(karakter, temukan);
		karakter[jarak] = 0;
	}
	Cetak();
}

void MyMouse(int x, int y) {
	Cetak();
	TitikX = x;
	TitikY = y;
}

int main(int argc, char** argv) {
	//Inisialisasi Program
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(100, 100);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Sean Alessandro Pattirane - 672018112");
	glutKeyboardFunc(KeyboardDown);
	glutKeyboardUpFunc(KeyboardUp);
	glutMotionFunc(MyMouse);
	glutDisplayFunc(Render);
	//Selesai Inisialisasi
	glutMainLoop();
}
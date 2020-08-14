#include <GL/glut.h>
#include <GL/gl.h>
#include <cmath>




void lengkungan(int n, float cx, float cy, float radius, float rotAngle) {

	double angle, angleInc;
	int k;
	if (n < 3)return;
	angle = rotAngle * 3.14159265 / 360;
	angleInc = 2 * 3.14159265 / n;
	glVertex2f(radius*cos(angle) + cx, radius*sin(angle) + cy);
	for (k = 0; k < n - 1; k++) {
		angle += angleInc;
		glVertex2f((radius + angleInc)*cos(angle) + cx, (radius + angleInc)*sin(angle) + cy);

	}
}

void lingkaran(float TITIK_LAYAR_X, float TITIK_LAYAR_y, float lebar_x, float lebar_y, float JUMLAH_SUDUT, float ROTASI) {
	GLfloat derajat = (360.f / JUMLAH_SUDUT) * M_PI / 180.0f;
	glBegin(GL_TRIANGLE_FAN);
	GLfloat sudut = 0.0f - ROTASI;
	for (int _k = 0; _k < JUMLAH_SUDUT; ++_k) {
		glVertex2f(TITIK_LAYAR_X + (lebar_x * cos(sudut)), TITIK_LAYAR_y + (lebar_y * sin(sudut)));
		sudut += derajat;
	}
	glEnd();
}







void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1.0, 1.0, 0.3);
	for (int i = 10; i < 50; i++) {
		lingkaran(50, 60-i, 60-i, 50, 1000, 20);
	}

	glEnd();
	
	double angleInc, i;
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 1.0, 1.0);
	angleInc = 2 * 3.14159265 / 500;
	for (i = 0; i < 45; i += angleInc)
		lengkungan(50, 50, 51, i -1, 551);
	glEnd();

	glColor3f(1.0, 1.0, 0.3);
	for (int i = 0; i <20; i++) {
		lingkaran(50, 50-i , 43-i-4, 40, 1000, 20);
	}

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 1.0, 1.0);
	angleInc = 2 * 3.14159265 / 500;
	for (i = 0; i < 35; i += angleInc)
		lengkungan(50, 50, 51, i - 1, 551);
	glEnd();

	glColor3f(1.0, 1.0, 0.3);
	for (int i = 0; i < 30; i++) {
		lingkaran(50, 50 - i, 30 - i , 30, 1000, 20);
	}

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 1.0, 1.0);
	angleInc = 2 * 3.14159265 / 500;
	for (i = 0; i < 25; i += angleInc)
		lengkungan(50, 50, 51, i - 1, 551);
	glEnd();

	glColor3f(1.0, 1.0, 0.3);
	for (int i = 0; i < 30; i++) {
		lingkaran(50, 50 - i, 20 - i, 20, 1000, 20);
	}


	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 1.0, 1.0);
	angleInc = 2 * 3.14159265 / 500;
	for (i = 0; i < 17; i += angleInc)
		lengkungan(50, 50, 51, i - 1, 551);
	glEnd();

	glColor3f(1.0, 1.0, 0.3);
	for (int i = 0; i < 12; i++) {
		lingkaran(50, 50 - i, 12-i, 12, 1000, 20);
	}
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 1.0, 1.0);
	angleInc = 2 * 3.14159265 / 500;
	for (i = 0; i < 9; i += angleInc)
		lengkungan(50, 50, 51, i - 1, 551);
	glEnd();

	glColor3f(1.0, 1.0, 0.3);
	for (int i = 0; i < 10; i++) {
		lingkaran(50, 50 - i, 4 , 4, 100, 80);
	}
	glFlush();
	glutSwapBuffers();

}



int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(50,50);
	glutCreateWindow("Arif Hasan Nawawi - 672018337");
	glutDisplayFunc(display);
	gluOrtho2D(-10, 150.0, -10, 150.0);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glutMainLoop();
	return 0;
}
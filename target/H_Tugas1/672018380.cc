#include <iostream>
#include <GL/freeglut.h>

void tree() {
	glBegin(GL_POLYGON);
		glColor3ub(150, 82, 25);
		glVertex2f(500.0, 280.0);
		glVertex2f(500.0, 310.0);
		glVertex2f(505.0, 310.0);
		glVertex2f(505.0, 280.0);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3ub(37, 198, 0);
		glVertex2f(480.0, 310.0);
		glVertex2f(503.0, 330.0);
		glVertex2f(525.0, 310.0);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3ub(37, 198, 0);
		glVertex2f(480.0, 318.0);
		glVertex2f(503.0, 340.0);
		glVertex2f(525.0, 318.0);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3ub(37, 198, 0);
		glVertex2f(480.0, 326.0);
		glVertex2f(503.0, 347.0);
		glVertex2f(525.0, 326.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3ub(150, 82, 25);
		glVertex2f(700.0, 330.0);
		glVertex2f(700.0, 360.0);
		glVertex2f(705.0, 360.0);
		glVertex2f(705.0, 330.0);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3ub(37, 198, 0);
		glVertex2f(670.0, 360.0);
		glVertex2f(703.0, 380.0);
		glVertex2f(735.0, 360.0);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3ub(37, 198, 0);
		glVertex2f(670.0, 367.0);
		glVertex2f(703.0, 387.0);
		glVertex2f(735.0, 367.0);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3ub(37, 198, 0);
		glVertex2f(670.0, 374.0);
		glVertex2f(703.0, 394.0);
		glVertex2f(735.0, 374.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3ub(150, 82, 25);
		glVertex2f(900.0, 310.0);
		glVertex2f(900.0, 340.0);
		glVertex2f(905.0, 340.0);
		glVertex2f(905.0, 310.0);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3ub(33, 177, 0);
		glVertex2f(870.0, 340.0);
		glVertex2f(903.0, 440.0);
		glVertex2f(933.0, 340.0);
	glEnd();
}

void house() {
	glBegin(GL_POLYGON);
		glColor3ub(248, 150, 0);
		glVertex2f(120.0, 270.0);
		glVertex2f(120.0, 360.0);
		glVertex2f(360.0, 360.0);
		glVertex2f(360.0, 270.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3ub(170, 107, 76);
		glVertex2f(80.0, 360.0);
		glVertex2f(120.0, 410.0);
		glVertex2f(360.0, 410.0);
		glVertex2f(400.0, 360.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3ub(23, 150, 205);
		glVertex2f(130.0, 320.0);
		glVertex2f(130.0, 350.0);
		glVertex2f(190.0, 350.0);
		glVertex2f(190.0, 320.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3ub(23, 150, 205);
		glVertex2f(290.0, 320.0);
		glVertex2f(290.0, 350.0);
		glVertex2f(350.0, 350.0);
		glVertex2f(350.0, 320.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3ub(16, 122, 167);
		glVertex2f(210.0, 270.0);
		glVertex2f(210.0, 350.0);
		glVertex2f(270.0, 350.0);
		glVertex2f(270.0, 270.0);
	glEnd();
}

void ship() {
	glBegin(GL_POLYGON);
		glColor3ub(70, 130, 180);
		glVertex2f(520.0, 100.0);
		glVertex2f(480.0, 140.0);
		glVertex2f(750.0, 140.0);
		glVertex2f(660.0, 100.0);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3ub(253, 180, 115);
		glVertex2f(460.0, 146.0);
		glVertex2f(590.0, 190.0);
		glVertex2f(590.0, 146.0);
	glEnd();

	glBegin(GL_LINE_LOOP);
		glColor3ub(70, 130, 180);
		glVertex2f(625.0, 140.0);
		glVertex2f(625.0, 190.0);
		glVertex2f(631.0, 190.0);
		glVertex2f(631.0, 140.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3ub(70, 130, 180);
		glVertex2d(637.0, 140.0);
		glVertex2f(637.0, 190.0);
		glVertex2f(643.0, 190.0);
		glVertex2f(643.0, 140.0);
	glEnd();

	glBegin(GL_LINE_LOOP);
		glColor3ub(70, 130, 180);
		glVertex2f(650.0, 140.0);
		glVertex2f(650.0, 190.0);
		glVertex2f(656.0, 190.0);
		glVertex2f(656.0, 140.0);
	glEnd();
}

void mountain() {
	glBegin(GL_TRIANGLES);
		glColor3ub(178, 135, 100);
		glVertex2f(0.0, 400.0);
		glVertex2f(0.0, 510.0);
		glVertex2f(400.0, 400.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3ub(178, 135, 100);
		glVertex2f(200.0, 400.0);
		glVertex2f(900.0, 599.0);
		glVertex2f(999.0, 599.0);
		glVertex2f(999.0, 400.0);
	glEnd();
}

void sky() {
	glBegin(GL_POLYGON);
		glColor3ub(108, 206, 203);
		glVertex2f(0.0, 400.0);
		glVertex2f(0.0, 599.0);
		glVertex2f(999.0, 599.0);
		glVertex2f(999.0, 400.0);
	glEnd();
}

void grass() {
	glBegin(GL_POLYGON);
		glColor3ub(45, 254, 112);
		glVertex2f(0.0, 150.0);
		glVertex2f(0.0, 400.0);
		glVertex2f(999.0, 400.0);
		glVertex2f(999.0, 250.0);
	glEnd();
}

void sea() {
	glBegin(GL_POLYGON);
		glColor3ub(53, 152, 219);
		glVertex2f(0.0, 150.0);
		glVertex2f(999.0, 250.0);
		glVertex2f(999.0, 0);
		glVertex2f(0.0, 0.0);
	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);

	sea();
	grass();
	sky();
	mountain();
	ship();
	house();
	tree();

	glFlush();
}

void initGL() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 999.0, 0.0, 599.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1000, 600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Tugas OpenGL - 672018380");
	glutDisplayFunc(display);

	initGL();
	glutMainLoop();

	return 0;
}
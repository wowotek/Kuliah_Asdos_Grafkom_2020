#include <GL/glut.h>


void myDisplay(void) {
	float a1x = 50, a1y = 50, b1x = 150, b1y = 200,
		a2x = 50, a2y = 200, b2x = 150, b2y = 50,
		a3x = 100, a3y = 50, b3x = 200, b3y = 200,
		a4x = 100, a4y = 200, b4x = 200, b4y = 50,
		m1, m2, m3, m4, c1, c2, c3, c4, p1x, p1y, p2x, p2y, p3x, p3y, p4x, p4y;
	glClear(GL_COLOR_BUFFER_BIT);
	

	glBegin(GL_LINES);
	glColor3f(0.2, 1.0, 0);
	glVertex2f(a1x, a1y);
	glVertex2f(b1x, b1y);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0,0.3,0);
	glVertex2f(a2x, a2y);
	glVertex2f(b2x, b2y);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 0, 1.0);
	glVertex2f(a3x, a3y);
	glVertex2f(b3x, b3y);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.3, 0.4, 0.6);
	glVertex2f(a4x, a4y);
	glVertex2f(b4x, b4y);
	glEnd();

	m1 = (b1y - a1y) / (b1x - a1x);
	m2 = (b2y - a2y) / (b2x - a2x);
	m3 = (b3y - a3y) / (b3x - a3x);
	m4 = (b4y - a4y) / (b4x - a4x);

	c1 = a1y - (a1x * m1);
	c2 = a2y - (a2x * m2);
	c3 = a3y - (a3x * m3);
	c4 = a4y - (a4x * m4);

	p1x = (c2 - c1) / (m1 - m2);
	p1y = (m1 * p1x) + c1;
	p2x = (c3 - c2) / (m2 - m3);
	p2y = (m2 * p2x) + c2;
	p3x = (c4 - c3) / (m3 - m4);
	p3y = (m3 * p3x) + c3;
	p4x = (c1 - c4) / (m4 - m1);
	p4y = (m4 * p4x) + c4;


	glBegin(GL_POINTS);
	glColor3f(0, 0, 0);
	glVertex2f(p1x, p1y);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(0, 0, 0);
	glVertex2f(p2x, p2y);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(0, 0, 0);
	glVertex2f(p3x, p3y);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(0, 0, 0);
	glVertex2f(p4x, p4y);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex2f(a1x, a1y);
	glVertex2f(a2x, a2y);
	glVertex2f(b3x, b3y);
	glVertex2f(b4x, b4y);
	glEnd();

	glFlush();
}

void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(10.0);
	glMatrixMode(GL_PROJECTION);
	glLineWidth(4.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}


int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1080, 720);
	glutInitWindowPosition(100, -100);
	glutCreateWindow("Syahren Aulia Achsan - 672018190");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}
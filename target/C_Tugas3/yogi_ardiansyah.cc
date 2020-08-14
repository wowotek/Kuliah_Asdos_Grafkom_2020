#include <GL/glut.h>

void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f,0.0f,0.0f);
	glPointSize(10.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(4.0f);
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void mydisplay(void)
{
	float a1x=50, a1y=50, a2x=50, a2y=200, a3x=100, a3y=50, a4x=100, a4y=200, 
		b1x=150, b1y=200, b2x=150, b2y=50, b3x=200, b3y=200, b4x=200, b4y=50, 
		Ma1b1, Ma2b2, Ma3b3, Ma4b4, Ca1b1, Ca2b2, Ca3b3, Ca4b4, px, py, pz, pi, pa, pb, pc, pd;
	Ma1b1 = (b1y - a1y) / (b1x - a1x);
    Ma2b2 = (b2y - a2y) / (b2x - a2x);
    Ma3b3 = (b3y - a3y) / (b3x - a3x);
    Ma4b4 = (b4y - a4y) / (b4x - a4x);
    Ca1b1 = a1y - (a1x * Ma1b1);
    Ca2b2 = a2y - (a2x * Ma2b2);
    Ca3b3 = a3y - (a3x * Ma3b3);
    Ca4b4 = a4y - (a4x * Ma4b4);

	px = (Ca2b2 - Ca1b1) / (Ma1b1 - Ma2b2);
    py = (Ma1b1 * px) + Ca1b1;
    pz = (Ca4b4 - Ca1b1) / (Ma1b1 - Ma4b4);
    pi = (Ma1b1 * pz) + Ca1b1;
    pa = (Ca3b3 - Ca4b4) / (Ma4b4 - Ma3b3);
    pb = (Ma4b4 * pa) + Ca4b4;
    pc = (Ca3b3 - Ca2b2) / (Ma2b2 - Ma3b3);
    pd = (Ma2b2 * pc) + Ca2b2;

	glBegin(GL_LINES);
	glColor3f(1.00, 1.00, 0.00);
	glVertex2i(50, 50);
	glVertex2i(150, 200);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.00, 0.00, 1.00);
	glVertex2i(50, 200);
	glVertex2i(150, 50);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.00, 1.00, 0.00);
	glVertex2i(100, 50);
	glVertex2i(200, 200);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.00, 0.00, 0.00);
	glVertex2i(100, 200);
	glVertex2i(200, 50);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex2f(px,py);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex2f(pz,pi);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex2f(pa,pb);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex2f(pc,pd);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.00, 0.00, 0.00);
	glVertex2i(50, 50);
	glVertex2i(200, 50);
	glVertex2i(200, 200);
	glVertex2i(50, 200);
	glEnd();

	glFlush();
}

int main(int argc, char**argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1080, 720);
	glutInitWindowPosition(100,50);
	glutCreateWindow("Yogi Ardiansyah - 672018220");
	glutDisplayFunc(mydisplay);
	myInit();
	glutMainLoop();
}
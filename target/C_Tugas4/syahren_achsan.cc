#include <GL/glut.h>
#include <math.h>

const double PI = 3.141592653589793;

void myInit(void)
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(3.0);
	gluOrtho2D(0.0,600.0,0.0,600.0);
}

void banyakgon(int n, float cx, float cy, float radius, float rotangle)
{
	double angle, angleInc;
	int k;
	if (n < 3)return;
	angle = rotangle * PI / 180;
	angleInc = 2 * PI / n;

	glVertex2f(radius * cos(angle) + cx, radius * sin(angle) + cy);
	for (k = 0; k < n-1 ; k++)
	{
		angle += angleInc;
		glVertex2f(
			(radius + angleInc) * cos(angle) + cx,
		    (radius + angleInc) * sin(angle) + cy);
	}
}

void panggil() {
	int letak_x = 300;
	int letak_y = 300;
	int radius = 200;
	int sisi = 6;
	int banyak = 40;
	double r=0.09,g=0.0, b=1;

	glBegin(GL_LINE_STRIP);
	for (int k = 1; k <= banyak; k++) {
		glColor3f(0, g, b);
		banyakgon(sisi, letak_x, letak_y, radius - (k * 0.2), k * 2);
		radius -= 5;
		g += 0.09;
		b -= 0.04;
	}
	glEnd();
}

void myDisplay(void)
{
	double angleInc,i;
	glClear(GL_COLOR_BUFFER_BIT);
	
	panggil();
	glFlush();
	glutSwapBuffers();
}


int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Syahren Aulia Achsan - 672018190");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
	return 0;
}
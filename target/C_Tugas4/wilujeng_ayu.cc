#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void myInit(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-15.0, 15.0, -15.0, 15.0, -15.0, 15.0);
}

void ngon(int n, float cx, float cy, float radius, float rotAngle)
{
	double angle, angleInc;
	int a;
	if (n < 3) return;
	angle = rotAngle * 3.14159265 / 172;
	angleInc = 2 * 3.14159265 / n;
	glVertex2f(radius*cos(angle) + cx, radius*sin(angle) + cy);
	for (a = 0; a < n; a++)
	{
		angle += angleInc;
		glVertex2f(radius*cos(angle) + cx, radius*sin(angle) + cy);
	}
}

void Tampilan(void)
{
	int b;
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_STRIP);
	for (b = 1; b <= 21; b++)
	{
		glColor3f(10.-15 - (b*0.45), 0.-5 + (b*0.8), 0.8 + (b*0.050));
		ngon(6, 0.12, 0, 7.1 - (b*0.35), b * 3);
	}
	glEnd();
	glutSwapBuffers();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Wilujeng Ayu Nawang Sari - 672018234");
	myInit();
	glutDisplayFunc(Tampilan);
	glutMainLoop();
	return 0;
}

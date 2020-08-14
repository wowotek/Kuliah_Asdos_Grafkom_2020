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
	int j;
	if (n < 3) return;
	angle = rotAngle * 3.14159265 / 250;
	angleInc = 2 * 3.14159265 / n;
	glVertex2f(radius*cos(angle) + cx, radius*sin(angle) + cy);
	for ( j = 0 ; j < n ; j++ )
	{
		angle += angleInc;
		glVertex2f(radius*cos(angle) + cx, radius*sin(angle) + cy);
	}
}
void tampil(void)
{
	int e;
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_STRIP);
	for( e = 1; e <=50 ; e++ )

	{
		glColor3f(0.-4 -  (e*0.70) , 0.-2 + (e*0.40), 0.10+ (e*0.80));
		ngon(6, 0.0, 0,10 - (e*0.2), e * 3);
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
	glutCreateWindow("Jessica Margaret Br.Sembiring - 672018238");
	myInit();
	glutDisplayFunc(tampil);
	glutMainLoop();
	return 0;
}

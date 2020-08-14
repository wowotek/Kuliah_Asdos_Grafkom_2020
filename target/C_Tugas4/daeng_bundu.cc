#include <GL/glut.h>
#include <math.h>


void init(void)
{
	glClearColor(0.0,0.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLineWidth(2.0);
	glLoadIdentity();
	glOrtho(-15.0, 15.0, -15.0, 15.0, -15.0, 15.0);
	glViewport(40, 400, 60, 300);
}

void ngon(int a, float bx, float cy, float radius, float rotAngle)
{
	double angle, angleInc;
	int d;
	if(a<3)return;
	angle = rotAngle*3.14159265/360;
	angleInc = 2*3.14159265/a;
	glVertex2f(radius*cos(angle)+bx, radius*sin(angle)+cy);
	for(d=0;d<a-1;d++)
	{
	angle += angleInc;
	glVertex2f((radius + angleInc)*cos(angle)+bx, (radius + angleInc)*sin(angle)+cy);
		
	}
}

void display(void)
{
	double angleInc, z;
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_STRIP);	
	glColor3f(0.5,0.6,0.2);
	angleInc=2*3.14159265/40;
	for(z=0;z<10;z+=angleInc){
		glColor3f(13-(z*0.25),0.0+(z*0.05),0.0-(z*0.25));
	ngon(6,0,0,z-0.6,148-z*15);
	}
	glEnd();
	glFlush();
	glutSwapBuffers();
}

int main(int argc, char** argv) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(50, 100);
	glutCreateWindow("JUAN TAMALAKI OHYVER 672018172");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
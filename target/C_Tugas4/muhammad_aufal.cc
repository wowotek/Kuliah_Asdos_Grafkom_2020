#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <math.h>

void init(void);
void display(void);

int main (int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(480, 480);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("MUHAMMAD AUFAL WAADI - 672018270");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-100.0, 100.0, -100.0, 100.0, -100.0, 100.0);
}

void ngon(int n, float cx, float cy, float radius, float rotAngle){
    double angle, angleInc;
    int k;

    if(n<3) return;
    angle=rotAngle*3.14159265/180;
    angleInc=2*3.14159265/n;

    glVertex2f(radius*cos(angle)+cy, radius*sin(angle)+cy);

    for(k=0;k<n;k++){
        angle+=angleInc;
        glVertex2f(radius*cos(angle)+cy, radius*sin(angle)+cy);
    }
}

void display(void)
{
    int i;
	glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_STRIP);
        for(i=0; i<40; i++){
            glColor3ub(250-(i*5), 250-(i*5), 0+(i*4));
            ngon(6,0,0,1+i*2,99-i);
        }
    glEnd();
	glutSwapBuffers();
}
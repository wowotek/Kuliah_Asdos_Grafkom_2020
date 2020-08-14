#include <math.h>
#include <GL/glut.h>

void init(void)
{
    glClearColor(0,0,0,0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
	glLineWidth(1.0);
    glOrtho(-10.0,10.0,-10.0,10.0,-10.0,10.0);
	glViewport(40,400,60,300);
}

void nGon(int n, float cx, float cy, float radius, float rotAngle)
{
    double angle, angleInc;
    int k;
    if(n < 3 )return;
    angle = rotAngle * 3.14159265 / 180;
    angleInc = 2 * 3.14159265/n;
    glVertex2f(radius * cos(angle) + cx, radius * sin(angle)+cy);
    for(k = 0; k < n; k++)
    {
    angle += angleInc;
    glVertex2f(radius * cos(angle) + cx, radius *sin(angle)+cy);
    }
}

void mydisplay(void)
{
    double angleInc,j,k=60;
    glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_STRIP);
    for(j=0.15; j<10; j+=0.15)
	{
        glColor3f(5.0-(j*0.55), 5.0-(j*0.55),  0.0+(j*0.07));
        nGon(6, 0, 0, j,k);
		k-=0.923;
    }
    glEnd();
    glutSwapBuffers();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(50,50);
    glutCreateWindow("Yogi Ardiansyah - 672018220");
    init();
    glutDisplayFunc(mydisplay);
    glutMainLoop();
    return 0;
}

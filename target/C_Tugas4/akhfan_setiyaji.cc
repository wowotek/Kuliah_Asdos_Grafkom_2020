#include <GL/glut.h>
#include <math.h>

void Window(double a, double b, double c, double d)
{
    gluOrtho2D(a, b, c, d);
}

void init()
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glColor3f (1.0, 1.0, 0.1);
    Window(-6.0, 6.0, -6.0, 6.0);

}

void ling()
{
    double angle, angleInc = 2*3.14159265/6 , inc = 10.0/100,radius = 1.0/100;
    glClear (GL_COLOR_BUFFER_BIT);
    for (int x = 0; x <= 50; x++)
    {
        angle = x*3.14159265/100;
        glBegin (GL_LINE_STRIP);
        for (int y=0; y <= 6; y++)
        {
            angle += angleInc;
            glVertex2d(radius * sin(angle), radius *cos(angle));
        }

        radius += inc;
    }
    glEnd();
    glutSwapBuffers();
    glFlush();
}

void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    ling();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(450,50);
    glutCreateWindow("Akhfan Setiyaji-672018348");
    glutDisplayFunc(myDisplay);
    init();
    glutMainLoop();
    return 0;
}
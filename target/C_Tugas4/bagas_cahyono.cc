#include <cstdlib>
#include <GL/glut.h>
#include <cmath>

void uhuy(){
    double angle,angleInc = 2*3.14159265/6.0;
    double inc = 10.0/100;
    double radius = 1.0/100.0;
    glClear (GL_COLOR_BUFFER_BIT);
    for (int j = 0; j <= 50; j++)
    {
        angle = j* (3.14159265/100.0); //rotasi
        glBegin (GL_LINE_STRIP);
        glColor3ub(255-(j*5),255-(j*5),j*4);
        for (int k=0; k <= 6; k++)
        {
            angle += angleInc;
            glVertex2d(radius * sin(angle), radius *cos(angle));
        }
        glEnd();
        radius += inc;
    }
glutSwapBuffers();
glFlush();
}

void display(void){
    glClear (GL_COLOR_BUFFER_BIT);
    uhuy();
}

int main(int argc, char** argv){
    glutInitWindowSize(500, 400);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGB);
    glutCreateWindow("Ferdian Bagas Cahyono - 672018156");
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glViewport(0.0, 0.0, 500.0, 500.0);
    gluOrtho2D(-6.0, 6.0, -6.0, 6.0);
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glColor3f (1.0, 0.0, 1.0);
    glPointSize (3.0);
    glutDisplayFunc(display);
    glMatrixMode (GL_MODELVIEW);
    glutMainLoop();
    return 0;
}
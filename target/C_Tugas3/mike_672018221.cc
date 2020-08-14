#include "iostream"
#include "GL/freeglut.h"

void myInit(void)
{
    glClearColor(1, 1, 1, 1);
    glPointSize(9.0);
    glLineWidth(3.0);
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
}

void display(void)
{
    float a1x = 50, a1y = 50, a2x = 50, a2y = 200, a3x = 100, a3y = 50, a4x = 100, a4y = 200,
        b1x = 150, b1y = 200, b2x = 150, b2y = 50, b3x = 200, b3y = 200, b4x = 200, b4y = 50,
        i1, i2, i3, i4, j1, j2, j3, j4, px, py, pa, pb, pc, pd, pe, pf;    
        
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
    glColor3ub(255, 252, 59);
    glVertex2f(a1x, a1y);
    glVertex2f(b1x, b1y);
    glEnd();

    
    glBegin(GL_LINES);
    glColor3ub(59, 75, 255);
    glVertex2f(a2x, a2y);
    glVertex2f(b2x, b2y);
    glEnd();

    
    glBegin(GL_LINES);
    glColor3ub(141, 255, 59);
    glVertex2f(a3x, a3y);
    glVertex2f(b3x, b3y);
    glEnd();

    
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(a4x, a4y);
    glVertex2f(b4x, b4y);
    glEnd();

    
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(200.0, 200.0); glVertex2f(50.0, 200.0);
    glVertex2f(50.0, 200.0);  glVertex2f(50.0, 50.0);
    glVertex2f(50.0, 50.0);   glVertex2f(200.0, 50.0);
    glVertex2f(200.0, 50.0);  glVertex2f(200.0, 200.0);
    glEnd();

    
    i1 = (b1y - a1y) / (b1x - a1x);
    i2 = (b2y - a2y) / (b2x - a2x);
    i3 = (b3y - a3y) / (b3x - a3x);
    i4 = (b4y - a4y) / (b4x - a4x);
    j1 = a1y - (a1x * i1);
    j2 = a2y - (a2x * i2);
    j3 = a3y - (a3x * i3);
    j4 = a4y - (a4x * i4);

    
    px = (j2 - j1) / (i1 - i2);
    py = (i1 * px) + j1;

    pa = (j4 - j1) / (i1 - i4);
    pb = (i1 * pa) + j1;

    pc = (j3 - j4) / (i4 - i3);
    pd = (i4 * pc) + j4;

    pe = (j3 - j2) / (i2 - i3);
    pf = (i2 * pe) + j2;

  
    glBegin(GL_POINTS);
    glColor3ub(255, 59, 59);
    glVertex2f(px, py);
    glVertex2f(pa, pb);
    glVertex2f(pc, pd);
    glVertex2f(pe, pf);
    glEnd();

    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(100, 150);
    glutCreateWindow("Michael E. Ernawan - 672018221");
    glutDisplayFunc(display);
    myInit();
    glutMainLoop();
}

#include <GL/glut.h>

void init(void){
 glClearColor(1.0,1.0,1.0,0.0);
 glColor3f(0.0,0.0,0.0);
 glPointSize(10.0);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glLineWidth(4.0);
 gluOrtho2D(0.0,640.0,480.0,0.0);
}

void display(void)
{
	float a1x=50, a1y=50, a2x=50, a2y=200, a3x=100, a3y=50, a4x=100, a4y=200,
	b1x=150, b1y=200, b2x=150, b2y=50, b3x=200, b3y=200, b4x=200, b4y=50, ma1b1,
	mb2a2, ma3b3, mb4a4, ca1b1, cb2a2, ca3b3, cb4a4, pa, pb, pc, pd, pe, pf, pg, ph;
	glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_LINES);
    glColor3f(0.0,0.0,1.0);
        glVertex2f(a1x,a1y);
        glVertex2f(b1x,b1y);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
        glVertex2f(a3x,a3y);
        glVertex2f(b3x,b3y);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0,1.0,0.0);
        glVertex2f(b2x,b2y);
        glVertex2f(a2x,a2y);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,1.0,0.0);
        glVertex2f(b4x,b4y);
        glVertex2f(a4x,a4y);
    glEnd();

    glBegin(GL_LINE_LOOP);
	glColor3f(0.0,0.0,0.0);
        glVertex2f(a1x,a1y);
        glVertex2f(b4x,b4y);
        glVertex2f(b3x,b3y);
        glVertex2f(a2x,a2y);
    glEnd();

    //rumus
    ma1b1 = (b1y-a1y)/(b1x-a1x);
    ma3b3 = (b3y-a3y)/(b3x-a3x);
    mb2a2 = (a2y-b2y)/(a2x-b2x);
    mb4a4 = (a4y-b4y)/(a4x-b4x);
    ca1b1 = a1y-(a1x*ma1b1);
    cb2a2 = b2y-(b2x*mb2a2);
    ca3b3 = a3y-(a3x*ma3b3);
    cb4a4 = b4y-(b4x*mb4a4);

    //titik potong
    pa = (cb2a2-ca1b1)/(ma1b1-mb2a2);
    pb = (ma1b1*pa)+ca1b1;
    pc = (cb4a4-ca1b1)/(ma1b1-mb4a4);
    pd = (ma1b1*pc)+ca1b1;
    pe = (cb2a2-ca3b3)/(ma3b3-mb2a2);
    pf = (ma3b3*pe)+ca3b3;
    pg = (cb4a4-ca3b3)/(ma3b3-mb4a4);
    ph = (ma3b3*pg)+ca3b3;

    //hasil
    glBegin(GL_POINTS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(pa,pb);
    glVertex2f(pc,pd);
    glVertex2f(pe,pf);
    glVertex2f(pg,ph);
    glEnd();
	glFlush();
}


int main(int argc, char** argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize (1080, 720);
  glutInitWindowPosition (100, 50);
  glutCreateWindow ("Stivania Gracella Lima - 672018283");
  init();
  glutDisplayFunc(display);
  glutMainLoop();
}

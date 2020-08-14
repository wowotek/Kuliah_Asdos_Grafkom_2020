#include <iostream>
#include <GL/glut.h>

void init(void);
void display(void);


void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glLineWidth(4.0f);
    glPointSize(7.0);
    glOrtho(-500.0, 500.0, -500.0, 500.0, -500.0, 500.0);
}
void display(void)
{
    float
        a1x = 50, a1y = 50, b1x = 150, b1y = 200,
        a2x = 50, a2y = 200, b2x = 150, b2y = 50,
        a3x = 100, a3y = 50, b3x = 200, b3y = 200,
        a4x = 100, a4y = 200, b4x = 200, b4y = 50,
        Ma1b1, Ma2b2, Ma3b3, Ma4b4,
        Ca1b1, Ca2b2, Ca3b3, Ca4b4,
        px, py, pa, pb, pc, pd, pe, pf;

    glClear(GL_COLOR_BUFFER_BIT);
    //garis A1B1
    glBegin(GL_LINES);
    glColor3ub(255, 252, 59);
    glVertex2f(a1x, a1y);
    glVertex2f(b1x, b1y);
    glEnd();

    //garis A2B2
    glBegin(GL_LINES);
    glColor3ub(59, 75, 255);
    glVertex2f(a2x, a2y);
    glVertex2f(b2x, b2y);
    glEnd();

    //garis A3B3
    glBegin(GL_LINES);
    glColor3ub(141, 255, 59);
    glVertex2f(a3x, a3y);
    glVertex2f(b3x, b3y);
    glEnd();

    //garis A4B4
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(a4x, a4y);
    glVertex2f(b4x, b4y);
    glEnd();

    //border hitam
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(200.0, 200.0); glVertex2f(50.0, 200.0);
    glVertex2f(50.0, 200.0);  glVertex2f(50.0, 50.0);
    glVertex2f(50.0, 50.0);   glVertex2f(200.0, 50.0);
    glVertex2f(200.0, 50.0);  glVertex2f(200.0, 200.0);
    glEnd();

    //rumus perpotongan
    Ma1b1 = (b1y - a1y) / (b1x - a1x);
    Ma2b2 = (b2y - a2y) / (b2x - a2x);
    Ma3b3 = (b3y - a3y) / (b3x - a3x);
    Ma4b4 = (b4y - a4y) / (b4x - a4x);
    Ca1b1 = a1y - (a1x * Ma1b1);
    Ca2b2 = a2y - (a2x * Ma2b2);
    Ca3b3 = a3y - (a3x * Ma3b3);
    Ca4b4 = a4y - (a4x * Ma4b4);

    //titik potong
    px = (Ca2b2 - Ca1b1) / (Ma1b1 - Ma2b2);
    py = (Ma1b1 * px) + Ca1b1;

    pa = (Ca4b4 - Ca1b1) / (Ma1b1 - Ma4b4);
    pb = (Ma1b1 * pa) + Ca1b1;

    pc = (Ca3b3 - Ca4b4) / (Ma4b4 - Ma3b3);
    pd = (Ma4b4 * pc) + Ca4b4;

    pe = (Ca3b3 - Ca2b2) / (Ma2b2 - Ma3b3);
    pf = (Ma2b2 * pe) + Ca2b2;

    //hasil
    glBegin(GL_POINTS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(px, py);
    glVertex2f(pa, pb);
    glVertex2f(pc, pd);
    glVertex2f(pe, pf);
    glEnd();

    glutSwapBuffers();
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1080, 720);
    glutInitWindowPosition(100, 50);
    glutCreateWindow("Bagus Pramono-672018228");
    init(); //memanggil fungsi init
    glutDisplayFunc(display);//memanggil fungsi display
    glutMainLoop(); //untuk menjalankan program
    return 0;
}
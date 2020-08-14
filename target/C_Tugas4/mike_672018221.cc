#include <GL/freeglut.h>
#include <cmath>


void lingkaran(float TITIK_LAYAR_X, float TITIK_LAYAR_Y, float LEBAR_X, float LEBAR_Y, float JUMLAH_SUDUT, float ROTASI) {
    GLfloat derajat = (360.0f / JUMLAH_SUDUT) * M_PI / 180.0f ;
    glBegin(GL_TRIANGLE_FAN);
    GLfloat sudut = 0.0f - ROTASI;
    for (int _k = 0; _k < JUMLAH_SUDUT; ++_k)
    {
        glVertex2f(TITIK_LAYAR_X + (LEBAR_X * cos(sudut)), TITIK_LAYAR_Y + (LEBAR_X * sin(sudut)));
        sudut += derajat;
    }
    glEnd();
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 0.0);    
    lingkaran(65, 65, 50, 50, 1000, 20);     
    glColor3f(1.0, 1.0, 1.0);
    lingkaran(65, 65, 45, 50, 1000, 20);
    glColor3f(1.0, 1.0, 0.0);
    lingkaran(65, 65, 40, 50, 1000, 20);
    glColor3f(1.0, 1.0, 1.0);
    lingkaran(65, 65, 35, 50, 1000, 20);
    glColor3f(1.0, 1.0, 0.0);
    lingkaran(65, 65, 30, 50, 1000, 20);
    glColor3f(1.0, 1.0, 1.0);
    lingkaran(65, 65, 25, 50, 1000, 20);
    glColor3f(1.0, 1.0, 0.0);
    lingkaran(65, 65, 20, 50, 1000, 20);
    glColor3f(1.0, 1.0, 1.0);
    lingkaran(65, 65, 15, 50, 1000, 20);
    glColor3f(1.0, 1.0, 1.0);
    lingkaran(65, 65, 10, 50, 1000, 20);
    glColor3f(1.0, 1.0, 0.0);
    lingkaran(65, 65, 8, 50, 1000, 20);
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(29, 30);
    glVertex2f(65, 65);
    glVertex2f(101,30);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(29, 30);
    glVertex2f(101, 30);
    glVertex2f(89,-10);
    glVertex2f(39, -10);
    glEnd();
    
    glutSwapBuffers();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 400);
    glLineWidth(5.0);
    glutCreateWindow("Michael E. Ernawan - 672018221");
    glutDisplayFunc(display);
    gluOrtho2D(-10, 150.0, -10, 150.0);
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glutMainLoop();
}






#include <stdlib.h>
#include <GL/freeglut.h>

int x = 0, y = 0;
void Draw()
{
    glBegin(GL_POLYGON);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 0, 0);
    glVertex2f(-2.5, -0.5);
    glVertex2f(-2.5, 0.5);
    glVertex2f(2.5, 0.5);
    glVertex2f(2.5, -0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.5, -2.5);
    glVertex2f(-0.5, -2.5);
    glVertex2f(-0.5, 2.5);
    glVertex2f(0.5, 2.5);
    glEnd();
    glFlush();
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glRotatef(x, 0, 0, 1);
    Draw();
    glPopMatrix();
    glPushMatrix();
    glRotatef(y, 0, 0, 1);
    Draw();
    glPopMatrix();
    glFlush();

}

void timer(int value)
{
    //tuliskan varibel yang berubah nilainya disini
    x += 5;
    y += 5;
    glutPostRedisplay();
    glutTimerFunc(500, timer, 10);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(640, 480);
    glutCreateWindow("6720184243 ===> Tugas4");
    gluOrtho2D(-5.0, 5.0, -5.0, 5.0);
    glutDisplayFunc(display);
    glutTimerFunc(500, timer, 10);
    glutMainLoop();
}


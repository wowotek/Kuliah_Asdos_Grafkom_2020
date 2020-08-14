#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

void lingkaran(float TITIK_LAYAR_X, float TITIK_LAYAR_Y, float LEBAR_X, float lEBAR_Y, float JUMLAH_SUDUT, float ROTASI)
{
    GLfloat derajat = (360.0f / JUMLAH_SUDUT) * M_PI / 180.0f;
    glBegin(GL_LINE_LOOP);
        GLfloat sudut = 0.0f - ROTASI;
        int _k;
        for( _k = 0; _k < JUMLAH_SUDUT; ++_k){
            glVertex2f(TITIK_LAYAR_X + (LEBAR_X * cos(sudut)), TITIK_LAYAR_Y + (lEBAR_Y * sin(sudut)));
            sudut += derajat;
        }
    glEnd();
}

static void display(void)
{
    int i;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 1.0f, 0.0f);
    for(i = 0; i < 50; i++){
        lingkaran(50, 55-i, 50-i, 50, 1000, 60);
    }
    glutSwapBuffers();
}

//static void idle(void)
//{
//    glClearColor(1.0, 1.0, 1.0, 1.0);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glLineWidth(3.0);
//    glOrtho(-15.0, 15.0, -15.0, 15.0, -15.0, 15.0);
//    glViewport(40, 400, 60, 300);
//}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(700,700);
    glLineWidth(50.0);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutCreateWindow("Yosia Enriqhe Mapaliey - 672018179");
    glutDisplayFunc(display);
    gluOrtho2D(-10, 150.0, -10, 150.0);
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glutMainLoop();
}
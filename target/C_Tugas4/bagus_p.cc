#include <GL/glut.h>
#include <math.h>


void Poligon()
{
    double titiksudutInc = 3.14*2/6.0;
    double titiksudut;
    double inc = 100.0/1000;
    double r = 10.0/1000.0;
    glClear (GL_COLOR_BUFFER_BIT);
    for (int x = 0; x <= 50; x++) {
    	glBegin (GL_LINE_STRIP);
        titiksudut = x* (3.14/100.0);
        glColor3ub((255-x)*4, (255-x)*4, (x*3));
        for (int y=0; y <= 6; y++) {
        titiksudut += titiksudutInc; glVertex2d(r*sin(titiksudut), r*cos(titiksudut));
		}
         r += inc;
    glEnd();
	}
    glutSwapBuffers();
    glFlush();
}

void jendela(double kiri, double kanan, double bawah, double atas)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(bawah, atas, kiri, kanan);
}

void tampil(double bawah, double atas, double kiri, double kanan)
{
    glViewport(kanan, atas, kiri-kanan, atas-bawah);
}
void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    Poligon();
}
void init()
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    jendela(-6.0, 6.0, -6.0, 6.0);
    tampil(0.0, 0.0, 750.0, 750.0);
    glMatrixMode (GL_MODELVIEW);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
	glutInitWindowPosition(50, 50);
    glutCreateWindow("Bagus Pramono-672018228");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

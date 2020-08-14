#include <stdlib.h>
#include <GL/glut.h>

int x=0, y=0;
void Draw()
{
	glColor3f(1, 0, 0);
glBegin(GL_POLYGON);
glVertex2f(0.5, -3);
glVertex2f(-0.5, -3);
glVertex2f(-0.5, 3.5);
glVertex2f(0.5, 3.5);
glEnd();
glFlush();
}
void display(void)
{
   glClear(GL_COLOR_BUFFER_BIT);
   glPushMatrix();
   glRotatef( x, 0, 0, 1);
   Draw();
   glPopMatrix();
   glPushMatrix();
   glRotatef( y, 1, 0, 0);
   Draw();
   glPopMatrix();
   glFlush();
  
}

void timer(int value)
{
   //tuliskan varibel yang berubah nilainya disini
   x +=15;
   y -=15;
   glutPostRedisplay();
   glutTimerFunc(500,timer,10);
}
int main(int argc, char **argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
   glutInitWindowPosition(100,100);
   glutInitWindowSize(640,480);

   glutCreateWindow("Rotasi Segitiga");
   gluOrtho2D(-5.0, 5.0, -5.0, 5.0);
   glutDisplayFunc(display);
   glutTimerFunc(500, timer, 10);
   glutMainLoop();
}

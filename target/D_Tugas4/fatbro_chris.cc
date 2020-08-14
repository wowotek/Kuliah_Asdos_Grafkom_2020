#include <stdlib.h>
#include <GL/freeglut.h>

int x=0, y=0;
void Draw()
{
   glTranslatef(5.0f, 5.0f, 1.0f);
   glColor3f(1, 0, 0);
glBegin(GL_POLYGON);
glVertex2f(-9, -4);
glVertex2f(-1, -4);
glVertex2f(-1, -6);
glVertex2f(-9, -6);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(-6, -1);
glVertex2f(-4, -1);
glVertex2f(-4, -9);
glVertex2f(-6, -9);
glEnd();
   glFlush();
   
}
void display(void)
{
   glClear(GL_COLOR_BUFFER_BIT);
   glClearColor(1.0f, 1.0f, 1.0f,1.0f);
   glPushMatrix();
   glRotatef( x, 0, 0, 1);
   Draw();
   glPopMatrix();
   glPushMatrix();
   glRotatef( y, 0, 0, 1);
 
   glFlush();
  
}

void timer(int value)
{
   
   x +=15;
  
   glutPostRedisplay();
   glutTimerFunc(500,timer,10);
}
int main(int argc, char **argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);

   glutInitWindowPosition(100,100);
   glutInitWindowSize(640,480);

   glutCreateWindow("CHRISTIAN IMANUEL LENDO 672018409");
   gluOrtho2D(-5.0,5.0,-5.0,5.0);
   glutDisplayFunc(display);
   glutTimerFunc(500, timer, 10);
   glutMainLoop();
}

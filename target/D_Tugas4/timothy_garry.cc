#include <stdlib.h>
#include <GL/glut.h>

int x=0, y=0;
void Draw()
{
	glScaled(1.0, 1.0, 0.0);
	glTranslatef(5.0f, 5.0f, 0.0f);
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
}
void display(void) 
{
   glClear(GL_COLOR_BUFFER_BIT);
   glPushMatrix();
   glRotatef( x, 0, 0, 1);
   glScaled(1.3, 1.3, 0.0);
   Draw();
   glPopMatrix();
   glFlush();
  
}

void timer(int value)
{
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

   glutCreateWindow("Transformasi");
   gluOrtho2D(-5.0, 5.0, -5.0, 5.0);
   glutDisplayFunc(display);
   glutTimerFunc(500, timer, 10);
   glutMainLoop();
}
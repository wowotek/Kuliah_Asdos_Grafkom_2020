#include <GL/glut.h>

void myInit(void)
{gluOrtho2D(-5, 5, -5, 5);
}
void myDisplay(void) {
glColor3f(0, 0, 1);
glBegin(GL_TRIANGLES);
glVertex2f(3.5, 7);
glVertex2f(6.5, 7);
glVertex2f(5, 5);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2f(5, 5);
glVertex2f(3.5, 3);
glVertex2f(6.5, 3);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2f(5, 5);
glVertex2f(3, 3.5);
glVertex2f(3, 6.5);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2f(7, 3.5);
glVertex2f(7, 6.5);
glVertex2f(5, 5);
glEnd();
glBegin(GL_QUADS);
glVertex2f(4.5, 5.5);
glVertex2f(5.5, 5.5);
glVertex2f(5.5, 4.5);
glVertex2f(4.5, 4.5);
glEnd();
glFlush();
}



int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(700, 500);
	glutCreateWindow("672018032");
	gluOrtho2D(-5, 5, -5, 5);
	glutDisplayFunc(myDisplay);
	myInit();

	glutMainLoop();
}


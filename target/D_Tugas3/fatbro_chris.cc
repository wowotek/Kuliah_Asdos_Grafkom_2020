#include<GL/freeglut.h>
void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 300, 0.0, 300);
}
void home()
{
 
   glClear(GL_COLOR_BUFFER_BIT);    
    
	  // Front Door Lock
    glColor3f(1.0, 0.0, 0.0);
    glPointSize(10);
    glBegin(GL_POINTS);
    glVertex2i(315, 250);
    glEnd();
	

	// line border 
    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(3);
    glBegin(GL_LINES);
	
	//A1 B1
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2i(50, 50);
    glVertex2i(150, 200);

	//A2 B2
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2i(50, 200);
    glVertex2i(150, 50);
    
	//A3 B3
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2i(100, 50);
    glVertex2i(200, 200);

	//A4 B4
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(100, 200);
    glVertex2i(200, 50);

	//garis kotak
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2i(50, 200);
    glVertex2i(200, 200);

	glVertex2i(50, 200);
    glVertex2i(50, 50);

	glVertex2i(50, 50);
    glVertex2i(200, 50);

	glVertex2i(200, 200);
    glVertex2i(200, 50);

    glEnd();

	//titik
	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glPointSize(5);

	glVertex2i(100,125);

	glVertex2i(150,125);

	glVertex2i(125,87.5);

	glVertex2i(125,162.5);

	glEnd();

    glFlush();
}
int main(int argc, char ** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(350, 100);
    glutInitWindowSize(680, 350);
    glutCreateWindow("Christian Imanuel Lendo - 672018409");
    init();
    glutDisplayFunc(home);
    glutMainLoop();
}
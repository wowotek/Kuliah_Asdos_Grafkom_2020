#include<GL/freeglut.h>

void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 300, 0.0, 300);
}
void potong()
{
 
   glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glPointSize(10);
    glBegin(GL_POINTS);
    glVertex2i(315, 250);
    glEnd();
	
    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(3);
    glBegin(GL_LINES);
	
	glColor3f(1.0f, 1.0f, 0.0f);//A1 B1
    glVertex2i(50, 50);
    glVertex2i(150, 200);

	glColor3f(0.0f, 0.0f, 1.0f);//A2 B2
	glVertex2i(50, 200);
    glVertex2i(150, 50);
    
	glColor3f(0.0f, 1.0f, 0.0f);//A3 B3
	glVertex2i(100, 50);
    glVertex2i(200, 200);

	glColor3f(0.0f, 0.0f, 0.0f);//A4 B4
	glVertex2i(100, 200);
    glVertex2i(200, 50);

	glColor3f(0.0f, 0.0f, 0.0f);//kotak
	glVertex2i(50, 200);
    glVertex2i(200, 200);
	glVertex2i(50, 200);
    glVertex2i(50, 50);
	glVertex2i(50, 50);
    glVertex2i(200, 50);
	glVertex2i(200, 200);
    glVertex2i(200, 50);
    glEnd();

	glBegin(GL_POINTS);//titik
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
    glutInitWindowPosition(640, 480);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Timothy Solang-672018187");
    init();
    glutDisplayFunc(potong);
    glutMainLoop();
}
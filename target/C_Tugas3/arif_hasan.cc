#include <GL/glut.h>
  
void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(10.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(4.0f);
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
void Display(void)
{
	float a1x = 50, a1y = 50, a2x = 50, a2y = 200, a3x = 100, a3y = 50, a4x = 100, a4y = 200, b1x = 150, b1y = 200, b2x = 150, b2y = 50, b3x = 200, b3y = 200, b4x = 200, b4y = 50;
	float Mcd1, Mab1, Cab1, Ccd1, Mcd2, Mab2, Cab2, Ccd2, Mcd3, Mab3, Cab3, Ccd3, Mcd4, Mab4, Cab4, Ccd4, x1, y1, x2, y2, x3, y3, x4, y4;
	glClear(GL_COLOR_BUFFER_BIT);
	
	
	glBegin(GL_LINES);
	glColor3f(1, 1, 0);
	glVertex2f(a1x, a1y);
	glVertex2f(b1x, b1y);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 0, 1);
	glVertex2f(a2x, a2y);
	glVertex2f(b2x, b2y);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 1, 0);
	glVertex2f(a3x, a3y);
	glVertex2f(b3x, b3y);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(a4x, a4y);
	glVertex2f(b4x, b4y);
	glEnd();

	
	Mab1 = (b3y - a3y) /( b3x - a3x);
	Mcd1= (b4y - a4y) / (b4x - a4x);
	Cab1= a3y - (Mab1*a3x);
	Ccd1= a4y - (Mcd1*a4x);

	Mab2 = (b1y - a1y) / (b1x - a1x);
	Mcd2 = (b2y - a2y) / (b2x - a2x);
	Cab2 = a1y - (Mab2*a1x);
	Ccd2 = a2y - (Mcd2*a2x);

	Mab3 = (b1y - a1y) / (b1x - a1x);
	Mcd3 = (b4y - a4y) / (b4x - a4x);
	Cab3 = a1y - (Mab3*a1x);
	Ccd3 = a4y - (Mcd3*a4x);

	Mab4 = (b2y - a2y) / (b2x - a2x);
	Mcd4 = (b3y - a3y) / (b3x - a3x);
	Cab4 = a2y - (Mab4*a2x);
	Ccd4 = a3y - (Mcd4*a3x);

	
	x1 = (Ccd1 - Cab1 )/ (Mab1 - Mcd1);
	y1 = (Mab1*x1) + Cab1;

	x2 = (Ccd2 - Cab2) / (Mab2 - Mcd2);
	y2 = (Mab2*x2) + Cab2;

	x3 = (Ccd3 - Cab3) / (Mab3 - Mcd3);
	y3 = (Mab3*x3) + Cab3;

	x4 = (Ccd4 - Cab4) / (Mab4 - Mcd4);
	y4 = (Mab4*x4) + Cab4;


	glBegin(GL_POINTS);
	glColor3f(1, 0, 0);
	glVertex2f(x1, y1);
	glEnd();

	glBegin(GL_POINTS);
	glVertex2f(x2, y2);
	glEnd();

	glBegin(GL_POINTS);
	glVertex2f(x3, y3);
	glEnd();

	glBegin(GL_POINTS);
	glVertex2f(x4, y4);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex2f(50, 50);
	glVertex2f(50, 200);
	glVertex2f(200, 200);
	glVertex2f(200, 50);
	glEnd();


	glFlush();
}
int main(int argc, char ** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(1080, 720);
	glutInitWindowSize(100, 50);
	glutCreateWindow("Arif Hasan Nawawi - 672018337");
	glutDisplayFunc(Display);
	init();
	glutMainLoop();
}
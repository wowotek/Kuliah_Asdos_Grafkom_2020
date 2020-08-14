#include <GL/glut.h>

void Inisialisasi(void)
{
	glClearColor(1.0,1.0,1.0,0.0);
	glColor3f(0.0f,0.0f,0.0f);
	glPointSize(10.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(4.0f);
	gluOrtho2D(0.0,640.0,0.0,480.0);
}
void Display(void)
{
	float ax1=50 , ax2=50, ax3=100, ax4=100, ay1=50, ay2=200, ay3=50, ay4=200, bx1=150, bx2=150, bx3=200, bx4=200, by1=200, by2=50, by3=200, by4=50 , 
		Ma1b1, Ma2b2, Ma3b3, Ma4b4, Ca1b1, Ca2b2, Ca3b3, Ca4b4, px12, px14, px32, px34, py12, py14, py32, py34;
	
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
		glColor3f(1.0f,1.0f,0.0f);
		glVertex2f(ax1,ay1);
		glVertex2f(bx1,by1);
	glEnd();
	glBegin(GL_LINES);
		glColor3f(0.0f,0.0f,1.0f);
		glVertex2f(ax2,ay2);
		glVertex2f(bx2,by2);
	glEnd();
	glBegin(GL_LINES);
		glColor3f(0.0f,1.0f,0.0f);
		glVertex2f(ax3,ay3);
		glVertex2f(bx3,by3);
	glEnd();
	glBegin(GL_LINES);
		glColor3f(0.0f,0.0f,0.0f);
		glVertex2f(ax4,ay4);
		glVertex2f(bx4,by4);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glColor3f(0.0f,0.0f,0.0f);
		glVertex2f(ax2,ay2);
		glVertex2f(bx3,by3);
		glVertex2f(bx4,by4);
		glVertex2f(ax1,ay1);
	glEnd();

	//Rumus Perpotongan 
Ma1b1=(by1-ay1)/(bx1-ax1);
Ma2b2=(by2-ay2)/(bx2-ax2);
Ma3b3=(by3-ay3)/(bx3-ax3);
Ma4b4=(by4-ay4)/(bx4-ax4);
Ca1b1=ay1-(ax1*Ma1b1);
Ca2b2=ay2-(ax2*Ma2b2);
Ca3b3=ay3-(ax3*Ma3b3);
Ca4b4=ay4-(ax4*Ma4b4);
//Titik potong
px12=(Ca2b2-Ca1b1)/(Ma1b1-Ma2b2);
px14=(Ca4b4-Ca1b1)/(Ma1b1-Ma4b4);
px32=(Ca2b2-Ca3b3)/(Ma3b3-Ma2b2);
px34=(Ca4b4-Ca3b3)/(Ma3b3-Ma4b4);
py12=(Ma1b1*px12)+Ca1b1;
py14=(Ma1b1*px14)+Ca1b1;
py32=(Ma3b3*px32)+Ca3b3;
py34=(Ma3b3*px34)+Ca3b3;
//Hasil
glBegin(GL_POINTS);
glColor3f(1.0f,0.0f,0.0f);
glVertex2f(px12,py12);
glVertex2f(px14,py14);
glVertex2f(px32,py32);
glVertex2f(px34,py34);
glEnd();
glFlush();
}
int main(int argc, char** argv)
{
	glutInit(&argc,   argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,400);
	glutInitWindowPosition(100,50);
	  glutCreateWindow("Abram Willy Raditya Putra - 672018419");
glutDisplayFunc(Display);
	Inisialisasi();
	glutMainLoop();
}
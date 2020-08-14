#include <GL/glut.h>

void inisialisasi (void)
{
	glClearColor(1,1,1,1);
	glColor3f(0.0f,0.0f,0.0f);
	glPointSize(10.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity;
	glLineWidth(2.0f);
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);

}

void display (void)
{
	float A1x=50, A1y=50, 
		  B1x=150, B1y=200,
		  A2x=50, A2y=200,
		  B2x=150, B2y=50,
		  A3x=100, A3y=50,
		  B3x=200, B3y=200,
		  A4x=100, A4y=200,
		  B4x=200, B4y=50,

		  MA1B1,MA2B2,MA3B3,MA4B4, CA1B1,CA2B2,CA3B3,CA4B4, Px,Py,Qx,Qy,Rx,Ry,Sx,Sy;

	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(A1x, A1y);
	glVertex2i(B1x, B1y);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2i(A2x, A2y);
	glVertex2i(B2x, B2y);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2i(A3x, A3y);
	glVertex2i(B3x, B3y);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2i(A4x, A4y);
	glVertex2i(B4x, B4y);
	glEnd();


	//rumus perpotongan
	MA1B1=(B1y-A1y)/(B1x-A1x);
	MA2B2=(B2y-A2y)/(B2x-A2x);
	MA3B3=(B3y-A3y)/(B3x-A3x);
	MA4B4=(B4y-A4y)/(B4x-A4x);

	CA1B1=A1y-(MA1B1*A1x);
	CA2B2=A2y-(MA2B2*A2x);
	CA3B3=A3y-(MA3B3*A3x);
	CA4B4=A4y-(MA4B4*A4x);

	//titik potong
	Px=(CA2B2-CA1B1)/(MA1B1-MA2B2);
	Py=(MA1B1*Px)+CA1B1;

	Qx=(CA4B4-CA1B1)/(MA1B1-MA4B4);
	Qy=(MA1B1*Qx)+CA1B1;

	Rx=(CA2B2-CA3B3)/(MA3B3-MA2B2);
	Ry=(MA3B3*Rx)+CA3B3;

	Sx=(CA4B4-CA3B3)/(MA3B3-MA4B4);
	Sy=(MA3B3*Sx)+CA3B3;



	//hasil
	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(Px,Py);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(Qx,Qy);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(Rx,Ry);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(Sx,Sy);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f,0.0f,0.0f);
	glVertex2i(A1x,A1y);
	glVertex2i(A2x,A2y);
	glVertex2i(B3x,B3y);
	glVertex2i(B4x,B4y);
	glEnd();

	glFlush();


}


int main (int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600,500);
	glutInitWindowPosition(300,100);
	glutCreateWindow("Yuny Tamariska Bota - 672018269");
	glutDisplayFunc(display);
	inisialisasi();
	glutMainLoop();
}
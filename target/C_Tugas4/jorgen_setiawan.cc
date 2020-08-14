#include<GL/glut.h>
#include<GL/gl.h>
#include<math.h>
#include <cmath>



void lingkaran(float TITIK_LAYAR_X, float TITIK_LAYAR_Y, float LEBAR_X, float LEBAR_Y, float JUMLAH_SUDUT, float ROTASI)
{
	GLfloat derajat = (360.0f / JUMLAH_SUDUT) *M_PI / 180.0f;
	glBegin(GL_TRIANGLE_FAN);
		GLfloat sudut = 0.0f-ROTASI;
		for (int k=0;k<JUMLAH_SUDUT;++k){
			glVertex2f(TITIK_LAYAR_X + (LEBAR_X*cos(sudut)), TITIK_LAYAR_Y+(LEBAR_Y*sin(sudut)));
			sudut+=derajat;
		}

	glEnd();
}



void display(void)
{
	double angelInc, i, l;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 0.3);
	for(int i = 0; i<50; i++)
	{
		lingkaran(65, 85-i, 50-i, 50, 1000, 20);
		
	}
	glColor3f(1.0, 1.0, 1.0);
	for(int i = 0; i<45; i++)
	{
		lingkaran(65, 85-i, 45-i, 45, 1000, 20);
		
	}

	glColor3f(1.0, 1.0, 0.3);
	for(int i = 0; i<40; i++)
	{
		lingkaran(65, 85-i, 40-i, 40, 1000, 20);
		
	}
	glColor3f(1.0, 1.0, 1.0);
	for(int i = 0; i<35; i++)
	{
		lingkaran(65, 85-i, 35-i, 35, 1000, 20);
		
	}
	glColor3f(1.0, 1.0, 0.3);
	for(int i = 0; i<30; i++)
	{
		lingkaran(65, 85-i, 30, 30, 1000, 20);
		
	}
	glColor3f(1.0, 1.0, 1.0);
	for(int i = 0; i<25; i++)
	{
		lingkaran(65, 85-i, 25-i, 25, 1000, 20);
		
	}
	glColor3f(1.0, 1.0, 0.3);
	for(int i = 0; i<20; i++)
	{
		lingkaran(65, 85-i, 20, 20, 1000, 20);
		
	}
	glColor3f(1.0, 1.0, 1.0);
	for(int i = 0; i<15; i++)
	{
		lingkaran(65, 85-i, 15-i, 15, 1000, 20);
		
	}
	glColor3f(1.0, 1.0, 0.3);
	for(int i = 0; i<50; i++)
	{
		lingkaran(65, 85-i, 10, 10, 1000, 20);
		
	}

	glutSwapBuffers();
}

int main(int argc, char** argv) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(50, 50);
	glLineWidth(5.0);
	glutCreateWindow("Jorgen Setiawan - 672018173");
	glutDisplayFunc(display);
	gluOrtho2D(-10, 150.0, -10, 150.0);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glutMainLoop();
	return 0;
}

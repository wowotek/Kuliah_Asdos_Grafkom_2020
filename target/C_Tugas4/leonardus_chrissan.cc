#include<GL/glut.h>
#include <GL/gl.h>
#include<math.h>


void lingkaran(float TITIK_LAYAR_X, float TITIK_LAYAR_Y, float LEBAR_X
				, float LEBAR_Y, float JUMLAH_SUDUT, float ROTASI)
{
	GLfloat derajat =(360.0f / JUMLAH_SUDUT) * (M_PI / 180.0f);
	glBegin (GL_TRIANGLE_FAN);
		GLfloat sudut= 0.0f - ROTASI;
		for ( int _k = 0; _k<JUMLAH_SUDUT; ++_k)
		{
			glVertex2f(TITIK_LAYAR_X + (LEBAR_X * cos(sudut)), TITIK_LAYAR_Y + (LEBAR_Y * sin(sudut)));
			sudut += derajat;
		}
	glEnd();
}

void myDisplay()
{
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
		for ( i =0;i<50;i++)
		{
			glColor3f(1.0, 1.0, 0.3);
			lingkaran(50,55-i, 50-i,50,1000,20);
		}
				for ( i =0;i<50;i++)
		{
			glColor3f(1.0, 1.0, 1.0);
			lingkaran(50,55, 45-i,45,1000,20);
		}
		for ( i =0;i<50;i++)
		{
			glColor3f(1.0, 1.0, 0.3);
			lingkaran(50,55-i, 40-i,40,1000,20);
		}
		for ( i =0;i<50;i++)
		{
			glColor3f(1.0, 1.0, 1.0);
			lingkaran(50,55, 35-i,35,1000,20);
		}
		for ( i =0;i<30;i++)
		{
			glColor3f(1.0, 1.0, 0.3);
			lingkaran(50,55-i, 30-i,30,1000,20);
		}
		for ( i =0;i<25;i++)
		{
			glColor3f(1.0, 1.0, 1.0);
			lingkaran(50,55, 25-i,25,1000,20);
		}
		for ( i =0;i<20;i++)
		{
			glColor3f(1.0, 1.0, 0.3);
			lingkaran(50,55-i, 20-i,20,1000,20);
		}
		for ( i =0;i<25;i++)
		{
			glColor3f(1.0, 1.0, 1.0);
			lingkaran(50,55, 15-i,15,1000,20);
		}
		for ( i =0;i<10;i++)
		{
			glColor3f(1.0, 1.0, 0.3);
			lingkaran(50,50-i,5,10,1000,20);
		}

		
		
		
	glutSwapBuffers();

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500,400);
	glLineWidth(5.0);
	glutCreateWindow("Leonardus Aldian CN -672018263");
	glutDisplayFunc(myDisplay);
	gluOrtho2D(-20,150.0,-20,150.0);
	glClearColor(1.0,1.0,1.0,1.0);
	glutMainLoop();
}
#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>
#include <cmath>


void lingkaran(float TITIK_LAYAR_X, float TITIK_LAYAR_Y, float LEBAR_X, float LEBAR_Y, float JUMLAH_SUDUT, float ROTASI)
{
	GLfloat derajat = (360.0f / JUMLAH_SUDUT)* M_PI / 180.0f;
	glBegin(GL_TRIANGLE_FAN);
		GLfloat sudut = 0.0f - ROTASI;
		for (int _k = 0; _k < JUMLAH_SUDUT; ++_k)
		{
			glVertex2f(TITIK_LAYAR_X + (LEBAR_X * cos(sudut)), TITIK_LAYAR_Y + (LEBAR_Y * sin(sudut)));
			sudut += derajat;
		}
	glEnd();
}

void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 0.3);
	for(int j=0;j<50;j++){
	//layar x, layar y, lebar x, lebar y, jumalh sudut, rotasi
	lingkaran (65,60-(j),50-j,50,1000,20);
	}
	glColor3f(1.0, 1.0, 1.0); //putih
	lingkaran (65,60,45,45,1000,20);
	glColor3f(1.0, 1.0, 0.3); //kuning
	lingkaran (65,55,40,45,1000,20);
	glColor3f(1.0, 1.0, 1.0); //putih
	lingkaran (65,58,35,35,1000,20);
	glColor3f(1.0, 1.0, 0.3); //kuning
	lingkaran (65,51,30,35,1000,20);
	glColor3f(1.0, 1.0, 1.0); //putih
	lingkaran (65,54,25,22,1000,20);
	glColor3f(1.0, 1.0, 0.3); //kuning
	lingkaran (65,46,22,25,1000,20);
	glColor3f(1.0, 1.0, 1.0); //putih
	lingkaran (65,53,16,11,1000,20);
	glColor3f(1.0, 1.0, 0.3);//kuning
	for(int i=0;i<50;i++){
	lingkaran (65,49-i,14,10,1000,20);
	}
	glutSwapBuffers();
}


int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize (600, 500);
glLineWidth(5.0);
glutInitWindowPosition (50, 50);
glutCreateWindow ("Danu Satria W - 672018183");
glutDisplayFunc(myDisplay);
gluOrtho2D(-10,150.0,-10,150.0);
glClearColor(1.0,1.0,1.0,1.0);
glutMainLoop();
return 0;
}
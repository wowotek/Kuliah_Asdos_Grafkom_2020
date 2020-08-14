#include<GL/glut.h>
#include<math.h>
#include<GL/gl.h>
#include<cmath>


void init(void)
{
	glClearColor(1.0,1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(3.0);
	glOrtho(-15.0,-15.0,-15.0,-15.0,-15.0,-15.0);
	glViewport( 40, 400, 60, 30);
}
void ngon(int n, float cx, float cy, float radius, float rotAngle)
{
	double angle,angleInc;
	int k;
	if(n<3)return;
	angle = rotAngle*3.14159265/360;
	angleInc = 2*3.14159265/n;
	glVertex2f(radius*cos(angle)+cx, radius*sin(angle)+cy);
	for(k=0;k<n;k++)
	{
		angle += angleInc;
		glVertex2f((radius+ angleInc)*cos(angle)+cx, (radius+ angleInc)*sin(angle)+cy);
	}
}
void lingkaran(float TITIK_LAYAR_X, float TITIK_LAYAR_Y, float LEBAR_X, float LEBAR_Y, float JUMLAH_SUDUT, float ROTASI)
{
	GLfloat derajat = (360.0f / JUMLAH_SUDUT) * M_PI /100.0f;
	glBegin(GL_TRIANGLE_FAN);
		GLfloat sudut = 0.0f - ROTASI;
		for(int k = 0; k < JUMLAH_SUDUT; ++k)
		{
			glVertex2f(TITIK_LAYAR_X + (LEBAR_X * cos(sudut)), TITIK_LAYAR_Y + (LEBAR_Y * sin(sudut)));
			sudut += derajat;
		}
	glEnd();
}
void display(void)
{
	double angleInc, i ,j;
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);
		/*glColor3f(0.0,0.0,1.0);
			angleInc = 2*3.14159265/600;
			for(i=0;i<10;i+=angleInc)
			ngon(10,0,0,i,180);
	glEnd();*/
	glColor3f(1.0,1.0,0.3);
	for(int j=0; j<50; j++)
	{
		lingkaran(50, 55-j, 50-j, 50, 1000, 20);
	}
	glColor3f(1.0,1.0,1.0);
	for(int j=0; j<47; j++)
	{
		lingkaran(50, 53, 45, 45, 1000, 20);
	}
	glColor3f(1.0,1.0,0.3);
	for(int j=0; j<44; j++)
	{
		lingkaran(50, 51-j, 40-j, 40, 1000, 20);
	}
	glColor3f(1.0,1.0,1.0);
	for(int j=0; j<41; j++)
	{
		lingkaran(50, 49, 35, 35, 1000, 20);
	}
	glColor3f(1.0,1.0,0.3);
	for(int j=0; j<38; j++)
	{
		lingkaran(50, 47-j, 30-j, 30, 1000, 20);
	}
	glColor3f(1.0,1.0,1.0);
	for(int j=0; j<35; j++)
	{
		lingkaran(50, 45, 25, 25, 1000, 20);
	}
	glColor3f(1.0,1.0,0.3);
	for(int j=0; j<32; j++)
	{
		lingkaran(50, 43-j, 20-j, 20, 1000, 20);
	}
	glColor3f(1.0,1.0,1.0);
	for(int j=0; j<29; j++)
	{
		lingkaran(50, 41, 15, 15, 1000, 20);
	}
	glColor3f(1.0,1.0,0.3);
	for(int j=0; j<27; j++)
	{
		lingkaran(50, 39-j, 5, 10, 1000, 20);
	}
	//glFlush();
	glutSwapBuffers();
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Abram Willy R P - 672018419");
	//init();
	glLineWidth(5.0);
	gluOrtho2D(-50, 150.0, -10, 150.0);
	glClearColor( 1.0, 1.0, 1.0, 1.0);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
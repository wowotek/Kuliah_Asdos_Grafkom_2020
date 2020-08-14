#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>





void lingkaran(float TITIK_LAYAR_X, float TITIK_LAYAR_Y,
	float LEBAR_X, float LEBAR_Y, float JUMLAH_SUDUT, float ROTASI)
{
	GLfloat derajat = (360.0f/ JUMLAH_SUDUT *M_PI / 180.0f);
	glBegin (GL_TRIANGLE_FAN);
		GLfloat sudut = 0.0f - ROTASI;
		for (int _k =0; _k< JUMLAH_SUDUT; ++_k);
		{
			glVertex2f(TITIK_LAYAR_X + (LEBAR_X * cos(sudut)), TITIK_LAYAR_Y + (LEBAR_Y * sin(sudut)));
			sudut += derajat;
		}
	glEnd();
}
void myDisplay ()
{
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(1.0,1.0,0.3);
 
 for (int i =0; i < 50; i++)
 {
	 lingkaran(50, 55-i, 50-i, 50, 1000, 20);
 }
 glutSwapBuffers();

}

int main (int argc, char** argv){
 glutInit(& argc,argv);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowSize(500,400);
 glLineWidth(5.0);
 glutCreateWindow(" Imelda Ruwae Lutunani-672018230 ");
 glutDisplayFunc(myDisplay);
 gluOrtho2D(-10, 150.0, -10, 150.0);
 glClearColor(0.0, 0.0, 0.0, 0.0);
 glutMainLoop();
}
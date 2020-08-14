#include <GL/glut.h>

void init(void){
glClearColor(1.0,1.0,1.0,1.0);
glPointSize(5.0);
glLineWidth(3.0);
glViewport(0,0,640,480);
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
glMatrixMode(GL_PROJECTION);
}

void display(void)
{
float a1x=50,a1y=50,b1x=150,b1y=200, a2x=50,a2y=200,b2x=150,b2y=50,
a3x=100,a3y=50,b3x=200,b3y=200, a4x=100,a4y=200,b4x=200,b4y=50, Mab1,Mab2,Mab3,Mab4, Cab1,Cab2,Cab3,Cab4, px,py, pa,pb, pj,pk, pm,pn ;
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(a1x,a1y);
	glVertex2f(b1x,b1y);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(a2x,a2y);
	glVertex2f(b2x,b2y);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(a3x,a3y);
	glVertex2f(b3x,b3y);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(a4x,a4y);
	glVertex2f(b4x,b4y);
glEnd();
glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2i(50,50);
	glVertex2i(50,200);
	glVertex2i(200,200);
	glVertex2i(200,50);
	glEnd();

//rumus perpotongan
Mab1=(b1y-a1y)/(b1x-a1x);
Mab2=(b2y-a2y)/(b2x-a2x);
Mab3=(b3y-a3y)/(b3x-a3x);
Mab4=(b4y-a4y)/(b4x-a4x);
Cab1=a1y-(a1x*Mab1);
Cab2=a2y-(a2x*Mab2);
Cab3=a3y-(a3x*Mab3);
Cab4=a4y-(a4x*Mab4);

//titik potong
px=(Cab2-Cab1)/(Mab1-Mab2);
py=(Mab1*px)+Cab1;
pa=(Cab4-Cab1)/(Mab1-Mab4);
pb=(Mab1*pa)+Cab1;
pj=(Cab2-Cab3)/(Mab3-Mab2);
pk=(Mab3*pj)+Cab3;
pm=(Cab4-Cab3)/(Mab3-Mab4);
pn=(Mab3*pm)+Cab3;

//hasil
glBegin(GL_POINTS);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(px,py);
glEnd();
glBegin(GL_POINTS);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(pa,pb);
glEnd();
glBegin(GL_POINTS);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(pj,pk);
glEnd();
glFlush();
glBegin(GL_POINTS);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(pm,pn);
glEnd();
glFlush();
}



int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600, 300);
glutInitWindowPosition (100, 50);
glutCreateWindow ("Danu Satria Wiratama - 672018183");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
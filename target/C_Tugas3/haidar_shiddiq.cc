#include <GL/glut.h>

void Init(void)
{
	glClearColor(1.0,1.0,1.0,0.0);
	glColor3f(0.0f,0.0f,0.0f);
	glPointSize(7.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(4.0f);
	gluOrtho2D(0.0,400,0.0,400);

}

void tampil(void)
{
	float a1x = 50, a1y=50, b1x=150, b1y=200, a2x = 50, a2y=200, b2x=150, b2y=50, a3x=100, a3y=50, b3x = 200, b3y=200, a4x= 100, a4y =200, b4x=200, b4y=50, Mgk, Mgb, Cgk, Cgb, Mgi, Cgi, Mgh, Cgh, px, py, pr, pt, po, pl, pj, pk;
	glClear(GL_COLOR_BUFFER_BIT);

	//biru
	glBegin(GL_LINES);
	glColor3f(0,0,0.8);
		glVertex2f(a2x,a2y);
		glVertex2f(b2x,b2y);
	glEnd();

	//hitam
	glBegin(GL_LINES);
	glColor3f(0,0,0);
		glVertex2f(a4x,a4y);
		glVertex2f(b4x,b4y);
	glEnd();
	
	//kuning
	glBegin(GL_LINES);
	glColor3f(1,1,0);
		glVertex2f(a1x,a1y);
		glVertex2f(b1x,b1y);
	glEnd();

	//hijau
	glBegin(GL_LINES);
	glColor3f(0,0.8,0);
		glVertex2f(a3x,a3y);
		glVertex2f(b3x,b3y);
	glEnd();

	//rumus
	Mgk=(b1y-a1y)/(b1x-a1x);
	Cgk=a1y-(a1x*Mgk);
	Mgb=(b2y-a2y)/(b2x-a2x);
	Cgb=a2y-(a2x*Mgb);
	Mgh=(b3y-a3y)/(b3x-a3x);
	Cgh=a3y-(a3x*Mgh);
	Mgi=(b4y-a4y)/(b4x-a4x);
	Cgi=a4y-(a4x*Mgi);
	


	//titik
	px=(Cgb-Cgk)/(Mgk-Mgb);
	py=(Mgk*px)+Cgk;

	pr=(Cgi-Cgk)/(Mgk-Mgi);
	pt=(Mgk*pr)+Cgk;

	po=(Cgh-Cgi)/(Mgi-Mgh);
	pl=(Mgi*po)+Cgi;

	pj=(Cgb-Cgh)/(Mgh-Mgb);
	pk=(Mgh*pj)+Cgh;

	//tampil
	glBegin(GL_POINTS);
	glColor3f(1,0,0);
	glVertex2f(px,py);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1,0,0);
	glVertex2f(pr,pt);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1,0,0);
	glVertex2f(po,pl);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1,0,0);
	glVertex2f(pj,pk);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glLineWidth(4);
	glColor3f(0,0,0);
	glVertex2f(50,50);
	glVertex2f(200,50);
	glVertex2f(200,200);
	glVertex2f(50,200);
	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
   glutInit(&argc,  argv);  
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);  
   glutInitWindowSize(600,400); 
   glutCreateWindow("Haidar Shiddiqramzy - 672018293"); 
   glutDisplayFunc(tampil); 
   Init(); 
   glutMainLoop(); 
}
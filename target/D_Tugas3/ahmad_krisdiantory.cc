#include <GL/glut.h>

void Ins(void)
{
	glClearColor(1.0,1.0,1.0,0.0); 
	glColor3f(0.0f, 0.0f, 0.f); 
	glPointSize(10.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(4.0f);
	gluOrtho2D(20.0, 250.0, 0.0, 300.0);
}

void Display(void)
{
	float ax=50, ay=50, bx=150, by=200, cx=50, cy=200,
		dx=150, dy=50, ex=100, ey=50, fx=200, fy=200,
		gx=100, gy=200, hx=200, hy=50,Mgh, Cgh,
		Mab,Mcd,Cab,Mef,Cef,Ccd,pa,pb,pc,pd,pw,px,py,pz;
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(ax,ay);
	glVertex2f(bx,by);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(cx,cy);
	glVertex2f(dx,dy);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 1.0f);
		glVertex2f(ex,ey);
		glVertex2f(fx,fy);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(gx,gy);
		glVertex2f(hx,hy);
	glEnd();

	//Rumus Perpotongan
	Mab=(by-ay)/(bx-ax);
	Mcd=(dy-cy)/(dx-cx);
	Mef=(fy-ey)/(fx-ex);
	Mgh=(hy-gy)/(hx-gx);
	Cab=ay-(ax*Mab);
	Ccd=cy-(cx*Mcd);
	Cef=ey-(ex*Mef);
	Cgh=gy-(gx*Mgh);
	
	//Titik Potong 
	pa=(Ccd-Cab)/(Mab-Mcd);
	pb=(Mab*pa)+Cab;
	pc=(Cgh-Cab)/(Mab-Mgh);
	pd=(Mgh*pc)+Cgh;
	pw=(Ccd-Cef)/(Mef-Mcd);
	px=(Mef*pw)+Cef;
	py=(Cgh-Cef)/(Mef-Mgh);
	pz=(Mgh*py)+Cgh;

	//Hasil
	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(pa,pb);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(pc,pd);
	glEnd();
	
	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(pw,px);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(py,pz);
	glEnd();

	//Persegi
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(50,50);
	glVertex2f(200,50);
	glVertex2f(200,200);
	glVertex2f(50,200);
	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv); 
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(720,480); 
	glutInitWindowPosition(100, 150);

	glutCreateWindow("Ahmad Krisdiantoro - 672018372");
	glutDisplayFunc(Display);
	Ins();
	glutMainLoop();
}


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
	float ax=50, ay=50,bx=150,by=200,cx=50,cy=200,dx=150,dy=50,
		  ex=100,ey=50,fx=200,fy=200,gx=100,gy=200,hx=200,hy=50,Mab,Mcd,Cab,Mef,Cef,Ccd,Mgh,Cgh,px,py,pz,pi,pk,pl,pm,pn;
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glColor3f(1.0f,1.0f,0.0f);
	glVertex2f(ax,ay);
	glVertex2f(bx,by);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0f,0.0f,1.0f);
	glVertex2f(cx,cy);
	glVertex2f(dx,dy);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0f,1.0f,0.0f);
	glVertex2f(ex,ey);
	glVertex2f(fx,fy);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0f,0.0f,0.0f);
	glVertex2f(gx,gy);
	glVertex2f(hx,hy);
	glEnd();

	//rumus
	Mab=(by-ay)/(bx-ax);
	Mcd=(dy-cy)/(dx-cx);
	Mef=(fy-ey)/(fx-ex);
	Mgh=(hy-gy)/(hx-gx);
	Cab=ay-(ax*Mab);
	Ccd=cy-(cx*Mcd);
	Cef=ey-(ex*Mef);
	Cgh=gy-(gx*Mgh);

	//Titik Potong

	px=(Ccd-Cab)/(Mab-Mcd);
	py=(Mab*px)+Cab;
	pz=pm=(Cgh-Cab)/(Mab-Mgh);
	pi= (Mgh*pz)+Cgh;
	pk=(Ccd-Cef)/(Mef-Mcd);
	pl=(Mcd*pk)+Ccd;
	pm=(Cef-Cgh)/(Mgh-Mef);
	pn=(Mef*pm)+Cef;
	
	//hasil
	glBegin(GL_POINTS);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex2f(px,py);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex2f(pz,pi);
	glEnd();


	glBegin(GL_POINTS);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex2f(pk,pl);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex2f(pm,pn);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f,0.0f,0.0f);
	glVertex2f(50,50);
	glVertex2f(200,50);
	glVertex2f(200,200);
	glVertex2f(50,200);
	
	glEnd();

	

	glFlush();
	}





	int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 400);
	glutInitWindowPosition(100, 50);
	glutCreateWindow("Fiona Gani Budiyanto - 672018032");
	glutDisplayFunc(Display);
	Inisialisasi();
	glutMainLoop();
}
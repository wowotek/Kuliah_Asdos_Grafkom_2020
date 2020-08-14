#include <GL/freeglut.h>

void myInit(void){
glClearColor(1,1,1,1); //untuk background
glPointSize(10.0); //ukuran titik
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,640.0,0.0,480.0); //ukuran workspace
}
void tampilan (void)
{
float ax = 50, ay=50, bx=150, by=200, cx=50, cy=200, dx=150, dy=50, 
	ex = 100, ey=50, fx=200, fy=200, gx=100, gy=200, hx=200, hy=50, 
	Mab, Mcd,Cab,Ccd,Mef, Mgh,Cef,Cgh,pxa,pya,pxb,pyb,pxc,pyc,pxd,pyd;
glClear(GL_COLOR_BUFFER_BIT);
glLineWidth(.0);
glBegin(GL_LINE_LOOP);
glColor3f(0,0,0);
glVertex2i(200,200);
glVertex2i(50,200);
glVertex2i(50,50);
glVertex2i(200,50);
glEnd();
glLineWidth(3.0);
glBegin(GL_LINES);
	glColor3f(255,255,0); //garis kuning
	glVertex2f(ax,ay); //2f-2 dimensi dengan tipe data float
	glVertex2f(bx,by);
glEnd();
glLineWidth(3.0);
glBegin(GL_LINES);
	glColor3f(0,0,255); //garis biru
	glVertex2f(cx,cy); //2f-2 dimensi dengan tipe data float
	glVertex2f(dx,dy);
glEnd();
//rumus perpotongan
Mab=(by-ay)/(bx-ax);
Mcd=(dy-cy)/(dx-cx);
Cab=ay-(ax*Mab);
Ccd=cy-(cx*Mcd);
//titik potong
pxa=(Ccd-Cab)/(Mab-Mcd);
pya=(Mab*pxa)+Cab;
//hasil
glBegin(GL_POINTS);
	glColor3f(255,0,0); //titik merah
	glVertex2f(pxa,pya);
glEnd();

glBegin(GL_LINES);
	glColor3f(0,255,0); //garis hijau
	glVertex2f(ex,ey); //2f-2 dimensi dengan tipe data float
	glVertex2f(fx,fy);
glEnd();
glBegin(GL_LINES);
	glColor3f(0,0,0); //garis hitam
	glVertex2f(gx,gy); //2f-2 dimensi dengan tipe data float
	glVertex2f(hx,hy);
glEnd();
//rumus perpotongan
Mef=(fy-ey)/(fx-ex);
Mgh=(hy-gy)/(hx-gx);
Cef=ey-(ex*Mef);
Cgh=gy-(gx*Mgh);
//titik potong
pxb=(Cgh-Cef)/(Mef-Mgh);
pyb=(Mef*pxb)+Cef;
//hasil
glBegin(GL_POINTS);
	glColor3f(255,0,0);//titik merah
	glVertex2f(pxb,pyb);
glEnd();

//titik potong bawah
pxc=(Ccd-Cef)/(Mef-Mcd);
pyc=(Mef*pxc)+Cef;
//hasil
glBegin(GL_POINTS);
	glColor3f(255,0,0);//titik merah
	glVertex2f(pxc,pyc);
glEnd();

//titik potong atas
pxd=(Cab-Cgh)/(Mgh-Mab);
pyd=(Mgh*pxd)+Cgh;
//hasil
glBegin(GL_POINTS);
	glColor3f(255,0,0);//titik merah
	glVertex2f(pxd,pyd);
glEnd();
glFlush();
}
int main(int argc, char**argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1200,600);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Wilujeng Ayu Nawang Sari - 672018234");
	glutDisplayFunc(tampilan);
	myInit();
	glutMainLoop();
}
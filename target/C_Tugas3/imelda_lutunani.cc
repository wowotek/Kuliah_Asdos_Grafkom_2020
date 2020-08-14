#include <GL/gl.h>
#include <GL/glut.h>

float xa=50, ya=50,
	  xb=150, yb=200,
	  xc=50, yc=200, 
	  xd=150, yd=50,
	  xe=100, ye=50,
	  xf=200, yf=200,
	  xg=100, yg=200,
	  xh=200, yh=50,
 Mab,Mcd,Mef,Mgh,Cab,Ccd, Cef,Cgh,px,py,pz,pi,pa,pb;

void garis(void){
 Mab = (yb-ya)/(xb-xa);
 Cab = ya-(Mab*xa);
 
 Mcd = (yd-yc)/(xd-xc);
 Ccd = yc -(Mcd*xc);

 Mef= (yf-ye)/(xf-xe);
 Cef= ye-(Mef*xe);

 Mgh= (yh-yg)/(xh-xg);
 Cgh= yg-(Mgh*xg);

 px = (Ccd-Cab)/(Mab-Mcd);
 py = (Mab*px)+Cab;
 pz = (Cef-Cab)/(Mab-Mef);
 pi = (Mef*pz)+Cef;
 pa = (Cgh-Cab)/(Mab-Mgh);
 pb=  (Mgh*pa)+Cgh;




 glClear (GL_COLOR_BUFFER_BIT);
 glBegin (GL_LINES);
 glColor3f(1, 0, 0);
  glVertex2i(xa,ya);                
  glVertex2i(xb,yb);

 glColor3f(0, 1, 0);
  glVertex2i(xc,yc);                
  glVertex2i(xd,yd);
 
 glColor3f(1, 0, 0);
 glVertex2i(xe,ye);                
  glVertex2i(xf,yf);

 glColor3f(0, 1, 0);
  glVertex2i(xg,yg);                
  glVertex2i(xh,yh);
 glEnd ();
 glFlush();

 glBegin(GL_POINTS);
 glColor3f(0, 0, 1);
  glVertex2i(px,py);
  glVertex2i(pz,pi);
  glVertex2i(pa,pb);//titik Potong
 glEnd();
 glFlush();
}

void display (void){
 glClearColor(1,1,1,0);
 glColor3f(0.0f,0.0f,0.0f);
 glPointSize(10);
 glLineWidth(3);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(0,300,0,500);
 glFlush();

}

int main (int x, char** y){
 glutInit(& x,y);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowSize(500,500);
 glutInitWindowPosition(200,200);
 glutCreateWindow(" Imelda Ruwae Lutunani-672018230 ");
 glutDisplayFunc(garis);
 display();
 glutMainLoop();
}
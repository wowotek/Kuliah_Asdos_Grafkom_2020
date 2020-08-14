#include <GL/glut.h>


void garis(void)
{
	glClearColor(1.0,1.0,1.0,0.0);
	glColor3f(0,0,0);
	glPointSize(5.0);           //  kotak merah sbg titik
	gluOrtho2D(0.0,500.0,0.0,480.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(3.0);           // ukuran lebar kotak tepi
}

void tampil(void)
{
	float a1=50,  a2=50,
          b1=150, b2=200,
          c1=50,  c2=200,
          d1=150, d2=50,
		  e1=100, e2=50,
		  f1=200, f2=200,
		  g1=100, g2=200,
          h1=200, h2=50;

    float a,b,c,d,e,f,g,h;
    float xx1,xx2,xx3,xx4,xx5,xx6,xx7,xx8;

	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);      // Garis kuning
	glColor3f(1, 1, 0);
	glVertex2f(a1,a2);
	glVertex2f(b1,b2);
	glEnd();

    glBegin(GL_LINES);      // Garis biru
	glColor3f(0, 0, 1);
	glVertex2f(c1,c2);
	glVertex2f(d1,d2);
	glEnd();

    glBegin(GL_LINES);      // Garis hijau
	glColor3f(0, 1, 0);
	glVertex2f(e1,e2);
	glVertex2f(f1,f2);
	glEnd();

	glBegin(GL_LINES);      // Garis hitam
	glColor3f(0, 0, 0);
	glVertex2f(g1,g2);
	glVertex2f(h1,h2);
	glEnd();

	glBegin(GL_LINE_LOOP);  // Garis tepi hitam kotak
	glColor3f(0, 0, 0);
	glVertex2f(200,50);
	glVertex2f(200,200);
	glVertex2f(50,200);
	glVertex2f(50,50);
	glEnd();

// Perhitungan kotak merah
	a=(b2-a2) / (b1-a1);
	b=(d2-c2) / (d1-c1);
	d=(f2-e2) / (f1-e1);
	g=(h2-g2) / (h1-g1);

	c=a2 - (a1*a);
	f=c2 - (c1*b);
	e=e2 - (e1*d);
	h=g2 - (g1*g);

	xx1= (f-c) / (a-b);
	xx2= (a*xx1) + c;

	xx3= (h-c) / (a-g);
	xx4= (g*xx3) + h;

	xx5= (f-e) / (d-b);
	xx6= (b*xx5) + f;

	xx7= (e-h) / (g-d);
	xx8= (d*xx7) + e;

    glBegin(GL_POINTS);     // kotak merah pertama kiri
	glColor3f(1, 0, 0);
	glVertex2f(xx1,xx2);
	glEnd();

    glBegin(GL_POINTS);     // kotak merah kedua atas
	glColor3f(1, 0, 0);
	glVertex2f(xx3,xx4);
	glEnd();

    glBegin(GL_POINTS);     // kotak merah ketiga bawah
	glColor3f(1, 0, 0);
	glVertex2f(xx5,xx6);
	glEnd();

    glBegin(GL_POINTS);     // kotak merah keempat kanan
	glColor3f(1, 0, 0);
	glVertex2f(xx7,xx8);
	glEnd();

	glFlush();
	}

	int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 400);
	glutInitWindowPosition(200, 10);
	glutCreateWindow("Devi Ariella Susanto - 672018037");
	glutDisplayFunc(tampil);
	garis();
	glutMainLoop();
}

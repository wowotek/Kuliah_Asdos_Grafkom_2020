#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>

void Init(void){
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glPointSize(6);
	glOrtho(-300.0, 300.0, -300.0, 300.0, -300.0, 300.0);
}

void Display(void){
	glClear(GL_COLOR_BUFFER_BIT);
	
	float ax=50;
	float ay=50;
	float bx=150;
	float by=200;
	float cx=50;
	float cy=200;
	float dx=150;
	float dy=50;
	float ex=100;
	float ey=50;
	float fx=200;
	float fy=200;
	float gx=100;
	float gy=200;
	float hx=200;
	float hy=50;
	float m1,c1;
	float m2,c2;
	float m3,c3,m4,c4,m5,c5,m6,c6,m7,c7,m8,c8;
	float x,y,a,b,c,d,e,f;
	glBegin(GL_LINES); 
		//GARIS AB
		glColor3f(1.0, 0.0, 0.0);
		glVertex2f(ax, ay); // GARIS A
		glVertex2f(bx, by); // GARIS B
		 // GARIS CD
		glColor3f(0.0, 1.0, 0.0);
		glVertex2f(cx, cy); // GARIS C
		glVertex2f(dx, dy); // GARIS D
		//GARIS EF
		glColor3f(0.0, 0.0, 1.0);
		glVertex2f(ex, ey); // GARIS E
		glVertex2f(fx, fy); // GARIS F
		//GARIS GH
		glColor3f(1.0, 0.0, 0.0);
		glVertex2f(gx, gy); // GARIS G
		glVertex2f(hx, hy); // GARIS H
	glEnd();

	//MENENTUKAN PERSAMAAN GARIS
	//================================CD=================================
	m1=(by-ay)/(bx-ax);
	c1=ay-(m1*ax);
	
	//CD
	m2=(dy-cy)/(dx-cx);
	c2=cy-(m2*cx);

	//PERPOTONGAN
	x=(c2-c1)/(m1-m2);
	y=(m1*x) + c1;
	glColor3f(1.0, 1.0, 0.0);
	printf("(%f, %f)\n", x, y);
	glBegin(GL_POINTS);
		glVertex2f(x, y);
	glEnd();
	//===================================================================
	//================================EF=================================
	m3=(dy-cy)/(dx-cx);
	c3=cy-(m3*cx);
	
	//EF
	m4=(fy-ey)/(fx-ex);
	c4=ey-(m4*ex);

	//PERPOTONGAN
	a=(c4-c3)/(m3-m4);
	b=(m3*a) + c3;
	glColor3f(1.0, 1.0, 0.0);
	printf("(A : %f, %f)\n", a, b);
	glBegin(GL_POINTS);
		glVertex2f(a, b);
	glEnd();
	//===================================================================
	//================================GH=================================
	m5=(fy-ey)/(fx-ex);
	c5=ey-(m5*ex);
	
	//EF
	m6=(hy-gy)/(hx-gx);
	c6=gy-(m6*gx);

	//PERPOTONGAN
	c=(c6-c5)/(m5-m6);
	d=(m5*c) + c5;
	glColor3f(1.0, 1.0, 0.0);
	printf("(%f, %f)\n", c, d);
	glBegin(GL_POINTS);
		glVertex2f(c, d);
	glEnd();
	//===================================================================
	//================================AB=================================
	m7=(hy-gy)/(hx-gx);
	c7=gy-(m7*gx);
	
	//EF
	m8=(by-ay)/(bx-ax);
	c8=ay-(m8*ax);

	//PERPOTONGAN
	e=(c8-c7)/(m7-m8);
	f=(m7*e) + c7;
	glColor3f(1.0, 1.0, 0.0);
	printf("(%f, %f)\n", e, f);
	glBegin(GL_POINTS);
		glVertex2f(e, f);
	glEnd();
	//===================================================================
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0, 0.0, 0.0);
		glVertex2f(200, 200);
		glVertex2f(200, 50);
		glVertex2f(50, 50);
		glVertex2f(50, 200);
	glEnd();


	glutSwapBuffers();
	glFlush();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(250, 250);
	glutCreateWindow("Dwi Puja Anggraeni - 672018406");
	glutDisplayFunc(Display);
	Init();
	glutMainLoop();
}

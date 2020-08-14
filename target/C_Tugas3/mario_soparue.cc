#include <iostream>
#include<GL/glut.h>

void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(6.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(3.0f);
	gluOrtho2D(0.0, 250.0, 0.0, 250.0);
}



void garis(void) {
float 
xa1 = 50, ya1 = 50,
xb1 = 150, yb1 = 200,
xa2 = 50, ya2 = 200,
xb2 = 150, yb2 = 50,
xa3 = 100, ya3 = 50,
xb3 = 200, yb3 = 200,
xa4 = 100, ya4 = 200,
xb4 = 200, yb4 = 50,
Mab1, Mab2, Cab1, Cab2,
Mab3, Mab4, Cab3, Cab4,
titik_xA, titik_yA,
titik_xB, titik_yB,
titik_xC, titik_yC,
titik_xD, titik_yD;
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2i(xa1, ya1);                //gasris AB1
	glVertex2i(xb1, yb1);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2i(xa2, ya2);                //garis AB2
	glVertex2i(xb2, yb2);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex2i(xa3, ya3);                //garis AB3
	glVertex2i(xb3, yb3);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0f, 1.0f, .0f);
	glVertex2i(xa4, ya4);                //garis AB4
	glVertex2i(xb4, yb4);
	glEnd();
	//rumus
	Mab1 = (yb1 - ya1) / (xb1 - xa1);
	Mab2 = (yb2 - ya2) / (xb2 - xa2);
	Mab3 = (yb3 - ya3) / (xb3 - xa3);
	Mab4 = (yb4 - ya4) / (xb4 - xa4);
	Cab1 = ya1 - (xa1*Mab1);
	Cab2 = ya2 - (xa2*Mab2);
	Cab3 = ya3 - (xa3*Mab3);
	Cab4 = ya4 - (xa4*Mab4);
	// titik	
	titik_xA = (Cab2-Cab1) / (Mab1 - Mab2);
	titik_yA = (Mab1*titik_xA) + Cab1;
	titik_xB= (Cab4 - Cab3) / (Mab3 - Mab4);
	titik_yB = (Mab3*titik_xB) + Cab3;
	titik_xC = (Cab3 - Cab2) / (Mab2 - Mab3);
	titik_yC = (Mab2*titik_xC) + Cab2;
	titik_xD = (Cab4 - Cab1) / (Mab1 - Mab4);
	titik_yD = (Mab1*titik_xD) + Cab1;
	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(titik_xA,titik_yA);
	glEnd();
	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(titik_xB, titik_yB);
	glEnd();
	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(titik_xC, titik_yC);
	glEnd();
	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(titik_xD, titik_yD);
	glEnd();
	//BINGKAI
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(50, 50);
	glVertex2i(200, 50);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(200, 200);
	glVertex2i(50, 200);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(50, 50);
	glVertex2i(50, 200);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(200, 50);
	glVertex2i(200, 200);
	glEnd();
	glFlush();
}


int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(200, 200);
	glutCreateWindow(" MARIO PHILSON SOPARUE - 672017213");
	glutDisplayFunc(garis);
	myInit();
	glutMainLoop();
}
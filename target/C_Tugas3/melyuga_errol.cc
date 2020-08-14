#include <GL/glut.h>

void myInit(void){
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(10.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(4.0f);
	gluOrtho2D(0.0, 480.0, 0.0, 480.0);
}

void display(void){
	float ax=50, ay=50, bx=150, by=200, cx=50,cy=200, dx=150, dy=50, ex=100, ey=50, fx=200, fy=200, gx=100, gy=200, hx=200, hy=50,
		Mab, Mcd, Cab, Mef, Mgh, Cgh, Cef, Ccd, px, py, pz, pi, pk, pl, pm, pn;
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
		glVertex2f(ax, ay);
		glVertex2f(bx, by);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 1.0f);
		glVertex2f(cx, cy);
		glVertex2f(dx, dy);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0f, 1.0f, 0.0f);
		glVertex2f(ex, ey);
		glVertex2f(fx, fy);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(gx, gy);
		glVertex2f(hx, hy);
	glEnd();

	Mab = (by-ay)/(bx-ax);
	Mcd = (dy-cy)/(dx-cx);
	Mef = (fy-ey)/(fx-ex);
	Mgh = (hy-gy)/(hx-gx);
	Cab = ay -(ax*Mab);
	Ccd = cy -(cx*Mcd);
	Cef = ey -(ex*Mef);
	Cgh = gy -(gx*Mgh);

	px = (Ccd-Cab)/(Mab-Mcd);
	py = (Mab*px) + Cab;
	pz = (Ccd-Cef)/(Mef-Mcd);
	pi = (Mef*pz) + Cef;
	pk = (Cab-Cgh)/(Mgh-Mab);
	pl = (Mgh*pk) + Cgh;
	pm = (Cgh-Cef)/(Mef-Mgh);
	pn = (Mef*pm) + Cef;
	
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(50, 50);
	glVertex2i(200, 50);
	glVertex2i(200, 200);
	glVertex2i(50, 200);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(px, py);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(pz, pi);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(pk, pl);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(pm, pn);
	glEnd();
	glFlush();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(720, 480);
	glutInitWindowPosition(100, 50);
	glutCreateWindow("Mellyuga Errol Wicaksono - 672018237");
	glutDisplayFunc(display);
	myInit();
	glutMainLoop();
}
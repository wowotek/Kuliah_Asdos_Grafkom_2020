#include <windows.h>
#include <glut.h>




void display(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glColor3ub(255,231,166);
	glVertex2f(-1000,-1000);
	glVertex2f(-1000, 1000);
	glVertex2f(1000, 1000);
	glVertex2f(1000, -1000);
	glEnd();

	glBegin(GL_TRIANGLES);//gunung
	glColor3ub(0, 100, 0);
	glVertex2f(0.8, 0.6);
	glVertex2f(-0.1, -1.8);
	glVertex2f(2.0, -1.8);
	glEnd();

	
	glBegin(GL_POLYGON);// lautan
	glColor3ub(77, 177, 219); 
	glVertex2f(-1, -0.6);
	glVertex2f(1, -0.6);
	glVertex2f(1, -1);
	glVertex2f(-1, -1);
	glEnd();

	glBegin(GL_POLYGON);//dermaga
	glColor3ub(105, 105, 105);
	glVertex2f(0.5, -0.4);
	glVertex2f(1.1, -0.4);
	glVertex2f(1.1, -0.6);
	glVertex2f(0.5, -0.6);
	glEnd();

	glBegin(GL_POLYGON);//barang
	glColor4f(1.0, 0.5, 0.0, 0.0);
	glVertex2f(0.6, -0.3);
	glVertex2f(0.7, -0.3);
	glVertex2f(0.7, -0.4);
	glVertex2f(0.6, -0.4);
	glEnd();

	glBegin(GL_POLYGON);//rumah
	glColor3f(0.1, 0.0, 0.0);
	glVertex2f(0.8, -0.2);
	glVertex2f(1.0, -0.2);
	glVertex2f(1.0, -0.4);
	glVertex2f(0.8, -0.4);
	glEnd();

	glBegin(GL_TRIANGLES);//atapRumah
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(0.9, -0.1);
	glVertex2f(0.8, -0.2);
	glVertex2f(1.0, -0.2);
	glEnd();


	glBegin(GL_POLYGON);//badan kapal
	glColor3ub(255, 69, 0);
	glVertex2f(-0.4, -0.6);
	glVertex2f(0.4, -0.6);
	glVertex2f(0.6, -0.2);
	glVertex2f(-0.6, -0.2);
	glEnd();

	glBegin(GL_POLYGON);//tiang kapal
	glColor4f(1.0, 0.5, 0.0, 0.0);
	glVertex2f(0.1, -0.1);
	glVertex2f(0.12, -0.1);
	glVertex2f(0.12, 0.4);
	glVertex2f(0.1, 0.4);
	glEnd();
	glBegin(GL_TRIANGLES);//bendera kapal
	glColor3f(1, 1, 1);
	glVertex2f(0.1, 0.5);
	glVertex2f(0.5, 0.1);
	glVertex2f(0.1, 0.1);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2d(-0.6, -0.1);
	glVertex2d(-0.6, -0.2);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2d(-0.5, -0.1);
	glVertex2d(-0.5, -0.2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2d(-0.4, -0.1);
	glVertex2d(-0.4, -0.2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2d(-0.3, -0.1);
	glVertex2d(-0.3, -0.2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2d(-0.2, -0.1);
	glVertex2d(-0.2, -0.2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2d(-0.6, -0.1);
	glVertex2d(-0.2, -0.1);
	glEnd();

	glBegin(GL_POLYGON);//atas kapal
	glColor3f(0.1, 0.0, 0.0);
	glVertex2f(-0.2, -0.2);
	glVertex2f(0.5, -0.2);
	glVertex2f(0.5, -0.0);
	glVertex2f(-0.1, -0.0);
	glEnd();

	glBegin(GL_POLYGON);//jendela kapal
	glColor3ub(112, 128, 144);
	glVertex2f(0.1, -0.1);
	glVertex2f(0.3, -0.1);
	glVertex2f(0.3, -0.2);
	glVertex2f(0.1, -0.2);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2d(0.2, -0.1);
	glVertex2d(0.2, -0.2);
	glEnd();


	glBegin(GL_POLYGON);//ikan
	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(0.1, -0.8);
	glVertex2f(0.2, -0.7);
	glVertex2f(0.3, -0.8);
	glVertex2f(0.2, -0.9);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(0.3, -0.7);
	glVertex2f(0.2, -0.8);
	glVertex2f(0.3, -0.9);
	glEnd();

	glBegin(GL_POLYGON);//ikan
	glColor3ub(165, 42, 42);
	glVertex2f(0.4, -0.8);
	glVertex2f(0.5, -0.7);
	glVertex2f(0.6, -0.8);
	glVertex2f(0.5, -0.9);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(165, 42, 42);
	glVertex2f(0.6, -0.7);
	glVertex2f(0.5, -0.8);
	glVertex2f(0.6, -0.9);
	glEnd();


	glBegin(GL_TRIANGLES);//pulau
	glColor3ub(0, 100, 0);
	glVertex2f(-1.0, -0.1);
	glVertex2f(-0.8, -0.6);
	glVertex2f(-1.0, -0.6);
	glEnd();
	

	glFlush();
}
void myinit() {
	glClearColor(1.0, 1.0, 0.0, 0.0);
	glColor3f(1.0, 0.0, 1.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1000, 600);
	glutInitWindowPosition(200, 100);
	glutCreateWindow("Project Kapal Sederhana");
	glutDisplayFunc(display);
	
	glutMainLoop();
	return 0;
}
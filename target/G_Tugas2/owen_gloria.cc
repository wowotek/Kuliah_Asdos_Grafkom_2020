#include <iostream>
#include <GL/glut.h>
#include <math.h>

int i;
const double PI = 3.141592653589793;
void lingkaran(float jari2, float jumlah_titik, float x_tengah, float y_tengah) {
	glBegin(GL_POLYGON);
	for (i = 0; i <= 360; i++) {
		float sudut = i * (2 * PI / jumlah_titik);
		float x = x_tengah + jari2 * cos(sudut);
		float y = y_tengah + jari2 * sin(sudut);
		glVertex2f(x, y);
	}
	glEnd();
}

double rad = 0;
double alpha = 0;
double omega = 0;
double foxtrot = 0;

void

OnDisplayRender(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	lingkaran(4, 14, 50, 50);
	glColor3f(0, 1, 1);
	glEnd();

	lingkaran(2, 50,sin(rad) *10 + 50, cos(rad) * 10 + 50);
	glColor3f(1, 1, 1);
	glEnd();

	lingkaran(2, 50, sin(alpha) *15 + 50, cos(alpha) *15 + 50);
	glColor3f(0, 0, 1);
	glEnd();

	lingkaran(2, 50, sin(omega) * 20 + 50, cos(omega) * 20 + 50);
	glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
	glEnd();

	lingkaran(2, 50, sin(foxtrot) * 25 + 50, cos(foxtrot) * 25 + 50);
    glColor3f(1, 1, 0);
	glEnd();

	glBegin(GL_POLYGON);

	{
	
		
		
		
	
		



		
		//glVertex2f(sin(rad) * 15 + 58, cos(rad) * 15 + 58);
		
		
		//glColor3f(0.5f, 0.5f, 0.5f);
		//glVertex2f(sin(rad) * 20 + 45, cos(rad) * 20 + 45);
		//lingkaran(2, 12, 65, 65);

		//glColor3f(0, 0, 1);
		//glVertex2f(sin(rad) * 30 + 50, cos(rad) * 30 + 50);
		//lingkaran(2, 12, 70, 70);

		//
		//glVertex2f(sin(rad) * 40 + 52, cos(rad) * 40 + 52);
		//lingkaran(2, 12, 75, 75);
	}
	glEnd();
	glFlush();
}


void
OnDisplayUpdate(int) {
	rad += 0.01f;
	alpha += 0.03f;
	omega += 0.02f;
	foxtrot += 0.04f;
	
	std::cout << rad << std::endl;
	glutPostRedisplay();
	glutTimerFunc(7, OnDisplayUpdate, 1);


}




int main(int argc, char** argv) {
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(480, 150);
	glutInitWindowSize(800, 800);

	glutCreateWindow(argv[0]);

	gluOrtho2D(0, 100, 100, 0);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glutTimerFunc(7, OnDisplayUpdate, 1);
	glutDisplayFunc(OnDisplayRender);
	glutMainLoop();



	return (0);
}

#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void Init(void) {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(1.0);
	glOrtho(-15.0, 15.0, -15.0, 15.0, -15.0, 15.0);
	glViewport(40, 400, 600, 300);
}

void ngon(int n, float cx, float cy, float radius, float rotAngel) {
	double angel, angelInc;
	int k,i;
	if (n < 3)return;
	angel = rotAngel * 3.14159265 / 360;
	angelInc = 2 * 3.14159265 / n;
	glVertex2f(radius*cos(angel) + cx, radius*sin(angel) + cy);
	for (k = 0;k < n - 1;k++) {
		angel += angelInc;
		glVertex2f((radius + angelInc)*cos(angel) + cx, (radius + angelInc)*sin(angel) + cy);
	}
}

void Display(void) {
	double angelInc, i;
	int j;
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_LINE_LOOP);
	
	angelInc = 2 * 3.14159265 / 35;
	for (i = 1; i <= 10; i += angelInc) {
		
		if (i<7)
		{
			glColor3f(1.0, 1.0, 0.0);
			
		}
		else
		{
			glColor3f(0.0, 0.0, 1.0);
		}
		ngon(6, 0, 0, i - 1, 2 + (i * 20));
	}
			
	glEnd();
	glFlush();
	glutSwapBuffers();
}

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Yefta Adisatrio - 672018326");
	Init();
	glutDisplayFunc(Display);
	glutMainLoop();
	return 0;

}
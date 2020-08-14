#include <GL/glut.h>


void Inisialisasi(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(10.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(4.0f);
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void Display(void) {
	float a1x = 50, a1y = 50, b1x = 150, b1y = 200, a2x = 50, a2y = 200, b2x = 150, b2y = 50, a3x = 100, a3y = 50, b3x = 200, b3y = 200,
		a4x = 100, a4y = 200, b4x = 200, b4y = 50, Ma1b1, Ca1b1, Ma2b2, Ca2b2, Ma3b3, Ca3b3, Ma4b4, Ca4b4, px1, px2, py1, py2,pz, pi;
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);//merah
	glVertex2f(a1x, a1y);
	glVertex2f(b1x, b1y);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 1.0f, 0.0f);//hijau
	glVertex2f(a2x, a2y);
	glVertex2f(b2x, b2y);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 1.0f);//biru
	glVertex2f(a3x, a3y);
	glVertex2f(b3x, b3y);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);//kunning
	glVertex2f(a4x, a4y);
	glVertex2f(b4x, b4y);
	glEnd();

	///rumua perpotongan
	Ma1b1 = (b1y - a1y) / (b1x - a1y);
	Ma2b2 = (b2y - a2y) / (b2x - a2y);
	Ma3b3 = (b3y - a3y) / (b3x - a3y);
	Ma4b4 = (b4y - a4y) / (b4x - a4y);

	Ca1b1 = a1y - (a1x * Ma1b1);
	Ca2b2 = a2y - (a2x * Ma2b2);
	Ca3b3 = a3y - (a3x * Ma3b3);
	Ca4b4 = a3y - (a4x * Ma4b4);


	//titik potong
	px1 = (Ca2b2 - Ca1b1) / (Ma1b1 - Ma2b2);
	px2 = (Ca4b4 - Ca3b3) / (Ma3b3 - Ma4b4);
	py1 = (Ma1b1 * px1) + Ca1b1;
	py2 = (Ma3b3 * px2) + Ca3b3;
	

	//hasil
	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(px1, py1);
	glVertex2f(px2, py2);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(50, 50);//LINE HITAM BAWAH
	glVertex2f(200, 50);
	glVertex2f(50, 48);//LINE HITAM SAMPING
	glVertex2f(50, 200);
	glVertex2f(47, 200);//LINE HITAM ATAS
	glVertex2f(200, 200);
	glVertex2f(200, 203);//LINE HITAM SAMPING
	glVertex2f(200, 48);

	glEnd();

	glFlush();
	

}




int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("PIPIT PUSPITASARI - 672018423");
	glutDisplayFunc(Display);
	Inisialisasi();
	glutMainLoop();
	return 0;
}


#include <GL/glut.h>

void Init(void) {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(10.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(5.0f);
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void Display(void) {
	float a1x = 50, a1y = 50, b1x = 150, b1y = 200,
		a2x = 50, a2y = 200, b2x = 150, b2y = 50,
		a3x = 100, a3y = 50, b3x = 200, b3y = 200,
		a4x = 100, a4y = 200, b4x = 200, b4y = 50,
		Mab1,Mab2,Mab3,Mab4,Cab1,Cab2,Cab3,Cab4,
		px1,px2,py1,py2,pz1,pz2,pi1,pi2;

	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_LINES); // garis 1
	glColor3f(1.0f, 1.0f, 0.0f); //Kuning
	glVertex2f(a1x, a1y);
	glVertex2f(b1x, b1y);
	glEnd();

	glBegin(GL_LINES); // garis 2
	glColor3f(0.0f, 0.0f, 1.0f); //Biru
	glVertex2f(a2x, a2y);
	glVertex2f(b2x, b2y);
	glEnd();

	glBegin(GL_LINES); // garis 3
	glColor3f(0.0f, 1.0f, 0.0f); // Hijau
	glVertex2f(a3x, a3y);
	glVertex2f(b3x, b3y);
	glEnd();

	glBegin(GL_LINES); // garis 4
	glColor3f(0.0f, 0.0f, 0.0f);// Hitam
	glVertex2f(a4x, a4y);
	glVertex2f(b4x, b4y);
	glEnd();

	glBegin(GL_LINE_LOOP); //Kotak
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(50, 50);
	glVertex2f(200, 50);
	glVertex2f(200, 200);
	glVertex2f(50, 200);
	glEnd();

	//Rumus Perpotongan
	Mab1 = (b1y - a1y) / (b1x - a1x);
	Mab2 = (b2y - a2y) / (b2x - a2x);
	Mab3 = (b3y - a3y) / (b3x - a3x);
	Mab4 = (b4y - a4y) / (b4x - a4x);
	Cab1 = a1y - (a1x*Mab1);
	Cab2 = a2y - (a2x*Mab2);
	Cab3 = a3y - (a3x*Mab3);
	Cab4 = a4y - (a4x*Mab4);

	//Titik Potong
	px1 = (Cab2 - Cab1) / (Mab1 - Mab2);//Titik 1
	py1 = (Mab1*px1) + Cab1;

	px2 = (Cab4 - Cab1) / (Mab1 - Mab4);//Titik 2
	py2 = (Mab1*px2) + Cab1;

	pz1 = (Cab2 - Cab3) / (Mab3 - Mab2);//Titik 3
	pi1 = (Mab3*pz1) + Cab3;

	pz2 = (Cab4 - Cab3) / (Mab3 - Mab4);//Titik 4
	pi2 = (Mab3*pz2) + Cab3;

	//Hasil
	glBegin(GL_POINTS); //Titik 1
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(px1, py1);
	glEnd();

	glBegin(GL_POINTS); //Titik 2
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(px2, py2);
	glEnd();

	glBegin(GL_POINTS); //Titik 3
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(pz1, pi1);
	glEnd();

	glBegin(GL_POINTS); //Titik 3
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(pz2, pi2);
	glEnd();

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 50);
	glutCreateWindow("Yefta Adisatrio-672018326");
	Init();
	glutDisplayFunc(Display);
	glutMainLoop();
}
#include <GL/glut.h>

void myInit (void)
{
	glClearColor (1.0,1.0,1.0,1.0);
	glPointSize(6.0); //UKURAN TITIK
	glLineWidth(3.0); //UKURAN GARIS 
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,500.0,0.0,500.0);
	
} 


void mydisplay(void)
{
	glColor3f(1,1,0);
	glBegin(GL_LINES);
	glVertex2i(50,50); //A1
	glVertex2i(150,200);//B1
	
	glEnd();

	glColor3f(0,181/255.f,0);
	glBegin(GL_LINES);
	glVertex2i(100,50); //A3
	glVertex2i(200,200); //B3
	
	glEnd();
	
	
	glColor3f(0,0,1);
	glBegin(GL_LINES);
	glVertex2i(50,200); //A2;
	glVertex2i(150,50); //B2 ;
	
	glEnd();
	
	
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	glVertex2i(100,200);//A4
	glVertex2i(200,50); //B4
	
	glEnd();

	glColor3f(1,0,0);
	glBegin(GL_POINTS);
	glVertex2i(99,125);
	glEnd() ;

	glBegin(GL_POINTS);
	glVertex2i(150,125);
	glEnd() ;
	
	glBegin(GL_POINTS);
	glVertex2i(125,163);
	glEnd() ;

	glBegin(GL_POINTS);
	glVertex2i(125,89);
	glEnd() ;

	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2i(50,50);
	glVertex2i(200,50);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2i(200,50);
	glVertex2i(200,200);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2i(200,200);
	glVertex2i(50,200);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2i(50,200);
	glVertex2i(50,50);
	glEnd();




	glFlush(); //KIRIM OUTPUR KE LAYAR

}
 

int main (int argc, char**argv)
{
	glutInit (&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //SET MODUS DISPLAY
	glutInitWindowSize(640,480); //UKURAN WINDOW
	glutInitWindowPosition(100,150); //POSISI WINDOW SAAT PERTAMA KALI MUNCUL
	glutCreateWindow("Kevin Andreas - 672018042"); //JUDUL WINDOW
	glutDisplayFunc(mydisplay);
	myInit();
	glutMainLoop();
}


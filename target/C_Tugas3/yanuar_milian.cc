#include <GL/glu.h>
#include <GL/glut.h>

void SILANG(void){
   glClearColor(1.0, 1.0, 1.0, 1.0); //Background putih
   glPointSize(10.5); //Ukuran titik pada titik perpotongan
   glLineWidth(5.5); //Ukuran garis bingkai
   gluOrtho2D(5.5, 300.2, 2.2, 300.2); //Tata letak eksekusi
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();}

void display(void){
    float 
	A1x=50,  A1y=50,
	A2x=150, A2y=200, 
	A3x=50,  A3y=200, 
	A4x=150, A4y=50,
    B1x=100, B1y=50, 
	B2x=200, B2y=200, 
	B3x=100, B3y=200, 
	B4x=200, B4y=50,
    HA1A2, HA3A4, HB3B4, HB1B2, 
	IA1A2, IB1B2, IA3A4, IB3B4,
    Y1, Y2, Y3, Y4, Y5, Y6, Y7, Y8;
    glClear (GL_COLOR_BUFFER_BIT);
    
	//Garis Kuning
    glBegin(GL_LINES);
    glColor3ub(254, 249, 0);
    glVertex2f(A1x, A1y);
    glVertex2f(A2x, A2y);
    glEnd();

	//Garis Biru
    glBegin(GL_LINES);
    glColor3ub(86, 86, 244);
    glVertex2f(A3x, A3y);
    glVertex2f(A4x, A4y);
    glEnd();

	//Garis Hijau
    glBegin(GL_LINES);
    glColor3ub(5, 252, 0);
    glVertex2f(B1x, B1y);
    glVertex2f(B2x, B2y);
    glEnd();
	
	//Garis Hitam
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(B3x, B3y);
    glVertex2f(B4x, B4y);
    glEnd();


	//Rumus Perpotongan Garis
    HA1A2 = (A2y-A1y) / (A2x-A1x);
    HA3A4 = (A4y-A3y) / (A4x-A3x);
    HB1B2 = (B2y-B1y) / (B2x-B1x);
    HB3B4 = (B4y-B3y) / (B4x-B3x);
    IA1A2 = A1y - (A1x*HA1A2);
    IA3A4 = A3y - (A3x*HA3A4);
    IB1B2 = B1y - (B1x*HB1B2);
    IB3B4 = B3y - (B3x*HB3B4);

	///Titik potong Y1 & Y2 (garis kuning dan garis biru)
    Y1=(IA3A4-IA1A2) / (HA1A2-HA3A4);
    Y2=(HA1A2*Y1)+IA1A2;
    
    //Titik potong Y3 & Y4 (garis hijau dan garis biru)
    Y3=(IA3A4-IB1B2) / (HB1B2-HA3A4);
    Y4=(HB1B2*Y3)+IB1B2;
    
    //Titik potong Y5 & Y6 (garis hitam dan garis kuning)
    Y5=(IB3B4-IA1A2) / (HA1A2-HB3B4);
    Y6=(HA1A2*Y5)+IA1A2;
    
    //Titik potong Y7 & Y8 (garis hitam dan garis hijau)
    Y7=(IB3B4-IB1B2) / (HB1B2-HB3B4);
    Y8=(HB1B2*Y7)+IB1B2;

    glBegin(GL_POINTS);
	glColor3ub(210, 22, 22);
	glVertex2f(Y1,Y2);
	glEnd();

	glBegin(GL_POINTS);
	glColor3ub(210, 22, 22);
	glVertex2f(Y3,Y4);
	glEnd();

    glBegin(GL_POINTS);
	glColor3ub(210, 22, 22);
	glVertex2f(Y5,Y6);
	glEnd();

	glBegin(GL_POINTS);
	glColor3ub(210, 22, 22);
	glVertex2f(Y7,Y8);
	glEnd();

	//Hasil
	glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	glVertex2f(A1x, A1y);
	glVertex2f(A3x, A3y);
	glVertex2f(B2x, B2y);
	glVertex2f(B4x, B4y);
	glEnd();
    glFlush();}

int main(int argc, char**argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowSize(670,480);
    glutInitWindowPosition(135,135);
    glutCreateWindow("Yanuar Chris Milian - 672018329");
    glutDisplayFunc(display);
    SILANG();
    glutMainLoop();}

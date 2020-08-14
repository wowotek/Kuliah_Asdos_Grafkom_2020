#include <GL/glut.h>

void Inisialisasi(void)
{
    glClearColor(1.0,1.0,1.0,0.0);
    glColor3f(0.0f,0.0f,0.0f);
    glPointSize(10.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glLineWidth(4.0f);
    gluOrtho2D(0.0,640.0,0.0,480.0);
}
void Display(void)
{
    float a1x=50, a1y=50, a2x=150, a2y= 200, a3x=50, a3y=200, a4x=150, a4y=50, b1x=100, b1y=50, b2x=200, b2y=200, b3x=100, b3y=200, b4x=200, b4y=50,
            Ma12,Ma34,Ca12,Ca34,Mb12,Mb34,Cb12,Cb34,px,py,pz,pi,pa,pb,pc,pd;

    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
    glColor3f(1,1,0);
        glVertex2f(a1x,a1y);
        glVertex2f(a2x,a2y);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,1);
        glVertex2f(a3x,a3y);
        glVertex2f(a4x,a4y);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,1,0);
        glVertex2f(b1x,b1y);
        glVertex2f(b2x,b2y);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
        glVertex2f(b3x,b3y);
        glVertex2f(b4x,b4y);
    glEnd();

    glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex2f(200,50);
	glVertex2f(200,200);
	glVertex2f(50,200);
	glVertex2f(50,50);
	glEnd();

    //Rumus Perpotongan
        Ma12=(a2y-a1y)/(a2x-a1x);
        Ma34=(a4y-a3y)/(a4x-a3x);
        Mb12=(b2y-b1y)/(b2x-b1x);
        Mb34=(b4y-b3y)/(b4y-b4x);

        Ca12=a1y-(a1x*Ma12);
        Ca34=a3y-(a3x*Ma34);
        Cb12=b1y-(b1x*Mb12);
        Cb34=b3y-(b3x*Mb34);

    //titik potong
        px=(Ca34-Ca12)/(Ma12-Ma34);
        py=(Ma12*px)+Ca12;

        pz=(Cb34-Cb12)/(Mb12-Mb34);
        pi=(Mb12*pz)+Cb12;

        pa=(Ca34-Cb12)/(Mb12-Ma34);
        pb=(Ma34*pa)+Ca34;

        pc=(Cb12-Cb34)/(Mb34-Mb12);
        pd=(Mb12*pc)+Cb12;

    //hasil
        glBegin(GL_POINTS);
        glColor3f(1,0,0);
        glVertex2f(px,py);
        glEnd();

        glBegin(GL_POINTS);
        glColor3f(1,0,0);
        glVertex2f(pz,pi);
        glEnd();

        glBegin(GL_POINTS);
        glColor3f(1,0,0);
        glVertex2f(pa,pb);
        glEnd();

        glBegin(GL_POINTS);
        glColor3f(1,0,0);
        glVertex2f(pc,pd);
        glEnd();


        glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(720,720);
    glutInitWindowSize(800,400);
    glutCreateWindow("Akhfan Setiyaji-672018348");
    glutDisplayFunc(Display);
    Inisialisasi();
    glutMainLoop();
}

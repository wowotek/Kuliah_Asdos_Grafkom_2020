#include <GL/glut.h>

    float a=50,b=50,c=50,d=200,e=100,f=50,g=100,h=200;
    float i=150,j=200,k=150,l=50,m=200,n=200,o=200,p=50;
    float Pq,Pw,Pr,Pd,Pa,Pb,Pc,Pz,Px,Pm,Py,Pt;
    float Qa,Qb,Qc,Qd,Qe,Qf,Qg,Qh;

void prgrm(void)
{
    glClearColor(0.5,0.5,0.5,0.0);
    glColor3f(0.0f,0.0f,0.0f);
    glPointSize(10.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glLineWidth(2.0f);


}
void program(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
		glColor3f(1.0,1.0,0.0);
        glVertex2i(a,b);
        glVertex2i(i,j);
    glEnd();

    
    glBegin(GL_LINES);
		glColor3f(0.0,0.0,1.0);
        glVertex2i(c,d);
        glVertex2i(k,l);
    glEnd();

    
    glBegin(GL_LINES);
		glColor3f(0.0,1.0,0.0);
        glVertex2i(e,f);
        glVertex2i(m,n);
    glEnd();

    
    glBegin(GL_LINES);
		glColor3f(0.0,0.0,0.0);
        glVertex2i(g,h);
        glVertex2i(o,p);
    glEnd();

//Rumus Perpotongan
Pq = (j-b)/(i-a);
Pw = (l-d)/(k-c);
Pr = (n-f)/(m-e);
Pd = (p-h)/(o-g);
Px = b-(a*Pq);
Pm = d-(c*Pw);
Py = f-(e*Pr);
Pt = h-(g*Pd);

//Titik Potong
Qa = (Pm-Px)/(Pq-Pw);
Qe = (Pq*Qa)+Px;
Qb = (Pt-Px)/(Pq-Pd);
Qf = (Pq*Qb)+Px;
Qc = (Pm-Py)/(Pr-Pw);
Qg = (Pr*Qc)+Py;
Qd = (Pt-Py)/(Pr-Pd);
Qh = (Pq*Qd)+Py;

//Titik
glBegin(GL_POINTS);
glColor3f(1.0,0.0,0.0);
glVertex2f(Qa,Qe);
glEnd();

glBegin(GL_POINTS);
glColor3f(1.0,0.0,0.0);
glVertex2f(Qb,Qf);
glEnd();

glBegin(GL_POINTS);
glColor3f(1.0,0.0,0.0);
glVertex2f(Qc,Qg);
glEnd();

glBegin(GL_POINTS);
glColor3f(1.0,0.0,0.0);
glVertex2f(Qd,Qh);
glEnd();

glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(50,200);
glVertex2f(200,200);
glVertex2f(200,50);
glVertex2f(50,50);
glEnd();

glutSwapBuffers();
glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
    glutCreateWindow("Ade Andreas Latupeirissa - 672018320");
    glutDisplayFunc(program);
	gluOrtho2D(-100.0, 450.0, -100.0, 450.0);
	prgrm();
    glutMainLoop();
}
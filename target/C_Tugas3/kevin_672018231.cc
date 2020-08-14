#include <GL/glut.h>

    float aa=50,ab=50,ac=50,ad=200,ae=100,af=50,ag=100,ah=200;
    float ba=150,bb=200,bc=150,bd=50,be=200,bf=200,bg=200,bh=50;
    float A,B,C,D,Aa,Ab,Ac,Ad,Ca,Cb,Cc,Cd;
    float qa,qb,qc,qd,qe,qf,qg,qh;

void myinitial(void)
{
    glClearColor(1.0,1.0,1.0,0.0);
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
        glVertex2i(aa,ab);
        glVertex2i(ba,bb);
    glEnd();

    
    glBegin(GL_LINES);
		glColor3f(0.0,0.0,1.0);
        glVertex2i(ac,ad);
        glVertex2i(bc,bd);
    glEnd();

    
    glBegin(GL_LINES);
		glColor3f(0.0,1.0,0.0);
        glVertex2i(ae,af);
        glVertex2i(be,bf);
    glEnd();

    
    glBegin(GL_LINES);
		glColor3f(0.0,0.0,0.0);
        glVertex2i(ag,ah);
        glVertex2i(bg,bh);
    glEnd();

A = (bb-ab)/(ba-aa);
B = (bd-ad)/(bc-ac);
C = (bf-af)/(be-ae);
D = (bh-ah)/(bg-ag);
Ca = ab-(aa*A);
Cb = ad-(ac*B);
Cc = af-(ae*C);
Cd = ah-(ag*D);

qa = (Cb-Ca)/(A-B);
qe = (A*qa)+Ca;
qb = (Cd-Ca)/(A-D);
qf = (A*qb)+Ca;
qc = (Cb-Cc)/(C-B);
qg = (C*qc)+Cc;
qd = (Cd-Cc)/(C-D);
qh = (C*qd)+Cc;

glBegin(GL_POINTS);
glColor3f(1.0,0.0,0.0);
glVertex2f(qa,qe);
glEnd();

glBegin(GL_POINTS);
glColor3f(1.0,0.0,0.0);
glVertex2f(qb,qf);
glEnd();

glBegin(GL_POINTS);
glColor3f(1.0,0.0,0.0);
glVertex2f(qc,qg);
glEnd();

glBegin(GL_POINTS);
glColor3f(1.0,0.0,0.0);
glVertex2f(qd,qh);
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
    glutCreateWindow("Kevin - 672018231");
    glutDisplayFunc(program);
	gluOrtho2D(-180.0, 450.0, -180.0, 450.0);
	myinitial();
    glutMainLoop();
}
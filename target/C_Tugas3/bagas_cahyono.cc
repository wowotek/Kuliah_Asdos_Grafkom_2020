#include <GL/glut.h>

    float aa=50,ab=50,ac=50,ad=200,ae=100,af=50,ag=100,ah=200;
    float ba=150,bb=200,bc=150,bd=50,be=200,bf=200,bg=200,bh=50;
    float Maa,Mab,Mac,Mad,Mca,Mcb,Mcc,Mcd,Caa,Cab,Cac,Cad;
    float pa,pb,pc,pd,pe,pf,pg,ph;

void inisial(void)
{
    glClearColor(1.0,1.0,1.0,0.0);
    glColor3f(0.0f,0.0f,0.0f);
    glPointSize(10.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glLineWidth(2.0f);


}
void TAMPILAN(void)
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




//RUMUS PERPOTONGAN
Maa = (bb-ab)/(ba-aa);
Mab = (bd-ad)/(bc-ac);
Mac = (bf-af)/(be-ae);
Mad = (bh-ah)/(bg-ag);
Caa = ab-(aa*Maa);
Cab = ad-(ac*Mab);
Cac = af-(ae*Mac);
Cad = ah-(ag*Mad);

//RUMUS TITIK POTONG
pa = (Cab-Caa)/(Maa-Mab);
pe = (Maa*pa)+Caa;
pb = (Cad-Caa)/(Maa-Mad);
pf = (Maa*pb)+Caa;
pc = (Cab-Cac)/(Mac-Mab);
pg = (Mac*pc)+Cac;
pd = (Cad-Cac)/(Mac-Mad);
ph = (Mac*pd)+Cac;


//POINT
glBegin(GL_POINTS);
glColor3f(1.0,0.0,0.0);
glVertex2f(pa,pe);
glEnd();

glBegin(GL_POINTS);
glColor3f(1.0,0.0,0.0);
glVertex2f(pb,pf);
glEnd();

glBegin(GL_POINTS);
glColor3f(1.0,0.0,0.0);
glVertex2f(pc,pg);
glEnd();

glBegin(GL_POINTS);
glColor3f(1.0,0.0,0.0);
glVertex2f(pd,ph);
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
    glutCreateWindow("FERDIAN BAGAS CAHYONO - 672018156");
    glutDisplayFunc(TAMPILAN);
	gluOrtho2D(0.0, 450.0, 0.0, 450.0);
	inisial();
    glutMainLoop();
}
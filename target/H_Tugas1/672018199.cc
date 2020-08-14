#include <GL/freeglut.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>

void kapal() {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);//badan kapal
       //bodykapal
    glColor3f(1,0,1);
    glVertex2f(-0.6,-0.8);//kiri bawah
    glVertex2f(0.6,-0.8);//kanan bawah
    glVertex2f(0.8,-0.4);//kanan atas
    glVertex2f(-0.8,-0.4);//kiri atas
    glEnd();
    glBegin(GL_POLYGON);//atas kapal
    glColor3f(0.6,1,0.8); 
    glVertex2f(-0.4,-0.4);
    glVertex2f(0.6,-0.4);
    glVertex2f(0.6,-0.1);
    glVertex2f(-0.2,-0.1);
    glEnd();
    glBegin(GL_POLYGON);//segitiga
   	glColor3f(1, 0, 0);
	glVertex2f(0.7, 0.9);
	glVertex2f(0.9, 0.6);
	glVertex2f(0.5, 0.6)
	glEnd();
	glBegin(GL_POLYGON);//layang layang
	glColor3f(0, 1, 0.3);
	glVertex2f(0.25, 0.1);
	glVertex2f(0.4, -0.075);
	glVertex2f(0.25, -0.4);
	glVertex2f(0.1, -0.075);
	glEnd();


   glFlush();

}


int main(int argc, char** argv)
{

     glutInit(&argc, argv);
     glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
     glutInitWindowSize (800, 700);
     //glutInitWindowPosition (200, 100);
     glutCreateWindow ("Tugas Asdos 1");
     glutDisplayFunc(kapal);
     glutMainLoop();
     return 0;
}
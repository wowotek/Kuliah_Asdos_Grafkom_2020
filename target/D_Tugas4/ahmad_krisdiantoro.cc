#include <cstdlib>
#include <GL/glut.h>
#include <cmath>

#define PI 3.14159265
#define zumu_in 1
#define zumu_out -1
	
	double miru, miru2=45.0f;                      
    double miruInc = 2*PI/6.0;        
    double inc = 5.0/50;                
    double radius = 5.0/50.0;  

using namespace std;

const int waido = 500;
const int takai = 500;
    float cx = 0.0, cy = 0.0;       
    float h=1.2, w = 1.2;           
    int NumFrames = 25;            
    int frame = 0;
    int direction = zumu_in;



void watashi() {
    glClearColor (1.0, 1.0, 1.0, 1.0);          
    glColor3f (0.0, 0.0, 0.0);                 
    glPointSize (3.0);                     
    glViewport (0.0, 0.0, 500.0, 500.0);       


    glMatrixMode (GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-5.0, 5.0, -5.0, 5.0);


}


void Monita() {
  glClear (GL_COLOR_BUFFER_BIT);

   glMatrixMode(GL_MODELVIEW);
   glPushMatrix();
   glRotatef(miru2,0,0,1);
   glTranslatef(-5,-5,0);
   glColor3f(0, 0, 1);

	glBegin(GL_TRIANGLES);
		glVertex2f(3.5, 7);
		glVertex2f(6.5, 7);
		glVertex2f(5, 5);
	glBegin(GL_TRIANGLES);
		glVertex2f(5, 5);
		glVertex2f(3.5, 3);
		glVertex2f(6.5, 3);
	glBegin(GL_TRIANGLES);
		glVertex2f(5, 5);
		glVertex2f(3, 3.5);
		glVertex2f(3, 6.5);
	glBegin(GL_TRIANGLES);
		glVertex2f(7, 3.5);
		glVertex2f(7, 6.5);
		glVertex2f(5, 5);
		glEnd();
	glBegin(GL_QUADS);
		glVertex2f(4.5, 5.5);
		glVertex2f(5.5, 5.5);
		glVertex2f(5.5, 4.5);
		glVertex2f(4.5, 4.5);
		glEnd();
	glPopMatrix();


    glutSwapBuffers();
    glutPostRedisplay();
    glFlush();
}



void Miru(int i) {


    if(direction == zumu_in) {

        w *= 0.9;
        h *= 0.9; 
    } 
    if(direction == zumu_out) {
        w /= 0.9;
        h /= 0.9;
        }   

    if(i%10 == 0) {
        direction = -direction;
    }

        
    cx = waido / w;
    cy = takai / h;
        glViewport((waido-cx)/2, (takai-cy)/2, cx, cy);

        Monita();
		miru2-=10;
        glutPostRedisplay();
        glutTimerFunc(100, Miru,i+1);

}

int main(int argc, char** argv) {
    glutInit(&argc, argv);  
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(waido, takai);
    glutInitWindowPosition(100,100);
    glutCreateWindow("672018372");

    glutDisplayFunc(Monita);
    Miru(1);
    watashi();

    glutMainLoop();
    return 1;
}

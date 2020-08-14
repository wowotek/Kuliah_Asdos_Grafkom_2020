#include <GL/gl.h>
#include <GL/glut.h>

void garis(void){

 glClear (GL_COLOR_BUFFER_BIT);
 glBegin (GL_LINES);
 glColor3f(1, 1, 0);
  glVertex2i(50,50);                
  glVertex2i(150,200);

 glColor3f(0, 0, 1);
  glVertex2i(50,200);                
  glVertex2i(150,50);

 glColor3f(0, 1, 0);
  glVertex2i(100,50);                
  glVertex2i(200,200);
 
 glColor3f(0, 0, 0);
  glVertex2i(100,200);                
  glVertex2i(200,50);

 glEnd ();
 glFlush();

 glBegin(GL_LINE_LOOP);
  glVertex2f(50, 200 ); 
  glVertex2f(200, 200); 
  glVertex2f(200, 50); 
  glVertex2f(50, 50); 
 glEnd();
 glFlush();

 glBegin(GL_POINTS);
 glColor3f(1, 0, 0);
  glVertex2i(100,125);

 glBegin(GL_POINTS);
 glColor3f(1, 0, 0);
  glVertex2i(150,125);
 
 glBegin(GL_POINTS);
 glColor3f(1, 0, 0);
  glVertex2i(125,90);

 glBegin(GL_POINTS);
 glColor3f(1, 0, 0);
  glVertex2i(125,165);

 glEnd();
 glFlush();
}

void display (void){
 glClearColor(1,1,1,0);
 glColor3f(0.0f,0.0f,0.0f);
 glPointSize(10);
 glLineWidth(3);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(0,300,0,500);
 glFlush();

}

int main (int x, char** y){
 glutInit(& x,y);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowSize(800,600);
 glutInitWindowPosition(200,200);
 glutCreateWindow("Bonaventura Aditya - 672018015");
 glutDisplayFunc(garis);
 display();
 glutMainLoop();
}


#include <windows.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 1);
    glVertex2f(400, 0);
    glVertex2f(-400, 0);
    glVertex2f(-450, 50);
    glVertex2f(420, 50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex2f(500, -1);
    glVertex2f(-500, -1);
    glVertex2f(-500, -100);
    glVertex2f(500, -100);
    glEnd();

    glColor3f(1.000, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-420, 50);
    glVertex2f(-427, 50);
    glVertex2f(-427, 300);
    glVertex2f(-420, 300);
    glEnd();

 

    glBegin(GL_POLYGON);
    glColor3f(0.196, 0.804, 0.196);
    glVertex2f(-290, 50);
    glVertex2f(320, 50);
    glVertex2f(320, 90);
    glVertex2f(-290, 90);
    glEnd();




    glBegin(GL_POLYGON);
    glColor3f(0.196, 0.804, 0.196);
    glVertex2f(-220, 90);
    glVertex2f(290, 90);
    glVertex2f(290, 120);
    glVertex2f(-220, 120);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.933, 0.510, 0.933);
    glVertex2f(-180, 120);
    glVertex2f(250, 120);
    glVertex2f(250, 150);
    glVertex2f(-180, 150);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.941, 0.902, 0.549);
    glVertex2f(-150, 150);
    glVertex2f(-100, 150);
    glVertex2f(-100, 220);
    glVertex2f(-150, 220);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.941, 0.902, 0.549);
    glVertex2f(-10, 150);
    glVertex2f(40, 150);
    glVertex2f(40, 220);
    glVertex2f(-10, 220);
    glEnd();
  
    glBegin(GL_POLYGON);
    glColor3f(0.941, 0.902, 0.549);
    glVertex2f(130, 150);
    glVertex2f(180, 150);
    glVertex2f(180, 220);
    glVertex2f(130, 220);
    glEnd();

    glColor3f(1,1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(-420, 280);
    glVertex2f(-420, 230);
    glVertex2f(-270, 230);
    glVertex2f(-270, 280);
    glEnd();


    
    glColor3f(1.000, 0.000, 0.000);
    float x1, y1, x2, y2;
    float angle;
    double radius = 22;

    x1 = -360, y1 = 255;
    glColor3f(1.000, 0.000, 0.000);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2)
    {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();
  

    glColor3f(0.941, 0.902, 0.549);
 
    radius = 40;

    x1 = 450, y1 = 250;
    glColor3f(0.941, 0.902, 0.549);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2)
    {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();
 



  
    glColor3f(0.000, 0.000, 0.000);

    radius = 40;

    x1 = 430, y1 = 270;
    glColor3f(0.000, 0.000, 0.000);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2)
    {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();
 


    glColor3f(1.000, 1.000, 1.000);

    radius = 40;

    x1 = 450, y1 = -32; 
    glColor3f(1.000, 1.000, 1.000);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2)
    {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();
 


    glColor3f(1.000, 1.000, 1.000);

    radius = 40;

    x1 = 420, y1 = -32; 
    glColor3f(1.000, 1.000, 1.000);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2)
    {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();
 


    glColor3f(1.000, 1.000, 1.000);
  
    radius = 40; 

    x1 = 380, y1 = -32; 
    glColor3f(1.000, 1.000, 1.000);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2)
    {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();



    glColor3f(1.000, 1.000, 1.000);

    radius = 40; 

    x1 = 320, y1 = -32;
    glColor3f(1.000, 1.000, 1.000);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2)
    {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();



    glColor3f(1.000, 1.000, 1.000);

    radius = 40; 

    x1 = 250, y1 = -32;
    glColor3f(1.000, 1.000, 1.000);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2)
    {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();
 


    glColor3f(1.000, 1.000, 1.000);
    radius = 40;

    x1 = 150, y1 = -32; 
    glColor3f(1.000, 1.000, 1.000);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2)
    {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();



    glColor3f(1.000, 1.000, 1.000);

    radius = 40; 

    x1 = 110, y1 = -32; 
    glColor3f(1.000, 1.000, 1.000);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2)
    {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();



    glColor3f(1.000, 1.000, 1.000);
 
    radius = 40;

    x1 = 90, y1 = -32; 
    glColor3f(1.000, 1.000, 1.000);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2)
    {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();
  

    glColor3f(1.000, 1.000, 1.000);

    radius = 40; 

    x1 = 20, y1 = -32; 
    glColor3f(1.000, 1.000, 1.000);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2)
    {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();

    glColor3f(1.000, 1.000, 1.000);

    radius = 40; 

    x1 = -50, y1 = -32; 
    glColor3f(1.000, 1.000, 1.000);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2)
    {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();
 


    glColor3f(1.000, 1.000, 1.000);

    radius = 40; 

    x1 = -100, y1 = -32;
    glColor3f(1.000, 1.000, 1.000);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2)
    {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();



    glColor3f(1.000, 1.000, 1.000);

    radius = 40;

    x1 = -180, y1 = -32; 
    glColor3f(1.000, 1.000, 1.000);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2)
    {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();



    glColor3f(1.000, 1.000, 1.000);

    radius = 40; 

    x1 = -150, y1 = -32;
    glColor3f(1.000, 1.000, 1.000);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2)
    {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();


    glColor3f(1.000, 1.000, 1.000);

    radius = 40;

    x1 = -250, y1 = -32; 
    glColor3f(1.000, 1.000, 1.000);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2)
    {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();
  


    glColor3f(1.000, 1.000, 1.000);

    radius = 40; 

    x1 = -290, y1 = -32;
    glColor3f(1.000, 1.000, 1.000);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2)
    {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();
 


    glColor3f(1.000, 1.000, 1.000);
 
    radius = 40;

    x1 = -350, y1 = -32; 
    glColor3f(1.000, 1.000, 1.000);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);

    for (angle = 1.0f; angle < 361.0f; angle += 0.2)
    {
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();
    glFlush();


}
void init(void)
{

    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-500, 500, -300, 300, -50, 50);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("672016047");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
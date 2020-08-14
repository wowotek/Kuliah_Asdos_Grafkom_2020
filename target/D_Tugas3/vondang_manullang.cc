#include <GL/glut.h>

void myInit(void) {
    glClearColor(1.0, 1.0, 1.0, 1.0); //BACKGROUND PUTIH	
    glPointSize(8.0); //UKURAN TITIK
    glLineWidth(3.0); //UKURAN GARIS
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void myDisplay(void) {
    glClear(GL_COLOR_BUFFER_BIT); //CLEAR THE WINDOW

    glBegin(GL_LINE_LOOP); // BORDER LUAR
    glColor3f(0.00, 0.00, 0.00);
    glVertex2i(50, 50);
    glVertex2i(200, 50);
    glVertex2i(200, 150);
    glVertex2i(50, 150);
    glEnd();

    glBegin(GL_POINTS); // titik merah
    glColor3f(2.55, 0.00, 0.00);
    glVertex2i(125, 125);
    glVertex2i(150, 100);
    glVertex2i(125, 75);
    glVertex2i(100, 100);
    glEnd();

    glBegin(GL_LINES); // BORDER LUAR
    glColor3f(2.55, 2.55, 0.00);
    glVertex2i(50, 50);
    glVertex2i(150, 150);
    glColor3f(0.00, 0.00, 0.00);
    glVertex2i(100, 150);
    glVertex2i(200, 50);
    glEnd();
    
    glBegin(GL_LINES); // BORDER LUAR
    glColor3f(0.00, 2.55, 0.00);
    glVertex2i(100, 50);
    glVertex2i(200, 150);
     glColor3f(0.00, 0.00, 2.55);
    glVertex2i(50, 150);
    glVertex2i(150, 50);
    glEnd();

    glFlush(); // kirim output ke layar	
}

//STANDARD GLUT INITIALIZATION

int main(int argc, char**argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // set modus display
    glutInitWindowSize(640, 480); //UKURAN WINDOW
    glutInitWindowPosition(100, 150); //SET POSISI WINDOW
    glutCreateWindow("Grafkom"); //JUDUL WINDOW
    glutDisplayFunc(myDisplay);
    myInit();
    glutMainLoop();
}
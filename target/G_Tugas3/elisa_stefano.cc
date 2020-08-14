#include <stdlib.h>
#include <GL/glut.h>
#include<iostream>

void tugas(void) {
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    glEnd();
    glFlush();
}

void mouse(int x, int y) {
    system("cls");
    std::cout << "mousex : " << x << "| |" << "mousey :" << y << std::endl;
}

void keydown(unsigned char key, int x, int y) {
    if (key) {
        std::cout << key << " ";
    }
    glEnd();
    glFlush();
}

void keyup(unsigned char key, int x, int y) {
    if (key) {
        std::cout << key << " ";
        system("cls");
    }
    glEnd();
    glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(100, 100);
    glutInitWindowPosition(800, 100);
    glutCreateWindow("Tugas3");
    glutDisplayFunc(tugas);
    glutKeyboardFunc(keydown);
    glutKeyboardUpFunc(keyup);
    glutMotionFunc(mouse);
    glutMainLoop();
    return 0;
}
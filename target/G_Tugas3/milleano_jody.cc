#include <iostream>
#include <GL/glut.h> 

unsigned char arr[100];
int indeks = 0;

void Mouse_Motion(int x, int y) {
    system("cls");
    std::cerr << " Mouse X : " << x << " | Mouse Y : " << y << std::endl;
    glutPostRedisplay();
    printf("\n");
}

void KeyboardDownState(unsigned char key, int x, int y) {
    std::cout << key;
    key = arr[indeks];
    std::cout << arr[indeks];
    glutPostRedisplay();
    indeks++;;
}

void KeyboardSpecialDownState(int key, int x, int y) {

    std::cerr << key << " ";
    glutPostRedisplay();
}

void KeyboardUpState(unsigned char key, int x, int y) {

    //std::cerr << key << " ";
    //glutPostRedisplay();
}

void KeyboardSpecialUpState(int key, int x, int y) {

    //std::cerr << key << " ";
    //glutPostRedisplay();
}

void RenderProcess() {

}

int main(int argc, char* argv[]) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_DOUBLE);
    glutInitWindowSize(80, 80);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Milleano Jody Alfredo Walimema 672018141");
    glutDisplayFunc(RenderProcess);

    glutKeyboardFunc(KeyboardDownState);
    glutSpecialFunc(KeyboardSpecialDownState);
    glutKeyboardUpFunc(KeyboardUpState);
    glutSpecialUpFunc(KeyboardSpecialUpState);

    glutPassiveMotionFunc(Mouse_Motion);
    glutMainLoop();

    return (0);
}
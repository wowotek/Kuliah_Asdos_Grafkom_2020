#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>


void PohonKelapa(void){
   glClear(GL_COLOR_BUFFER_BIT);

   //Gradasi Langit Senja
   glBegin(GL_POLYGON);
      glColor3ub(255,165,0);    glVertex2f(3.0, 3.0);
      glColor3ub(255,255,255);   glVertex2f(-1.7, 3.0);
      glColor3ub(255,255,255);   glVertex2f(3.0, 1.0);
   glEnd();

   //Gradasi Langit
   glBegin(GL_POLYGON);
      glColor3ub(0,206,209);           glVertex2f(-3.0, 3.0);
      glColor3ub(255,165,0);           glVertex2f(3.0, 3.0);
      glColor3ub(255,165,0);           glVertex2f(3.0, 2.5);
      glColor3ub(255,228,181);         glVertex2f(-3.0, 2.5);
   glEnd();

   //Matahari ketika Senja
   glBegin(GL_POLYGON);
      glColor3ub(255,165,0);           glVertex2f(3.0, 3.0);
      glColor3ub(255,248,220);         glVertex2f(2.7, 3.0);
      glColor3ub(255,248,220);         glVertex2f(3.0, 2.7);
   glEnd();

   //Burung (dari kanan ke kiri)
   glLineWidth(0.5);
   glBegin(GL_LINE_STRIP);
      glColor3ub(139,139,131);         glVertex2f(-0.1, 2.3);
      glColor3ub(139,139,131);         glVertex2f(0.0, 2.4);
      glColor3ub(255,255,240);         glVertex2f(0.1, 2.3);
      glColor3ub(255,255,240);         glVertex2f(0.0, 2.3);
      glColor3ub(139,139,131);         glVertex2f(0.1, 2.4);
      glColor3ub(139,139,131);         glVertex2f(0.2, 2.3);
   glEnd();
   glBegin(GL_LINE_STRIP);
      glColor3ub(139,139,131);         glVertex2f(-1.7, 2.1);
      glColor3ub(139,139,131);         glVertex2f(-1.6, 2.2);
      glColor3ub(255,255,240);         glVertex2f(-1.5, 2.1);
      glColor3ub(255,255,240);         glVertex2f(-1.6, 2.1);
      glColor3ub(139,139,131);         glVertex2f(-1.5, 2.2);
      glColor3ub(139,139,131);         glVertex2f(-1.4, 2.1);
   glEnd();
   glBegin(GL_LINE_STRIP);
      glColor3ub(139,139,131);         glVertex2f(-1.9, 2.3);
      glColor3ub(139,139,131);         glVertex2f(-1.8, 2.4);
      glColor3ub(255,255,240);         glVertex2f(-1.7, 2.3);
      glColor3ub(255,255,240);         glVertex2f(-1.8, 2.3);
      glColor3ub(139,139,131);         glVertex2f(-1.7, 2.4);
      glColor3ub(139,139,131);         glVertex2f(-1.6, 2.3);
   glEnd();
   glBegin(GL_LINE_STRIP);
      glColor3ub(139,139,131);         glVertex2f(-2.4, 2.2);
      glColor3ub(139,139,131);         glVertex2f(-2.3, 2.3);
      glColor3ub(255,255,240);         glVertex2f(-2.2, 2.2);
      glColor3ub(255,255,240);         glVertex2f(-2.3, 2.2);
      glColor3ub(139,139,131);         glVertex2f(-2.2, 2.3);
      glColor3ub(139,139,131);         glVertex2f(-2.1, 2.2);
   glEnd();

   //Pesisir
   glBegin(GL_TRIANGLES);
      glColor3ub(255,255,255);   glVertex2f(-3.0, 0.0);
      glColor3ub(205,133,63);    glVertex2f(-3.0, -3.0);
      glColor3ub(255,255,255);   glVertex2f(3.0, -3.0);
   glEnd();

   //Air Laut
   glBegin(GL_TRIANGLES);
      glColor3ub(135,206,250);   glVertex2f(3.0, 0.3);
      glColor3ub(255,255,255);   glVertex2f(-2.8, 0.3);
      glColor3ub(255,255,255);   glVertex2f(3.0, -2.8);
   glEnd();

   //Garis Tepi Laut atas
   glLineWidth(1);
   glBegin(GL_LINE_STRIP);
      glColor3ub(139,137,137);   glVertex2f(-3.0, 0.3);
      glColor3ub(238,233,233);   glVertex2f(3.0, 0.3);
   glEnd();

    //Garis Tepi Laut
   glLineWidth(2);
   glBegin(GL_LINE_STRIP);
      glColor3ub(245,245,245);   glVertex2f(-3.0, 0.3);
      glColor3ub(238,233,233);   glVertex2f(-2.6, 0.2);
      glColor3ub(205,201,201);   glVertex2f(-1.8, -0.2);
      glColor3ub(0,0,0);         glVertex2f(-1.8, -0.3);
      glColor3ub(139,131,120);   glVertex2f(-1.9, -0.4);
      glColor3ub(0,0,0);         glVertex2f(-1.8, -0.5);
      glColor3ub(105,105,105);   glVertex2f(-1.2, -0.7);
      glColor3ub(105,105,105);   glVertex2f(-1.0, -0.8);
      glColor3ub(0,0,0);         glVertex2f(-0.1, -0.9);
      glColor3ub(0,0,0);         glVertex2f(0.0, -1.0);
      glColor3ub(105,105,105);   glVertex2f(-0.1, -1.1);
      glColor3ub(0,0,0);         glVertex2f(-0.3, -1.2);
      glColor3ub(0,0,0);         glVertex2f(-0.4, -1.3);
      glColor3ub(0,0,0);         glVertex2f(-0.1, -1.4);
      glColor3ub(105,105,105);   glVertex2f(1.0, -1.4);
      glColor3ub(0,0,0);         glVertex2f(1.1, -1.5);
      glColor3ub(105,105,105);   glVertex2f(1.0, -1.5);
      glColor3ub(0,0,0);         glVertex2f(0.8, -1.6);
      glColor3ub(105,105,105);   glVertex2f(1.1, -1.7);
      glColor3ub(0,0,0);         glVertex2f(1.6, -1.9);
      glColor3ub(0,0,0);         glVertex2f(3.0, -2.8);
   glEnd();

   //Batang Kelapa
   glBegin(GL_POLYGON);
      glColor3ub(0,0,0);         glVertex2f(-1.6, -1.7);
      glColor3ub(222, 133, 63);  glVertex2f(-1.5, -1.5);
      glColor3ub(210, 105, 30);  glVertex2f(-1.4, -1.2);
      glColor3ub(255, 222, 173); glVertex2f(-1.3, -0.9);
      glColor3ub(205,133,63);    glVertex2f(-1.2, -0.7);
      glColor3ub(205, 133, 63);  glVertex2f(-1.1, -0.5);
      glColor3ub(222, 184, 135); glVertex2f(-0.8, 0.0);
      glColor3ub(205,133,63);    glVertex2f(-0.6, 0.2);
      glColor3ub(210, 105, 30);  glVertex2f(-0.7, -0.1);
      glColor3ub(255, 222, 173); glVertex2f(-0.8, -0.3);
      glColor3ub(205,133,63);    glVertex2f(-0.9, -0.5);
      glColor3ub(160, 82, 45);   glVertex2f(-1.0, -0.7);
      glColor3ub(205, 133, 63);  glVertex2f(-1.1, -1.0);
      glColor3ub(210, 105, 30);  glVertex2f(-1.2, -1.4);
      glColor3ub(0,0,0);         glVertex2f(-1.1, -1.7);
   glEnd();

   //Daun Kelapa kanan bawah
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(-0.6, 0.2);
      glColor3ub(107,142,35);    glVertex2f(-0.4, 0.0);
      glColor3ub(107,142,35);    glVertex2f(-0.4, -0.1);
      glColor3ub(107,142,35);    glVertex2f(-0.5, -0.3);
      glColor3ub(154,205,50);    glVertex2f(-0.6, -0.5);
      glColor3ub(107,142,35);    glVertex2f(-0.8, -0.7);
      glColor3ub(154,205,50);    glVertex2f(-0.7, -0.5);
      glColor3ub(107,142,35);    glVertex2f(-0.8, -0.5);
      glColor3ub(124,252,0);     glVertex2f(-0.7, -0.1);
      glColor3ub(107,142,35);    glVertex2f(-0.5, 0.1);
   glEnd();

   //Daun Kelapa kanan bawah2
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(-0.6, 0.2);
      glColor3ub(107,142,35);    glVertex2f(-0.4, 0.3);
      glColor3ub(107,142,35);    glVertex2f(0.0, 0.2);
      glColor3ub(107,142,35);    glVertex2f(0.1, 0.0);
      glColor3ub(154,205,50);    glVertex2f(0.2, -0.3);
      glColor3ub(107,142,35);    glVertex2f(0.2, -0.4);
      glColor3ub(154,205,50);    glVertex2f(-0.1, -0.2);
      glColor3ub(107,142,35);    glVertex2f(0.0, -0.1);
      glColor3ub(124,252,0);     glVertex2f(-0.3, 0.0);
      glColor3ub(107,142,35);    glVertex2f(-0.2, 0.1);
   glEnd();


    //Daun Kelapa tengah
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(-0.6, 0.2);
      glColor3ub(124,252,0);     glVertex2f(-0.5, 0.5);
      glColor3ub(255,255,224);   glVertex2f(-0.4, 1.0);
      glColor3ub(173,255,47);    glVertex2f(-0.4, 0.5);
      glColor3ub(250,250,210);   glVertex2f(-0.1, 0.9);
      glColor3ub(173,255,47);    glVertex2f(-0.3, 0.4);
   glEnd();

   //Daun Kelapa kiri
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(-0.6, 0.2);
      glColor3ub(173,255,47);    glVertex2f(-0.8, 0.3);
      glColor3ub(255,255,224);   glVertex2f(-0.9, 0.3);
      glColor3ub(173,255,47);    glVertex2f(-1.1, 0.2);
      glColor3ub(173,255,47);    glVertex2f(-1.1, 0.0);
      glColor3ub(173,255,47);    glVertex2f(-1.2, -0.1);
      glColor3ub(107,142,35);    glVertex2f(-1.1, -0.3);
      glColor3ub(173,255,47);    glVertex2f(-1.3, -0.7);
      glColor3ub(173,255,47);    glVertex2f(-1.1, -0.3);
      glColor3ub(173,255,47);    glVertex2f(-1.0, -0.3);
      glColor3ub(107,142,35);    glVertex2f(-1.0, -0.1);
      glColor3ub(173,255,47);    glVertex2f(-0.9, -0.1);
      glColor3ub(107,142,35);    glVertex2f(-0.9, 0.1);
   glEnd();

   //Daun kiri2
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(-0.6, 0.2);
      glColor3ub(173,255,47);    glVertex2f(-0.7, 0.4);
      glColor3ub(255,255,224);   glVertex2f(-0.9, 0.5);
      glColor3ub(173,255,47);    glVertex2f(-1.0, 0.5);
      glColor3ub(173,255,47);    glVertex2f(-1.3, 0.5);
      glColor3ub(173,255,47);    glVertex2f(-1.4, 0.5);
      glColor3ub(107,142,35);    glVertex2f(-1.5, 0.3);
      glColor3ub(173,255,47);    glVertex2f(-1.3, 0.4);
      glColor3ub(173,255,47);    glVertex2f(-1.2, 0.5);
      glColor3ub(173,255,47);    glVertex2f(-1.0, 0.6);
      glColor3ub(107,142,35);    glVertex2f(-1.0, 0.5);
      glColor3ub(173,255,47);    glVertex2f(-0.8, 0.5);
      glColor3ub(107,142,35);    glVertex2f(-0.8, 0.4);
      glColor3ub(107,142,35);    glVertex2f(-0.6, 0.2);
   glEnd();

   //Tikar
   glBegin(GL_POLYGON);
      glColor3ub(238,233,233);   glVertex2f(-2.6, -0.8);
      glColor3ub(85,107,47);     glVertex2f(-2.0, -0.8);
      glColor3ub(85,107,47);     glVertex2f(-2.2, -1.0);
      glColor3ub(85,107,47);     glVertex2f(-2.8, -1.0);
   glEnd();

    //Kerangka Tikar
   glLineWidth(1);
   glBegin(GL_LINE_STRIP);
      glColor3ub(0,0,0);         glVertex2f(-2.0, -0.8);
      glColor3ub(0,0,0);         glVertex2f(-2.2, -1.0);
      glColor3ub(0,0,0);         glVertex2f(-2.8, -1.0);
   glEnd();

   //Tiang Payung
   glLineWidth(3);
   glBegin(GL_LINES);
      glColor3ub(0,0,0);         glVertex2f(-2.7, -0.9);
      glColor3ub(0,0,0);         glVertex2f(-2.6, -0.4);
   glEnd();

   //Payung
   glBegin(GL_TRIANGLE_FAN);
      glColor3ub(176,224,230);   glVertex2f(-2.6, -0.2);
      glColor3ub(25,25,112);     glVertex2f(-2.9, -0.4);
      glColor3ub(255,0,0);       glVertex2f(-2.8, -0.5);
      glColor3ub(34,139,34);     glVertex2f(-2.6, -0.6);
      glColor3ub(25,25,112);     glVertex2f(-2.5, -0.6);
      glColor3ub(255,69,0);      glVertex2f(-2.3, -0.5);
      glColor3ub(148,0,211);     glVertex2f(-2.2, -0.4);
   glEnd();

   //Kerangka Payung
   glLineWidth(1);
   glBegin(GL_LINE_STRIP);
      glColor3ub(0,0,0);         glVertex2f(-2.6, -0.2);
      glColor3ub(0,0,0);         glVertex2f(-2.9, -0.4);
      glColor3ub(0,0,0);         glVertex2f(-2.8, -0.5);
      glColor3ub(0,0,0);         glVertex2f(-2.6, -0.6);
      glColor3ub(0,0,0);         glVertex2f(-2.5, -0.6);
      glColor3ub(0,0,0);         glVertex2f(-2.3, -0.5);
      glColor3ub(0,0,0);         glVertex2f(-2.2, -0.4);
   glEnd();

   //Gunung kanan
   glBegin(GL_TRIANGLES);
      glColor3ub(112,138,144);   glVertex2f(1.6, 0.2);
      glColor3ub(112,138,144);   glVertex2f(3.0, 0.2);
      glColor3ub(0,0,128);       glVertex2f(2.3, 1.0);
   glEnd();

   //Kerangka Gunung kanan
   glLineWidth(1);
   glBegin(GL_LINE_LOOP);
      glColor3ub(0,0,0);         glVertex2f(1.6, 0.2);
      glColor3ub(0,0,0);         glVertex2f(3.0, 0.2);
      glColor3ub(0,0,0);         glVertex2f(2.3, 1.0);
   glEnd();

   //Gunung kiri
   glBegin(GL_TRIANGLES);
      glColor3ub(112,138,144);   glVertex2f(0.6, 0.2);
      glColor3ub(112,138,144);   glVertex2f(2.0, 0.2);
      glColor3ub(0,0,128);       glVertex2f(1.3, 1.0);
   glEnd();

   //Kerangka Gunung kiri
   glLineWidth(1);
   glBegin(GL_LINE_LOOP);
      glColor3ub(0,0,0);         glVertex2f(0.6, 0.2);
      glColor3ub(0,0,0);         glVertex2f(2.0, 0.2);
      glColor3ub(0,0,0);         glVertex2f(1.3, 1.0);
   glEnd();

   //Area bawah Gunung
   glBegin(GL_TRIANGLES);
      glColor3ub(0,0,0);         glVertex2f(0.5, 0.2);
      glColor3ub(0,0,0);         glVertex2f(3.0, 0.2);
      glColor3ub(5,105,105);     glVertex2f(2.9, 0.3);
   glEnd();

   //Perahu
   glBegin(GL_POLYGON);
      glColor3ub(160,82,45);     glVertex2f(-0.1, -2.2);
      glColor3ub(160,82,45);     glVertex2f(-0.2, -2.3);
      glColor3ub(205,133,63);    glVertex2f(-0.1, -2.5);
      glColor3ub(160,82,45);     glVertex2f(0.0, -2.6);
      glColor3ub(205,133,63);    glVertex2f(0.3, -2.7);
      glColor3ub(160,82,45);     glVertex2f(1.4, -2.7);
      glColor3ub(139,69,19);     glVertex2f(1.7, -2.6);
      glColor3ub(160,82,45);     glVertex2f(1.8, -2.5);
      glColor3ub(255,255,255);   glVertex2f(1.9, -2.3);
      glColor3ub(255,255,255);   glVertex2f(1.8, -2.2);
      glColor3ub(255,255,255);   glVertex2f(0.9, -2.1);
   glEnd();
   glLineWidth(2);
   glBegin(GL_LINE_STRIP); //Kerangka Perahu
      glColor3ub(0,0,0);         glVertex2f(1.9, -2.3);
      glColor3ub(0,0,0);         glVertex2f(1.7, -2.4);
      glColor3ub(0,0,0);         glVertex2f(-0.1, -2.4);
      glColor3ub(165,42,42);     glVertex2f(-0.2, -2.3);
      glColor3ub(165,42,42);     glVertex2f(-0.1, -2.5);
      glColor3ub(0,0,0);         glVertex2f(0.0, -2.6);
      glColor3ub(0,0,0);         glVertex2f(0.3, -2.7);
      glColor3ub(0,0,0);         glVertex2f(1.4, -2.7);
      glColor3ub(0,0,0);         glVertex2f(1.7, -2.6);
      glColor3ub(0,0,0);         glVertex2f(1.8, -2.5);
      glColor3ub(0,0,0);         glVertex2f(1.9, -2.3);
      glColor3ub(165,42,42);     glVertex2f(1.8, -2.2);
      glColor3ub(165,42,42);     glVertex2f(0.9, -2.1);
      glColor3ub(165,42,42);     glVertex2f(-0.1, -2.2);
   glEnd();
   glLineWidth(9);
   glBegin(GL_LINE_STRIP);
      glColor3ub(139,69,19);     glVertex2f(1.2, -2.6);
      glColor3ub(139,69,19);     glVertex2f(1.5, -2.8);
      glColor3ub(0,0,0);         glVertex2f(1.6, -2.9);
   glEnd();
   glBegin(GL_LINE_STRIP);
      glColor3ub(139,69,19);     glVertex2f(0.4, -2.6);
      glColor3ub(139,69,19);     glVertex2f(0.7, -2.8);
      glColor3ub(0,0,0);         glVertex2f(0.8, -2.9);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(139,69,19);     glVertex2f(0.4, -2.9);
      glColor3ub(205,133,63);    glVertex2f(1.8, -2.9);
   glEnd();
   glLineWidth(2);//kerangka
   glBegin(GL_LINES);
      glColor3ub(0,0,0);         glVertex2f(0.4, -2.9);
      glColor3ub(0,0,0);         glVertex2f(1.8, -2.9);
   glEnd();

  

   glColor3f(1, 0, 0);  //memberi warna merah pada obyek

  
   

   glBegin(GL_POLYGON);//badan kapal
   glColor3f(1, 0, 0); //warna putih
   glVertex2f(-0.6, -0.8);
   glVertex2f(0.6, -0.8);
   glVertex2f(0.8, -0.4);
   glVertex2f(-0.8, -0.4);
   glEnd();
   

   glBegin(GL_POLYGON);//atas kapal
   glColor3f(0, 1, 0);
   glVertex2f(-0.4, -0.4);
   glVertex2f(0.6, -0.4);
   glVertex2f(0.6, -0.1);
   glVertex2f(-0.2, -0.1);
   glEnd();

   glBegin(GL_POLYGON);//jendela kapal
   glColor3f(0, 0, 0);
   glVertex2f(-0.2, -0.3);
   glVertex2f(-0.1, -0.3);
   glVertex2f(-0.1, -0.2);
   glVertex2f(-0.2, -0.2);
   glEnd();
   glBegin(GL_POLYGON);//jendela kapal 
   glVertex2f(0, -0.3);
   glVertex2f(0.1, -0.3);
   glVertex2f(0.1, -0.2);
   glVertex2f(0, -0.2);
   glEnd();
   glBegin(GL_POLYGON);//jendela kapal
   glVertex2f(0.2, -0.3);
   glVertex2f(0.3, -0.3);
   glVertex2f(0.3, -0.2);
   glVertex2f(0.2, -0.2);
   glEnd();
   glBegin(GL_POLYGON);//jendela kapal
   glVertex2f(0.4, -0.3);
   glVertex2f(0.5, -0.3);
   glVertex2f(0.5, -0.2);
   glVertex2f(0.4, -0.2);
   glEnd();

  
       glBegin(GL_POLYGON);//tiang kapal
   glColor3f(1, 1, 1);
   glVertex2f(0.1, -0.1);
   glVertex2f(0.12, -0.1);
   glVertex2f(0.12, 0.4);
   glVertex2f(0.1, 0.4);
   glEnd();

   glBegin(GL_POLYGON);//bendera kapal
   glColor3f(1, 1, 1);
   glVertex2f(0.1, 0.2);
   glVertex2f(0.4, 0.2);
   glVertex2f(0.4, 0.3);
   glVertex2f(0.1, 0.3);
   glEnd();

   glBegin(GL_POLYGON);//bendera kapal
   glColor3f(1, 0, 0);
   glVertex2f(0.1, 0.3);
   glVertex2f(0.4, 0.3);
   glVertex2f(0.4, 0.4);
   glVertex2f(0.1, 0.4);
   glEnd();

   glFlush();
   glutSwapBuffers();
 



   
}

void display(void){
   glClear (GL_COLOR_BUFFER_BIT);
   PohonKelapa();
   glEnd();
   glFlush();
}

int main(int argc, char *argv[]){
    glutInit(&argc,argv);
    glutInitWindowSize(640,480);                // ukuran jendela
    glutInitWindowPosition(640,100);             // sumbu x : kiri ke kanan // sumbu y : atas ke bawah
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); // mode tampilan warna RGB dan banyak frame
    glutCreateWindow("pemandangan sorehari");
    gluOrtho2D(-3, 3., -3, 3);                   // Plot batas koodinat x dan y (dari -1 sd 1)
 glClearColor(1.0, 1.0, 1.0, 1.0);     // warna background window R G B A
    glutDisplayFunc(display);                    // fungsi untuk menampilkan display
    glutMainLoop();                              // fungsi untuk mengulangi program utama secara terus menerus
    return 0;
}
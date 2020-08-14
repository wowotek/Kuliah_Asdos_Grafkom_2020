#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>

const double PI = 3.141592653589793;
void Draw(void);
int i,radius,jumlah_titik,x_tengah,y_tengah;

void bintang () {
	glBegin (GL_POLYGON) ;
	glVertex2f (77.,70.) ;
	glVertex2f (80.,146.) ;
	glVertex2f (99.,90.) ;
	glVertex2f (157.,90.) ;
	glVertex2f (110.,55.) ;
	glVertex2f (128.,1.) ;
	glVertex2f (80.,34.) ;
	glVertex2f (32.,1.) ;
	glVertex2f (54.,55.) ;
	glVertex2f (3.,90.) ;
	glVertex2f (63.,90.) ;
	glVertex2f (80.,146.) ;
	glEnd ();
}

void bunder(){
glBegin(GL_POLYGON);

	radius=13500;
	jumlah_titik = 100;
	x_tengah = 50;
	y_tengah = 50;

	for (i=0;i<=360;i++){
		float sudut=i*(2*PI/jumlah_titik);
		float x=x_tengah+radius*cos(sudut);
		float y=y_tengah+radius*sin(sudut);
		glVertex2f(x/100,y/100);
	}
	glEnd();
}

void segi1 () {
	glBegin (GL_QUADS) ;
    glColor3f(0.4,0.4,0.4);
	glVertex2f (150,100) ; //garis bawahan,depan garis kiri
	glVertex2f (450,100) ; //garis bawahan
	glVertex2f (450,200) ; //garis pucukan,depan garis kanan
	glVertex2f (150,200) ;//garis pucukan
	glEnd ();

}
void segi2 () {
	glBegin (GL_QUADS) ;
    glColor3f(0.5,0.5,0.5);
	glVertex2f (150,200) ; //garis bawahan,depan garis kiri
	glVertex2f (450,200) ; //garis bawahan
	glVertex2f (450,250) ; //garis pucukan,depan garis kanan
	glVertex2f (200,250) ;//garis pucukan
	glEnd ();
}
void segikaca () {
	glBegin (GL_QUADS) ;
    glColor3f(1,1,1);
	glVertex2f (155,205) ; //garis bawahan,depan garis kiri
	glVertex2f (250,205) ; //garis bawahan
	glVertex2f (250,248) ; //garis pucukan,depan garis kanan
	glVertex2f (199,248) ;//garis pucukan
	glEnd ();
}
void segikaca1 () {
	glBegin (GL_QUADS) ;
    glColor3f(1,1,1);
	glVertex2f (260,205) ; //garis bawahan,depan garis kiri
	glVertex2f (350,205) ; //garis bawahan
	glVertex2f (350,248) ; //garis pucukan,depan garis kanan
	glVertex2f (260,248) ;//garis pucukan
	glEnd ();
}
void segi3 () {
	glBegin (GL_QUADS) ;
    glColor3f(0.6,0.6,0.6);
	glVertex2f (200,250) ; //garis bawahan,depan garis kiri
	glVertex2f (400,250) ; //garis bawahan
	glVertex2f (400,300) ; //garis pucukan,depan garis kanan
	glVertex2f (200,300) ;//garis pucukan
	glEnd ();
}
void tiang () {
	glBegin (GL_QUADS) ;
    glColor3f(0.5,0,0);
	glVertex2f (295,301) ; //garis bawahan,depan garis kiri
	glVertex2f (300,301) ; //garis bawahan
	glVertex2f (300,350) ; //garis pucukan,depan garis kanan
	glVertex2f (295,350) ;//garis pucukan
	glEnd ();
}
void benderamerah () {
	glBegin (GL_QUADS) ;
    glColor3f(1,0,0);
	glVertex2f (301,335) ; //garis bawahan,depan garis kiri
	glVertex2f (350,335) ; //garis bawahan
	glVertex2f (350,350) ; //garis pucukan,depan garis kanan
	glVertex2f (301,350) ;//garis pucukan
	glEnd ();
}
void benderaputih () {
	glBegin (GL_QUADS) ;
    glColor3f(1,1,1);
	glVertex2f (301,320) ; //garis bawahan,depan garis kiri
	glVertex2f (350,320) ; //garis bawahan
	glVertex2f (350,335) ; //garis pucukan,depan garis kanan
	glVertex2f (301,335) ;//garis pucukan
	glEnd ();
}
void laut () {
	glBegin (GL_QUADS) ;
    glColor3f(0,0,1);
	glVertex2f (0,0) ; //garis bawahan,depan garis kiri
	glVertex2f (640,0) ; //garis bawahan
	glVertex2f (640,150) ; //garis pucukan,depan garis kanan
	glVertex2f (0,150) ;//garis pucukan
	glEnd ();
}
void tiga1 () {
	glBegin (GL_POLYGON) ;
    glColor3f(0.4,0.4,0.4);
	glVertex2f (50.,200.) ; //garis bawah terakhir kiri
	glVertex2f (150.,100.) ; //garis atas ,garis pucukan terakhir
	glVertex2f (150.,200.) ;//garis bawah terakhir kanan
	glEnd ();
}
void tiga2 () {
	glBegin (GL_POLYGON) ;
    glColor3f(0.4,0.4,0.4);
	glVertex2f (450.,200.) ; //garis bawah terakhir kiri
	glVertex2f (450.,100.) ; //garis atas ,garis pucukan terakhir
	glVertex2f (552.,200.) ;//garis bawah terakhir kanan
	glEnd ();
}
void gunung () {
	glBegin (GL_POLYGON) ;
    glColor3f(0,1,0);
	glVertex2f (250.,150.) ; //garis bawah terakhir kiri
	glVertex2f (450.,300.) ; //garis atas ,garis pucukan terakhir
	glVertex2f (650.,150.) ;//garis bawah terakhir kanan
	glEnd ();
}

void gunung2 () {
	glBegin (GL_POLYGON) ;
    glColor3f(0,1,0);
	glVertex2f (450.,150.) ; //garis bawah terakhir kiri
	glVertex2f (600.,300.) ; //garis atas ,garis pucukan terakhir
	glVertex2f (750.,150.) ;//garis bawah terakhir kanan
	glEnd ();
}

void lemah () {
	glBegin (GL_QUADS) ;
    glColor3f(0,1,0);
	glVertex2f (-10,150) ; //garis bawahan,depan garis kiri
	glVertex2f (450,150) ; //garis bawahan
	glVertex2f (450,170) ; //garis pucukan,depan garis kanan
	glVertex2f (-10,170) ;//garis pucukan
	glEnd ();

}

void iwak1 () {
	glBegin (GL_POLYGON) ;
    glColor3f(1,0,0);
	glVertex2f (50.,40.) ; //garis bawah terakhir kiri
	glVertex2f (100.,10.) ; //garis atas ,garis pucukan terakhir
	glVertex2f (100.,90.) ;//garis bawah terakhir kanan
	glEnd ();
}

void iwak2 () {
	glBegin (GL_POLYGON) ;
    glColor3f(1,0,0);
	glVertex2f (200.,50.) ; //garis bawah terakhir kiri
	glVertex2f (100.,10.) ; //garis atas ,garis pucukan terakhir
	glVertex2f (100.,90.) ;//garis bawah terakhir kanan
	glEnd ();
}
void iwak3 () {
	glBegin (GL_POLYGON) ;
    glColor3f(1,0,0);
	glVertex2f (195.,50.) ; //garis bawah terakhir kiri
	glVertex2f (250.,20.) ; //garis atas ,garis pucukan terakhir
	glVertex2f (250.,80.) ;//garis bawah terakhir kanan
	glEnd ();
}
void render (){
    glClear(GL_COLOR_BUFFER_BIT);
    laut ();
    gunung ();
    gunung2 ();
    lemah ();
    iwak1 ();
    iwak2 ();
    iwak3 ();
    segi1 ();
    segi2 ();
    segi3 ();
    tiang ();
    benderamerah ();
    benderaputih ();
    tiga1 ();
    tiga2 ();
    segikaca ();
    segikaca1 ();
    glColor3f (0.9,0.9,0.9);
    glTranslatef(120,400,0);
    glScalef(0.5,0.5,0.5);
    bunder ();
    glColor3f (1,1,1);
    glTranslatef(750,-50,0);
    glScalef(0.3,0.3,0.3);
    bunder ();
    glTranslatef(200,-80,0);
    bunder ();
    glTranslatef(200,-80,0);
    bunder ();
    glTranslatef(-200,200,0);
    glScalef (1.5,1.5,1.5);
    bunder ();
    glTranslatef(200,-80,0);
    glScalef (0.5,0.5,0.5);
    bunder ();
    glTranslatef(-120,205,0);
    bunder ();
    glColor3f (1,1,0) ; //bintang
	glTranslatef (-2000,10,0) ;
	glScalef (4,4,4);
	bintang ();
    glFlush ();

}

int main (int argc, char **argv)
	{
	glutInit (&argc , argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_DEPTH | GLUT_RGBA);
	glutInitWindowPosition (100,100);
	glutInitWindowSize (640,480) ; //ukuran dari jendela
	glutCreateWindow ("TUGAS Grafkom 672018219") ;
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
	glutDisplayFunc (render) ; //yang mau dirender
	glutMainLoop () ;
	}
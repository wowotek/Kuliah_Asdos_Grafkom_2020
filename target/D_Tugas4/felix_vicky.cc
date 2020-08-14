#include <iostream>
#include <GL/glut.h>

#include <math.h>

void myInit(void){
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glPointSize(5.0);
	glLineWidth(2.5);
	gluOrtho2D(-5.0, 5.0, -5.0, 5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
}


float scale = 1.0f;
float minscale =1.00f;
float maxscale = 1.5f;
float rotate = 0.0f;

void myDisplay(void){
	glClear(GL_COLOR_BUFFER_BIT);
	
	glRotatef(1.0f, 0.0f, 0.0f, 1.0f); //berputar 1 derajat secara counter clockwise setiap satuan waktu pada glut LOOP
	if (rotate == 360.0f){
		rotate =0.0f;
	};
	rotate+=1;
	
	if((1<=rotate)&&(rotate<=30)){
		scale = scale + ((1.0f/60.0f)*(maxscale-minscale));
	}else if((31<=rotate)&&(rotate<=60)){
		scale = scale - ((1.0f/60.0f)*(maxscale-minscale));
	}else if((61<=rotate)&&(rotate<=90)){
		scale = scale + ((1.0f/60.0f)*(maxscale-minscale));
	}else if((91<=rotate)&&(rotate<=120)){
		scale = scale - ((1.0f/60.0f)*(maxscale-minscale));
	}else if((121<=rotate)&&(rotate<=150)){
		scale = scale + ((1.0f/60.0f)*(maxscale-minscale));
	}else if((151<=rotate)&&(rotate<=180)){
		scale = scale - ((1.0f/60.0f)*(maxscale-minscale));
	}else if((181<=rotate)&&(rotate<=210)){
		scale = scale + ((1.0f/60.0f)*(maxscale-minscale));
	}else if((211<=rotate)&&(rotate<=240)){
		scale = scale - ((1.0f/60.0f)*(maxscale-minscale));
	}else if((241<=rotate)&&(rotate<=270)){
		scale = scale + ((1.0f/60.0f)*(maxscale-minscale));
	}else if((271<=rotate)&&(rotate<=300)){
		scale = scale - ((1.0f/60.0f)*(maxscale-minscale));
	}else if((301<=rotate)&&(rotate<=330)){
		scale = scale + ((1.0f/60.0f)*(maxscale-minscale));
	}else if((331<=rotate)&&(rotate<=360)){
		scale = scale - ((1.0f/60.0f)*(maxscale-minscale));
	};
	
	glPushMatrix();// supaya translasi dan scaling berdasarkan pada objek saja
	glScalef(scale,scale,0);
	glTranslatef(1.0f,1.0f,0); //translasi ditengah layar (memberi titik tengah objek pada titik rotasi viewport)
	//bagian yang tidak boleh di rubah
		glColor3f(1, 0, 0);
		glBegin(GL_POLYGON);
		glVertex2f(-9, -4);
		glVertex2f(-1, -4);
		glVertex2f(-1, -6);
		glVertex2f(-9, -6);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(-6, -1);
		glVertex2f(-4, -1);
		glVertex2f(-4, -9);
		glVertex2f(-6, -9);
		glEnd();
	/////////////////////////////////////
	glPopMatrix();


	glFlush();
	glutSwapBuffers();
}

void waktuloop(int) {
	glutPostRedisplay(); //redisplay pada glutDisplayFunc(Mydisplay);
	glutTimerFunc(600/60, waktuloop, 0);

};

int main(int argc, char**argv){
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(480,480);
glutInitWindowPosition(100,150);
glutCreateWindow("Felix Vicky Lugas Dewangga - 672018159");
myInit();
glutDisplayFunc(myDisplay);
glutTimerFunc(0, waktuloop, 0);
glutMainLoop();
return 0;
}

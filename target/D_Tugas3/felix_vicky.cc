#include <GL/glut.h>
void Inisialisasi(void){
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(10.0);
	glLineWidth(5.0f);
	gluOrtho2D(0.0, 300.0, 0.0, 300.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
}
float cl(int x){ //ubah warna int ke float
	float hasil = x/255;
	return hasil;
};
void Display(void){
	
	glClear(GL_COLOR_BUFFER_BIT);
	float garis[4][2][2] = {
		                      { 
								  {50,50}, {150,200} //koordinat titik Ax1,Ay1 dan Bx1,By1
							  },
							  { 
								  {50,200}, {150,50} //koordinat titik Ax2,Ay2 dan Bx2,By2
							  },
							  { 
								  {100,50}, {200,200} //koordinat titik Ax3,Ay3 dan Bx3,By3
							  },
							  { 
								  {100,200}, {200,50} //koordinat titik Ax4,Ay4 dan Bx4,By4
							  }
	                       };
	int kodewarnagaris[4][3] = {   //R  ,G   ,B
	                                  {255,255 ,0  },//warna garis Gab1
		                              {0  ,0   ,255},//warna garis Gab2
									  {0  ,255 ,0},  //warna garis Gab3
									  {0  ,0   ,0}   //warna garis Gab3
	                              };
	int Xminimum = garis[0][0][0], Xmaximum=garis[0][0][0], Yminimum=garis[0][0][1],Ymaximum=garis[0][0][1]; //Untuk membuat garis pembatas /cover
	int x,y,z; //pembentuk iterasi
	for(x=0;x<4;x++){
		for(y=0;y<2;y++){
			if(Xminimum>garis[x][y][0]){
				Xminimum = garis[x][y][0];
			};
			if(Xmaximum<garis[x][y][0]){
				Xmaximum = garis[x][y][0];
			};
			if(Yminimum>garis[x][y][1]){
				Yminimum = garis[x][y][1];
			};
			if(Ymaximum<garis[x][y][1]){
				Ymaximum = garis[x][y][1];
			};
		}
	}
	


	int a = 4; //banyak garis
	int b = 2; //titik penghubung garis
	for(x=0;x<a;x++){
		glBegin(GL_LINES);
		glColor3f(cl(kodewarnagaris[x][0]), cl(kodewarnagaris[x][1]),cl(kodewarnagaris[x][2]));
		for(y=0;y<2;y++){
			glVertex2f(garis[x][y][0],garis[x][y][1]);// 0 = koordinat x dan 1 = koordinat y
		}
		glEnd();
	}

	float M1,M2; // mencari M perpotongan garis
	float C1,C2; // mencari C perpotongan garis
	float titikpotongX,titikpotongY1,titikpotongY2;
	for(x=0;x<4-1;x++){ //fungsi iterasi digunakan untuk mencari semua garis yang dapat berpotongan
		for(y=x+1;y<4;y++){
			M1 = (garis[x][1][1] - garis[x][0][1]) / (garis[x][1][0] - garis[x][0][0]);//gradien garis pertama
			M2 = (garis[y][1][1] - garis[y][0][1]) / (garis[y][1][0] - garis[y][0][0]);//gradien garis kedua
			C1 = garis[x][0][1]-(garis[x][0][0]*M1);
			C2 = garis[y][0][1]-(garis[y][0][0]*M2);
			if(M1 - M2 ==0){
			}else{
				titikpotongX = (C2 - C1) / (M1 - M2);
				titikpotongY1 = (M1*titikpotongX)+C1;
				titikpotongY2 = (M2*titikpotongX)+C2;
				if(titikpotongY1==titikpotongY2){//memberi titik potong apabila syarat terpenuhi
					glBegin(GL_POINTS);
					glColor3f(cl(255), cl(0), cl(0));
					glVertex2f(titikpotongX,titikpotongY2);
					glEnd();
				}
			}
		}
	}

	

	
	glBegin(GL_LINE_LOOP); //digunakan untuk membuat cover kotak / border
		glColor3f(cl(0),cl(0),cl(0));
		glVertex2f(Xminimum,Yminimum);
		glVertex2f(Xminimum,Ymaximum);

		glVertex2f(Xminimum,Ymaximum);
		glVertex2f(Xmaximum,Ymaximum);

		glVertex2f(Xmaximum,Ymaximum);
		glVertex2f(Xmaximum,Yminimum);

		glVertex2f(Xmaximum,Yminimum);
		glVertex2f(Xminimum,Yminimum);
	glEnd();

	
	glFlush();
}

int main(int argc, char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(653, 438);
	glutInitWindowPosition(100,50);
	glutCreateWindow("Felix Vicky Lugas Dewangga - 672018159");
	glutDisplayFunc(Display);
	Inisialisasi();
	glutMainLoop();
}
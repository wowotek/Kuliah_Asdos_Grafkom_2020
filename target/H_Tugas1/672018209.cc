#include <iostream>
#include <stdlib.h>
#include <GL/freeglut.h>

/*
float r, g, b, x, y;
bool check = true;

void mouse(int button, int state, int xx, int yy) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_UP) { //membuat objek titik-tittk
		std::cout << "KLIK KIRI" << " = anda menekan tombol " << GLUT_LEFT_BUTTON << std::endl;
		check = true;
		x = xx;
		y = 480 - yy;

		r = (rand() % 9);
		g = (rand() % 9) / 8;
		b = (rand());
	}

	else if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) { //menghapus objek titik-titik
		std::cout << "KLIK KANAN" << " = anda menekan tombol " << GLUT_RIGHT_BUTTON << std::endl;
		check = false;
		glClearColor(0.0, 0.0, 0.0, 0.0);
		glClear(GL_COLOR_BUFFER_BIT);

	}
	glutPostRedisplay();
}

void keyboard(unsigned char KEY, int x, int y) {

	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	std::cout << KEY << " = anda menekan tombol " << KEY << std::endl;

	if (KEY == 'a' || KEY == 'A') {
		//kotak kiri
		glColor3f(0.0, 1.0, 1.0);
		glBegin(GL_POLYGON);
		glVertex2d(149.0, 199.0);
		glVertex2d(249.0, 199.0);
		glVertex2d(249.0, 299.0);
		glVertex2d(149.0, 299.0);
		glEnd();

		//segitga tengah
		glColor3f(1.0, 1.0, 0.0);
		glBegin(GL_TRIANGLES);
		glVertex2d(299.0, 199.0);
		glVertex2d(399.0, 199.0);
		glVertex2d(349.0, 299.0);
		glEnd();

		//kotak kanan
		glColor3f(1.0, 0.0, 1.0);
		glBegin(GL_POLYGON);
		glVertex2d(449.0, 199.0);
		glVertex2d(549.0, 199.0);
		glVertex2d(549.0, 299.0);
		glVertex2d(449.0, 299.0);
		glEnd();
		glFlush();
	}

	else if (KEY == 's' || KEY == 'S') {
		//kotak kiri
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_POLYGON);
		glVertex2d(149.0, 199.0);
		glVertex2d(249.0, 199.0);
		glVertex2d(249.0, 299.0);
		glVertex2d(149.0, 299.0);
		glEnd();

		//segitga tengah
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_TRIANGLES);
		glVertex2d(299.0, 199.0);
		glVertex2d(399.0, 199.0);
		glVertex2d(349.0, 299.0);
		glEnd();

		//kotak kanan
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_POLYGON);
		glVertex2d(449.0, 199.0);
		glVertex2d(549.0, 199.0);
		glVertex2d(549.0, 299.0);
		glVertex2d(449.0, 299.0);
		glEnd();
		glFlush();
	}

	else if (KEY == 'd' || KEY == 'D') {
		//kotak kiri
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_LINE_STRIP);
		glVertex2d(149.0, 199.0);
		glVertex2d(249.0, 199.0);
		glVertex2d(249.0, 299.0);
		glVertex2d(149.0, 299.0);
		glVertex2d(149.0, 199.0);
		glEnd();

		//segitga tengah
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_LINE_STRIP);
		glVertex2d(299.0, 199.0);
		glVertex2d(399.0, 199.0);
		glVertex2d(349.0, 299.0);
		glVertex2d(299.0, 199.0);
		glEnd();

		//kotak kanan
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_LINE_STRIP);
		glVertex2d(449.0, 199.0);
		glVertex2d(549.0, 199.0);
		glVertex2d(549.0, 299.0);
		glVertex2d(449.0, 299.0);
		glVertex2d(449.0, 199.0);
		glEnd();
		glFlush();
	}
}

void display() {
	//points
	if (check) {
		glColor3f(r, g, b);
		glBegin(GL_POINTS); // writes pixels on the frame buffer with the current drawing color
		glVertex2f(x, y);   // sets vertex
		glEnd();
	}
	glFlush();
}
*/

void display() {
	
	//bentuk langit(polygon bagian atas)
	glColor3f(0.5, 1.0, 1.0); // biru muda
	glBegin(GL_POLYGON);
	glVertex2d(20.0, 199.0);
	glVertex2d(620.0, 199.0);
	glVertex2d(620.0, 460.0);
	glVertex2d(20.0, 460.0);
	glEnd();
	
	//bentuk laut(polygon bagian bawah) biru
	glColor3f(0.0, 0.0, 0.5); // biru tua
	glBegin(GL_POLYGON);
	glVertex2d(20.0, 20.0);
	glVertex2d(620.0, 20.0);
	glVertex2d(620.0, 199.0);
	glVertex2d(20.0, 199.0);
	glEnd();

	//bentuk kapal
	glColor3f(0.0, 0.0, 0.0); //hitam
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2d(125.0, 170.0);
	glVertex2d(470.0, 170.0);
	glVertex2d(560.0, 250.0);
	glVertex2d(100.0, 250.0);
	glVertex2d(125.0, 170.0);
	glEnd();
	glColor3f(0.5, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(125.0, 170.0);
	glVertex2d(470.0, 170.0);
	glVertex2d(560.0, 250.0);
	glVertex2d(100.0, 250.0);
	glVertex2d(125.0, 170.0);
	glEnd();

	//bentuk bibir kapal
	glColor3f(0.5, 0.0, 0.0); //coklat/marron
	glBegin(GL_POLYGON);
	glVertex2d(90.0, 230.0);
	glVertex2d(536.0, 230.0);
	glVertex2d(586.0, 270.0);
	glVertex2d(80.0, 270.0);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(90.0, 230.0);
	glVertex2d(536.0, 230.0);
	glVertex2d(586.0, 270.0);
	glVertex2d(80.0, 270.0);
	glEnd();

	//-------------------------------------------------------------------------------------------------------------------

	// objek 1 jendela kapal 
	glColor3f(1.0, 1.0, 1.0); //pertama
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(150.0, 250.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(160.0, 250.0); //v1
	glVertex2d(158.0, 257.0); //v2
	glVertex2d(150.0, 260.0); //v3
	glVertex2d(142.0, 257.0); //v4
	glVertex2d(140.0, 250.0); //v5
	glVertex2d(142.0, 242.0); //v6
	glVertex2d(150.0, 240.0); //v7
	glVertex2d(158.0, 242.0); //v8
	glVertex2d(160.0, 250.0); //v1
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	//glVertex2d(150.0, 250.0);
	glVertex2d(160.0, 250.0); //v1
	glVertex2d(158.0, 257.0); //v2
	glVertex2d(150.0, 260.0); //v3
	glVertex2d(142.0, 257.0); //v4
	glVertex2d(140.0, 250.0); //v5
	glVertex2d(142.0, 242.0); //v6
	glVertex2d(150.0, 240.0); //v7
	glVertex2d(158.0, 242.0); //v8
	glVertex2d(160.0, 250.0); //v1
	glEnd();

	glColor3f(1.0, 1.0, 1.0); //kedua
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(180.0, 250.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(190.0, 250.0); //v1
	glVertex2d(188.0, 257.0); //v2
	glVertex2d(180.0, 260.0); //v3
	glVertex2d(172.0, 257.0); //v4
	glVertex2d(170.0, 250.0); //v5
	glVertex2d(172.0, 242.0); //v6
	glVertex2d(180.0, 240.0); //v7
	glVertex2d(188.0, 242.0); //v8
	glVertex2d(190.0, 250.0); //v1
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	//glVertex2d(180.0, 250.0);
	glVertex2d(190.0, 250.0); //v1
	glVertex2d(188.0, 257.0); //v2
	glVertex2d(180.0, 260.0); //v3
	glVertex2d(172.0, 257.0); //v4
	glVertex2d(170.0, 250.0); //v5
	glVertex2d(172.0, 242.0); //v6
	glVertex2d(180.0, 240.0); //v7
	glVertex2d(188.0, 242.0); //v8
	glVertex2d(190.0, 250.0); //v1
	glEnd();

	glColor3f(1.0, 1.0, 1.0); //ketiga
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(290.0, 250.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(300.0, 250.0); //v1
	glVertex2d(298.0, 257.0); //v2
	glVertex2d(290.0, 260.0); //v3
	glVertex2d(282.0, 257.0); //v4
	glVertex2d(280.0, 250.0); //v5
	glVertex2d(282.0, 242.0); //v6
	glVertex2d(290.0, 240.0); //v7
	glVertex2d(298.0, 242.0); //v8
	glVertex2d(300.0, 250.0); //v1
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	//glVertex2d(290.0, 250.0);
	glVertex2d(300.0, 250.0); //v1
	glVertex2d(298.0, 257.0); //v2
	glVertex2d(290.0, 260.0); //v3
	glVertex2d(282.0, 257.0); //v4
	glVertex2d(280.0, 250.0); //v5
	glVertex2d(282.0, 242.0); //v6
	glVertex2d(290.0, 240.0); //v7
	glVertex2d(298.0, 242.0); //v8
	glVertex2d(300.0, 250.0); //v1
	glEnd();

	glColor3f(1.0, 1.0, 1.0); //keempat
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(320.0, 250.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(330.0, 250.0); //v1
	glVertex2d(328.0, 257.0); //v2
	glVertex2d(320.0, 260.0); //v3
	glVertex2d(312.0, 257.0); //v4
	glVertex2d(310.0, 250.0); //v5
	glVertex2d(312.0, 242.0); //v6
	glVertex2d(320.0, 240.0); //v7
	glVertex2d(328.0, 242.0); //v8
	glVertex2d(330.0, 250.0); //v1
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	//glVertex2d(320.0, 250.0);
	glVertex2d(330.0, 250.0); //v1
	glVertex2d(328.0, 257.0); //v2
	glVertex2d(320.0, 260.0); //v3
	glVertex2d(312.0, 257.0); //v4
	glVertex2d(310.0, 250.0); //v5
	glVertex2d(312.0, 242.0); //v6
	glVertex2d(320.0, 240.0); //v7
	glVertex2d(328.0, 242.0); //v8
	glVertex2d(330.0, 250.0); //v1
	glEnd();

	glColor3f(1.0, 1.0, 1.0); //kelima
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(430.0, 250.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(440.0, 250.0); //v1
	glVertex2d(438.0, 257.0); //v2
	glVertex2d(430.0, 260.0); //v3
	glVertex2d(422.0, 257.0); //v4
	glVertex2d(420.0, 250.0); //v5
	glVertex2d(422.0, 242.0); //v6
	glVertex2d(430.0, 240.0); //v7
	glVertex2d(438.0, 242.0); //v8
	glVertex2d(440.0, 250.0); //v1
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	//glVertex2d(430.0, 250.0);
	glVertex2d(440.0, 250.0); //v1
	glVertex2d(438.0, 257.0); //v2
	glVertex2d(430.0, 260.0); //v3
	glVertex2d(422.0, 257.0); //v4
	glVertex2d(420.0, 250.0); //v5
	glVertex2d(422.0, 242.0); //v6
	glVertex2d(430.0, 240.0); //v7
	glVertex2d(438.0, 242.0); //v8
	glVertex2d(440.0, 250.0); //v1
	glEnd();

	glColor3f(1.0, 1.0, 1.0); //keenam
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(460.0, 250.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(470.0, 250.0); //v1
	glVertex2d(468.0, 257.0); //v2
	glVertex2d(460.0, 260.0); //v3
	glVertex2d(452.0, 257.0); //v4
	glVertex2d(450.0, 250.0); //v5
	glVertex2d(452.0, 242.0); //v6
	glVertex2d(460.0, 240.0); //v7
	glVertex2d(468.0, 242.0); //v8
	glVertex2d(470.0, 250.0); //v1
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	//glVertex2d(460.0, 250.0);
	glVertex2d(470.0, 250.0); //v1
	glVertex2d(468.0, 257.0); //v2
	glVertex2d(460.0, 260.0); //v3
	glVertex2d(452.0, 257.0); //v4
	glVertex2d(450.0, 250.0); //v5
	glVertex2d(452.0, 242.0); //v6
	glVertex2d(460.0, 240.0); //v7
	glVertex2d(468.0, 242.0); //v8
	glVertex2d(470.0, 250.0); //v1
	glEnd();

	//-------------------------------------------------------------------------------------------------------------------

	//objek 2
	//cerobong asap belakang
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(250.0, 270.0);
	glVertex2d(285.0, 270.0);
	glVertex2d(280.0, 370.0);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2d(245.0, 370.0);
	glEnd();

	//cerobong asap tengah
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(295.0, 270.0);
	glVertex2d(330.0, 270.0);
	glVertex2d(325.0, 370.0);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2d(290.0, 370.0);
	glEnd();

	//cerobong asap depan
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(340.0, 270.0);
	glVertex2d(375.0, 270.0);
	glVertex2d(370.0, 370.0);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2d(335.0, 370.0);
	glEnd();

	//-------------------------------------------------------------------------------------------------------------------

	//objek 3
	glColor3f(0.0, 0.0, 0.0); //body belakang pertama
	glBegin(GL_POLYGON);
	glVertex2d(100.0, 270.0);
	glVertex2d(230.0, 270.0);
	glVertex2d(220.0, 300.0);
	glVertex2d(110.0, 300.0);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(100.0, 270.0);
	glVertex2d(230.0, 270.0);
	glVertex2d(220.0, 300.0);
	glVertex2d(110.0, 300.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); //jendela pertama
	glBegin(GL_POLYGON);
	glVertex2d(135.0, 280.0);
	glVertex2d(145.0, 280.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(145.0, 290.0);
	glVertex2d(135.0, 290.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); //jendela kedua
	glBegin(GL_POLYGON);
	glVertex2d(162.0, 280.0);
	glVertex2d(172.0, 280.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(172.0, 290.0);
	glVertex2d(162.0, 290.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); //jendela ketiga
	glBegin(GL_POLYGON);
	glVertex2d(190.0, 280.0);
	glVertex2d(200.0, 280.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(200.0, 290.0);
	glVertex2d(190.0, 290.0);
	glEnd();

	//-------------------------------------------------------------------------------------------------------------------

	//objek 3
	glColor3f(0.0, 0.0, 0.0); //body belakang kedua
	glBegin(GL_POLYGON);
	glVertex2d(120.0, 300.0);
	glVertex2d(210.0, 300.0);
	glVertex2d(200.0, 320.0);
	glVertex2d(130.0, 320.0);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(120.0, 300.0);
	glVertex2d(210.0, 300.0);
	glVertex2d(200.0, 320.0);
	glVertex2d(130.0, 320.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); // jendela pertama
	glBegin(GL_POLYGON);
	glVertex2d(145.0, 305.0);
	glVertex2d(155.0, 305.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(155.0, 315.0);
	glVertex2d(145.0, 315.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); // jendela kedua
	glBegin(GL_POLYGON);
	glVertex2d(175.0, 305.0);
	glVertex2d(185.0, 305.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(185.0, 315.0);
	glVertex2d(175.0, 315.0);
	glEnd();

	//-------------------------------------------------------------------------------------------------------------------

	//objek 3
	glColor3f(0.5, 0.0, 0.0); //body belakang ketiga
	glBegin(GL_POLYGON);
	glVertex2d(170.0, 320.0);
	glVertex2d(193.0, 320.0);
	glVertex2d(193.0, 355.0);
	glVertex2d(170.0, 355.0);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(170.0, 320.0);
	glVertex2d(193.0, 320.0);
	glVertex2d(193.0, 355.0);
	glVertex2d(170.0, 355.0);
	glEnd();

	glColor3f(0.5, 0.0, 0.0); //atap
	glBegin(GL_POLYGON);
	glVertex2d(160.0, 350.0);
	glVertex2d(203.0, 350.0);
	glVertex2d(203.0, 355.0);
	glVertex2d(160.0, 355.0);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(160.0, 350.0);
	glVertex2d(203.0, 350.0);
	glVertex2d(203.0, 355.0);
	glVertex2d(160.0, 355.0);
	glEnd();

	//objek 4
	//bendera body belakang
	glColor3f(1.0, 0.0, 0.0); //merah
	glBegin(GL_TRIANGLES);
	glVertex2d(140.0, 320.0);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2d(145.0, 320.0);
	glVertex2d(145.0, 350.0);
	glEnd();
	glColor3f(0.0, 1.0, 0.0); //hijau
	glBegin(GL_TRIANGLES);
	glVertex2d(150.0, 320.0);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2d(155.0, 320.0);
	glVertex2d(155.0, 350.0);
	glEnd();
	glColor3f(0.0, 0.0, 1.0); //biru
	glBegin(GL_TRIANGLES);
	glVertex2d(160.0, 320.0);
	glColor3f(1.0, 0.0, 1.0);
	glVertex2d(165.0, 320.0);
	glVertex2d(165.0, 350.0);
	glEnd();

	//-------------------------------------------------------------------------------------------------------------------

	glColor3f(0.0, 0.0, 0.0); //body depan pertama
	glBegin(GL_POLYGON);
	glVertex2d(390.0, 270.0);
	glVertex2d(545.0, 270.0);
	glVertex2d(535.0, 290.0);
	glVertex2d(395.0, 290.0);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(390.0, 270.0);
	glVertex2d(545.0, 270.0);
	glVertex2d(535.0, 290.0);
	glVertex2d(395.0, 290.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); // jendela pertama
	glBegin(GL_POLYGON);
	glVertex2d(420.0, 275.0);
	glVertex2d(430.0, 275.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(430.0, 285.0);
	glVertex2d(420.0, 285.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); // jendela kedua
	glBegin(GL_POLYGON);
	glVertex2d(460.0, 275.0);
	glVertex2d(470.0, 275.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(470.0, 285.0);
	glVertex2d(460.0, 285.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); // jendela kedua
	glBegin(GL_POLYGON);
	glVertex2d(500.0, 275.0);
	glVertex2d(510.0, 275.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(510.0, 285.0);
	glVertex2d(500.0, 285.0);
	glEnd();

	//-------------------------------------------------------------------------------------------------------------------

	glColor3f(0.0, 0.0, 0.0); //body depan kedua
	glBegin(GL_POLYGON);
	glVertex2d(400.0, 290.0);
	glVertex2d(525.0, 290.0);
	glVertex2d(510.0, 315.0);
	glVertex2d(410.0, 315.0);
	glEnd();
	glColor3f(0.5, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(400.0, 290.0);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2d(525.0, 290.0);	
	glVertex2d(510.0, 315.0);
	glVertex2d(410.0, 315.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); // jendela pertama
	glBegin(GL_POLYGON);
	glVertex2d(425.0, 297.0);
	glVertex2d(435.0, 297.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(435.0, 307.0);
	glVertex2d(425.0, 307.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); // jendela kedua
	glBegin(GL_POLYGON);
	glVertex2d(455.0, 297.0);
	glVertex2d(465.0, 297.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(465.0, 307.0);
	glVertex2d(455.0, 307.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); // jendela ketiga
	glBegin(GL_POLYGON);
	glVertex2d(485.0, 297.0);
	glVertex2d(495.0, 297.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(495.0, 307.0);
	glVertex2d(485.0, 307.0);
	glEnd();

	//-------------------------------------------------------------------------------------------------------------------

	glColor3f(0.5, 0.0, 0.0); //body depan ketiga
	glBegin(GL_POLYGON);
	glVertex2d(420.0, 315.0);
	glVertex2d(470.0, 315.0);
	glVertex2d(470.0, 340.0);
	glVertex2d(420.0, 340.0);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(420.0, 315.0);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2d(470.0, 315.0);
	glVertex2d(470.0, 340.0);
	glVertex2d(420.0, 340.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); // jendela pertama
	glBegin(GL_POLYGON);
	glVertex2d(425.0, 323.0);
	glVertex2d(435.0, 323.0);
	glColor3f(0.5, 0.0, 0.0);
	glVertex2d(435.0, 333.0);
	glVertex2d(425.0, 333.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); // jendela kedua
	glBegin(GL_POLYGON);
	glVertex2d(455.0, 323.0);
	glVertex2d(465.0, 323.0);
	glColor3f(0.5, 0.0, 0.0);
	glVertex2d(465.0, 333.0);
	glVertex2d(455.0, 333.0);
	glEnd();

	glColor3f(0.5, 0.0, 0.0); // atap depan
	glBegin(GL_POLYGON);
	glVertex2d(400.0, 340.0);
	glVertex2d(490.0, 340.0);
	glVertex2d(490.0, 345.0);
	glVertex2d(400.0, 345.0);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(400.0, 340.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(490.0, 340.0);
	glVertex2d(490.0, 345.0);
	glVertex2d(400.0, 345.0);
	glEnd();

	//-------------------------------------------------------------------------------------------------------------------

	//objek 5 Antena
	glColor3f(0.0, 0.0, 0.0); //paling kiri
	glBegin(GL_TRIANGLES);
	glVertex2d(420.0, 345.0);
	glVertex2d(425.0, 345.0);
	glVertex2d(425.0, 355.0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0); // kiri
	glBegin(GL_TRIANGLES);
	glVertex2d(425.0, 345.0);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2d(435.0, 345.0);
	glVertex2d(425.0, 365.0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0); // kanan
	glBegin(GL_TRIANGLES);
	glVertex2d(440.0, 345.0);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2d(450.0, 345.0);
	glVertex2d(450.0, 365.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); //tengah kiri
	glBegin(GL_TRIANGLES);
	glVertex2d(430.0, 345.0);
	glVertex2d(437.0, 345.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(437.0, 390.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); // tengah kanan
	glBegin(GL_TRIANGLES);
	glVertex2d(438.0, 345.0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(445.0, 345.0);
	glVertex2d(438.0, 390.0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0); //paling kanan
	glBegin(GL_TRIANGLES);
	glVertex2d(450.0, 345.0);
	glVertex2d(455.0, 345.0);
	glVertex2d(450.0, 355.0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0); // bendera
	glBegin(GL_LINE_STRIP);
	glVertex2d(480.0, 345.0);
	glVertex2d(480.0, 345.0);
	glVertex2d(480.0, 365.0);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2d(467.0, 357.0);
	glVertex2d(480.0, 357.0);
	glVertex2d(480.0, 365.0);
	glVertex2d(467.0, 365.0);
	glEnd();

	// -------------------------------------------------------------------------------------------------------------------

	// objek 6 matahari
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(50.0, 430.0);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2d(65.0, 430.0); //v1
	glVertex2d(63.0, 442.0); //v2
	glVertex2d(50.0, 445.0); //v3
	glVertex2d(37.0, 442.0); //v4
	glVertex2d(35.0, 430.0); //v5
	glVertex2d(37.0, 417.0); //v6
	glVertex2d(50.0, 415.0); //v7
	glVertex2d(63.0, 417.0); //v8
	glVertex2d(65.0, 430.0); //1
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(65.0, 430.0); //v1
	glVertex2d(63.0, 442.0); //v2
	glVertex2d(50.0, 445.0); //v3
	glVertex2d(37.0, 442.0); //v4
	glVertex2d(35.0, 430.0); //v5
	glVertex2d(37.0, 417.0); //v6
	glVertex2d(50.0, 415.0); //v7
	glVertex2d(63.0, 417.0); //v8
	glVertex2d(65.0, 430.0); //1
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(67.0, 432.0); //v1
	glVertex2d(65.0, 444.0); //v2
	glVertex2d(52.0, 447.0); //v3
	glVertex2d(35.0, 444.0); //v4
	glVertex2d(33.0, 432.0); //v5
	glVertex2d(35.0, 415.0); //v6
	glVertex2d(52.0, 413.0); //v7
	glVertex2d(65.0, 415.0); //v8
	glVertex2d(67.0, 432.0); //1
	glEnd();

	//objek 7 ikan
	glColor3f(0.0, 0.0, 1.0); //kepala ikan
	glBegin(GL_TRIANGLES);
	glVertex2d(250.0, 80.0);	
	glVertex2d(250.0, 120.0);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2d(280.0, 100.0);
	glEnd();
	glColor3f(1.0, 1.0, 1.0); // mulut ikan
	glBegin(GL_LINES);
	glVertex2d(260.0, 100.0);
	glVertex2d(262.0, 103.0);
	glVertex2d(262.0, 103.0);
	glVertex2d(264.0, 97.0);
	glVertex2d(264.0, 97.0);
	glVertex2d(266.0, 103.0);
	glVertex2d(266.0, 103.0);
	glVertex2d(268.0, 97.0);
	glVertex2d(268.0, 97.0);
	glVertex2d(270.0, 103.0);
	glVertex2d(270.0, 103.0);
	glVertex2d(272.0, 97.0);
	glVertex2d(272.0, 97.0);
	glVertex2d(274.0, 103.0);
	glVertex2d(274.0, 103.0);
	glVertex2d(276.0, 98.0);
	glVertex2d(276.0, 98.0);
	glVertex2d(278.0, 101.0);
	glVertex2d(278.0, 101.0);
	glVertex2d(280.0, 100.0);
	glEnd();
	
	glColor3f(0.0, 0.0, 0.0); // mata ikan
	glBegin(GL_POINTS);
	glVertex2d(255.0, 110.0);
	glEnd();

	glColor3f(0.0, 0.0, 1.0); //badan ikan
	glBegin(GL_TRIANGLES);
	glVertex2d(250.0, 80.0);
	glVertex2d(250.0, 120.0);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2d(170.0, 100.0);
	glEnd();
	
	glColor3f(0.0, 0.0, 1.0); //ekor ikan
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(185.0, 100.0);
	glVertex2d(140.0, 115.0);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2d(150.0, 100.0);
	glVertex2d(140.0, 85.0);
	glEnd();


	glFlush();

}



int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //single buffer unutk menampilkan window | warna rgb
	glutInitWindowSize(640, 480); //size, 640px x 480px
	glutInitWindowPosition(10, 10); //posisi windows
	glutCreateWindow("Polygon by ifbalino");

	//inisialisasi glut
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(4);
	glLineWidth(2);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity(); // dihitung dengan matrix identitas
	gluOrtho2D(0.0, 640.0, 0.0, 480.0); // untuk memberikan sistem koordinat kepada windows yang kita buat

	glutDisplayFunc(display);
	//glutMouseFunc(mouse);
	//glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}
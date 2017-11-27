#include "stdafx.h"

GLint winWidth = 800, winHeight = 800;

void init(void);

void displayFcn(void);

void testDis(void);

void testFcn01();
void main(int argc, char ** argv) {
	testFcn01();

	//
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(200, 200);
	glutInitWindowSize(winWidth, winHeight);
	glutCreateWindow("3D Test Window");
	init();
	//glutDisplayFunc(displayFcn);
	glutMainLoop();
	system("PAUSE");
}


void testFcn01() {
	shObject* tempObject;
	shCube * tempCube = new shCube(5, 5, 5, 10, 10, 10);
	tempObject = tempCube;
	cout << 's' << endl;
	tempObject->disVertexs();
}
void testDis(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0f, 0.4f, 0.2f);
	glBegin(GL_LINES);
	glVertex2i(180, 15);
	glVertex2i(10, 145);
	glEnd();
	glFlush();
}
void init(void) {
	glClearColor(1.0, 1.0, 1.0, 0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 800, 0, 800);
}
void displayFcn(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	shScene myScene;
	myScene.projection();
	//shScreenPoint * centrePos00 = new shScreenPoint(winWidth / 2, winHeight / 2);

	//shScreenPoint * centrePos01 = new shScreenPoint(100, 100);

	//shIsogon * testIsogon = new shIsogon(*centrePos00, 500, 3);

	//testIsogon->paint();

	//shPolyon testPolyon;

	//testPolyon.addPoint(0, 0);

	//testPolyon.addPoint(0, 1000);

	//testPolyon.addPoint(500, 500);

	//testPolyon.addPoint(1000, 1000);

	//testPolyon.addPoint(1000, 0);

	//testPolyon.addPoint(500, 100);

	//testPolyon.drawPolyLine();

	//testPolyon.paint();



	//	testIsogon->rotateEntity(float(SH_PI/2),testIsogon->getCentrePos());

	//testIsogon->scaleEntity( 0);

	//testIsogon->drawWirefame();



}
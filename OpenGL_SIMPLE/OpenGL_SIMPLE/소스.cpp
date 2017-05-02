/*
include <glut.h>

void DoDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
	glVertex2f(0.0, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);
	glEnd();
	glFlush();
}

void main()
{
	glutCreateWindow("OpenGL");
	glutDisplayFunc(DoDisplay);
	glutMainLoop();
}
*/


#include <glut.h>    // glut

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);

	glVertex3f(-0.25, -0.5, 0.0);
	glVertex3f(0.5, -0.2255, 0.0);
	glVertex3f(0.5, 0.5, 0.0);
	glVertex3f(-0.5, 0.5, 0.0);

	glEnd();
	glFlush();
}

int main()
{
	glutCreateWindow("OpenGL Draw Rect");
	glutDisplayFunc(MyDisplay);
	glutMainLoop();

	return 0;
}

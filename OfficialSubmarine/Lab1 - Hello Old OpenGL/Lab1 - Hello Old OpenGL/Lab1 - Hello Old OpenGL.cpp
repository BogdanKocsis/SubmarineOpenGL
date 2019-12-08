// Lab1 - Hello Old OpenGL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include <GL/glew.h> 
#include <GL/freeglut.h>

#pragma comment (lib, "freeglut.lib")

void InitGLUT(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(1000, 700);

}
void Initialize(void)
{
	glClearColor(0.0f, 0.0f, 1.0f, 0.0f);

}

void RenderFunction(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(20.0);
	glBegin(GL_POINTS);

	// centru
	glColor4f(0.0f, 1.0f, 0.0f, 1.0f);
	glVertex4f(0.0f, 0.0f, 0.0f, 1.0f);


	
	glColor4f(0.0f, 1.0f, 0.0f, 1.0f);
	glVertex4f(-0.8f, 0.8f, 0.0f, 1.0f);

	glColor4f(0.0f, 1.0f, 0.0f, 1.0f);
	glVertex4f(0.8f, 0.8f, 0.0f, 1.0f);


	glColor4f(0.0f, 1.0f, 0.0f, 1.0f);
	glVertex4f(0.8f, -0.8f, 0.0f, 1.0f);


	glColor4f(0.0f, 1.0f, 0.0f, 1.0f);
	glVertex4f(-0.8f, -0.8f, 0.0f, 1.0f);

	glEnd();
	glFlush();
}


int main(int argc, char* argv[])
{
	InitGLUT(argc, argv);
	glutCreateWindow("Primul triunghi - OpenGL <<vechi>>"); // titlul ferestrei
	printf("OpenGL version supported by this platform: (%s) \n", glGetString(GL_VERSION));
	printf("GLSL version supported by this platform: (%s) \n", glGetString(GL_SHADING_LANGUAGE_VERSION));
	Initialize();
	glutDisplayFunc(RenderFunction);
	glutMainLoop();
	return 0;



}


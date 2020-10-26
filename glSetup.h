#ifndef _GL_SETUP_H_
#define _GL_SETUP_H_
#if defined(_APPLE_) && defined(_MACH_)
#include <OpenGL/glu.h>
#else //windows
#include <Windows.h>
#include <GL/glu.h>
#endif

#include <GLFW/glfw3.h>
extern float screenScale; //Ǯ ��ũ���� �ƴ� �� ȭ�����
extern int screenW, screenH; 
extern int windowW, windowH; //�����ӹ��� ������
extern float aspect; //aspect ratio = windowW / windowH
extern float dpiScaling; //for hidpi
extern int vsync; //vertical sync on/off
extern bool perspectiveView; 
extern float fovy; //field of view in the y direction
extern float nearDist; //near plane
extern float farDist; //far plane

GLFWwindow* initializeOpenGL(int argc, char* argv[], GLfloat bg[4]);
void reshape(GLFWwindow* window, int w, int h);
void setupProjectionMatrix();
void drawAxes(float l, float w);
#endif
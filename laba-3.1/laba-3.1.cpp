#include <iostream>
#include "living.h"
#include "fox.h"
#include "grass.h"
#include "rabbit.h"
#include "empty.h"
#include <glut.h>
#include<Windows.h>
#include<time.h>

world odd, even;
int Scale = 25;
int n = Scale * N;

void init(world w)
{
	int random;
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
		{
			random = rand() % 6;
			if (random == 2)
			{

				w[i][j] = new rabbit(i, j);
			}
			else if (random == 3)
			{

				w[i][j] = new fox(i, j);
			}
			else if (random == 1)
			{

				w[i][j] = new grass(i, j);
			}
			else
			{

				w[i][j] = new empty(i, j);
			}
		}
}

void update(world w_new, world w_old)
{
	int i, j;
	for (i = 1; i < N - 1; ++i)
		for (j = 1; j < N - 1; ++j)
			w_new[i][j] = w_old[i][j]->next(w_old);
}

void initclear(world w_new)
{
	int i, j;
	for (i = 0; i < N; ++i)
		for (j = 0; j < N; ++j)
			w_new[i][j] = new empty(i, j);
}



void dele(world w)
{
	int i, j;
	for (i = 1; i < N - 1; ++i)
		for (j = 1; j < N - 1; ++j)
			delete(w[i][j]);
}

void DrawField()
{
	glColor3f(0, 1, 1);
	glBegin(GL_LINES);
	for (int i = 0; i < n; i += Scale)
	{
		glVertex2f(i, 0);
		glVertex2f(i, n);
	}
	for (int i = 0; i < n; i += Scale)
	{
		glVertex2f(0, i);
		glVertex2f(n, i);
	}
	glEnd();
}
void upgrade(world w_new) {
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (w_new[i][j]->who() == 0)
			{
				glColor3f(1, 1, 1);
				glRectf(j * Scale + 5, i * Scale + 5, j * Scale + Scale - 5, i * Scale + Scale - 5);
			}
			else if (w_new[i][j]->who() == 1)
			{
				glColor3f(0, 1, 0);
				glRectf(j * Scale + 5, i * Scale + 5, j * Scale + Scale - 5, i * Scale + Scale - 5);
			}
			else if (w_new[i][j]->who() == 2)
			{
				glColor3f(1, 1, 0);
				glRectf(j * Scale + 5, i * Scale + 5, j * Scale + Scale - 5, i * Scale + Scale - 5);
			}
			else
			{
				glColor3f(1, 0, 0);
				glRectf(j * Scale + 5, i * Scale + 5, j * Scale + Scale - 5, i * Scale + Scale - 5);
			}
		}
	}
}
int i = 0;
void move() {

	if (i == 0)
	{
		init(odd); init(even);
		//init(even);
	}
	if (i % 2)
	{
		update(even, odd);
		upgrade(even);
		dele(odd);
	}
	else
	{
		update(odd, even);
		upgrade(odd);
		dele(even);
	}
	i++;
	Sleep(2000);
}
void display()
{
	DrawField();
	move();
	glFlush();
}

void timer(int = 0) {
	display();
	glutTimerFunc(50, timer, 0);
}

int main(int argc, char** argv)
{
	srand(time(NULL));
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(n, n);
	glutCreateWindow("сложнааа!!!");
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, n, 0, n);
	glutDisplayFunc(display);
	glutTimerFunc(50, timer, 0);
	//glutSpecialFunc(MyKeyboard);
	glutMainLoop();
	return 0;
}
#ifndef HEADER
#define HEADER
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#define SIZE 19
#define XP 40
#define YP 5
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ARROW 224
float res;
clock_t start, end;
void LoadMaze(char num);
void GotoXY(int x, int y);
void PrintMazeGame();
void CursorView(char show);
void Movemaze(int *row,int *col);
int isblock(int i, int j);
int isFinish(int i,int j);
char maze[SIZE][SIZE];
void move(int* x, int* y);
void Complete();
#endif
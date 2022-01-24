#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#define SIZE 19


void LoadMaze(char num);
char maze[SIZE][SIZE];

int main(void)
{
    char level;
    printf("난이도를 선택하세요. (1, 2, 3) ");
    scanf("%c", &level);
    LoadMaze(level);

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%c ", maze[i][j]);
        }
        printf("\n");
    }
}

void LoadMaze(char num)
{
    char path[20] = "./Maze";
    strcat(path, &num);
    strcat(path, ".txt");

    char str_tmp[50] = { 0, };
    FILE* f = fopen(path, "r");

    for (int i = 0; i < SIZE; i++)
    {
        fgets(str_tmp, 50, f);
        char* ptr = strtok(str_tmp, "\t");
        for (int j = 0; j < SIZE; j++)
        {
            maze[i][j] = *ptr;
            ptr = strtok(NULL, "\t");
        }
    }
    fclose(f);
}
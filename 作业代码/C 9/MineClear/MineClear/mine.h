#ifndef _MINE_H_
#define _MINE_H_

#include<stdio.h>
#include<windows.h>
#include<time.h>
#pragma warning(disable:4996)

#define ROW 12
#define COL 12
#define TOTAL 10*10
#define Mine_Num 20

void Menu();
void Game();
int GetRandIndex(int start, int end);
void SetMines(char mineboard[][COL], int row, int col);
char ShowBoard(char mineboard[][COL], int row, int col);
int GetMines(char mineboard[][COL], int row, int col);


#endif
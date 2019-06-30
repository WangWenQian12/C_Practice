#ifndef _CROSSES_H_
#define _CROSSES_H_

#include<stdio.h>
#include<windows.h>
#include<time.h>
#pragma warning(disable:4996)

#define ROW 3
#define COL 3

void ShowMenu();
void Game();
void InitBoard(char Board[][COL], int row, int col);
void ShowBoard(char Board[][COL], int row, int col);
void PlayerMove(char Board[][COL], int row, int col);
char Judge(char Board[][COL], int row, int col);
void ComputerMove(char Board[][COL], int row, int col);
int FullBoard(char Board[][COL], int row, int col);

#endif 
#include "mine.h"

int GetRandIndex(int start, int end)    //随机生成埋雷下标
{
	return rand() % (end - start + 1) + start;
}
void SetMines(char mineboard[][COL], int row, int col)
{
	srand((unsigned long)time(NULL));
	int count = 0;
	while (count < Mine_Num){
		int x = GetRandIndex(1, 10);
		int y = GetRandIndex(1, 10);
		if (mineboard[x][y] == '0'){
			mineboard[x][y] = '1';
			count++;
		}
	}
}
int GetMines(char mineboard[][COL], int row,int col)   //显示周围雷的数目
{
	return mineboard[row - 1][col - 1] + mineboard[row - 1][col] + mineboard[row - 1][col + 1] + mineboard[row][col - 1] + \
		mineboard[row][col + 1] + mineboard[row + 1][col - 1] + mineboard[row + 1][col] + mineboard[row + 1][col + 1] - 7 * '0';
}
char ShowBoard(char showboard[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("   ");
	for (i = 1; i <= 10; i++){
		printf("%d   ", i);
	}
	printf("\n");
	for (i = 0; i < col-1; i++){
		printf("----");
	}
	printf("\n");
	for (i = 1; i <= row - 2; i++)
	{
		printf("%-2d|", i);
		for (j = 1; j <= col - 2; j++)
		{
			printf(" %c |", showboard[i][j]);
		}
		printf("\n");
		int k = 1;
		for (k = 1; k <= col - 1; k++)
		{
			printf("----");
		}
		printf("\n");
	}
}

void Game()
{
	char mineboard[ROW][COL];
	char showboard[ROW][COL];
	memset(mineboard, '0', sizeof(mineboard));  //将埋雷数组全都清0
	memset(showboard, '*', sizeof(showboard));  //将扫雷数组全都置*
	SetMines(mineboard, ROW, COL);
	int count = TOTAL;
	int x = 0;
	int y = 0;
	while (1){
		ShowBoard(showboard, ROW, COL);
		printf("Please select<x,y>:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW - 2 && y >= 1 && y <= COL - 2){
			if (mineboard[x][y] == '0'){
				char num = GetMines(mineboard, x, y);
				showboard[x][y] = num;
				//Showboard(mineboard, ROW, COL);
				count--;
				if (count <= 20){
					printf("恭喜你，完美避开所有的雷区！\n");
					break;
				}
			}
			else{
				printf("实在是太遗憾了，你被炸死了！\n");
				break;			
			}
		}
		else{
			printf("输入有误，请重新选择！\n");
		}
	}
}
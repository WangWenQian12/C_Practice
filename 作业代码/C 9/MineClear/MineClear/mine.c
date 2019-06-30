#include "mine.h"

int GetRandIndex(int start, int end)    //������������±�
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
int GetMines(char mineboard[][COL], int row,int col)   //��ʾ��Χ�׵���Ŀ
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
	memset(mineboard, '0', sizeof(mineboard));  //����������ȫ����0
	memset(showboard, '*', sizeof(showboard));  //��ɨ������ȫ����*
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
					printf("��ϲ�㣬�����ܿ����е�������\n");
					break;
				}
			}
			else{
				printf("ʵ����̫�ź��ˣ��㱻ը���ˣ�\n");
				break;			
			}
		}
		else{
			printf("��������������ѡ��\n");
		}
	}
}
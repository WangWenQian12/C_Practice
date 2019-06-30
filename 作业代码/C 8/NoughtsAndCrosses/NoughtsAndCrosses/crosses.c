#include "crosses.h"


void Game()
{
	char Board[ROW][COL];
	char result = 'N';
	InitBoard(Board, ROW, COL);
	ShowBoard(Board, ROW, COL);
	srand((unsigned int)time(NULL));    //种一颗随机数种子
	while (1){
		//InitBoard(Board, ROW, COL);
		PlayerMove(Board, ROW, COL);
		//ComputerMove(Board, ROW, COL);
		ShowBoard(Board, ROW, COL);
		result = Judge(Board, ROW, COL);
		if (result != 'N'){
			break;
		}
		ComputerMove(Board, ROW, COL);
		//PlayerMove(Board, ROW, COL);
		ShowBoard(Board, ROW, COL);
		result = Judge(Board, ROW, COL);
		if (result != 'N'){
			break;
		}
	}
	switch (result){
	case 'X':
		printf("Congratulations,you win!\n");
		break;
	case 'O':
		printf("Sorry,computer wins!\n");
		break;
	case 'E':
		printf("It was tied severa!\n");
		break;
	default:
		break;

	}
}
void InitBoard(char Board[][COL], int row, int col)    //初始化棋盘，将其清空
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			Board[i][j] = ' ';
		}
	}
}
void ShowBoard(char Board[][COL], int row, int col)    //展示棋盘
{
	int i;
	for (int i = 0; i < row; i++)
	{
		printf("  %c | %c | %c  \n", Board[i][0], Board[i][1], Board[i][2]);
		if (i != row - 1)
			printf(" ---|---|--- \n");
	}
	//printf("   1  2  3  \n");
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < row; i++){
		//printf(" %d |",i+1);
		//for (j = 0; j < col;j++){
			//printf("%c |",Board[i][j]);			
		//}
	//}
}
void ComputerMove(char Board[][COL], int row, int col)        //电脑下棋
{
	int x = 0;
	int y = 0;
	printf("It's computer's turn!\n");
	while (1)
	{
		x = rand() % row;           //生成俩个0-3的随机数
		y = rand() % col;
		if (Board[x][y] == ' ')
		{
			Board[x][y] = 'O';
			break;
		}
	}
}
void PlayerMove(char Board[][COL], int row, int col)       //用户下棋
{
	int x = 0;
	int y = 0;
	printf("It is player's turn!\n");
	while (1){
		printf("Please select your pos<x,y>: ");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)      //判断用户选择的位置是否正确
		{
			if (Board[x - 1][y - 1] == ' ')      //用户选择的位置没有棋子
			{
				Board[x - 1][y - 1] = 'X';      //用户下棋
				break;
			}
			else
			{
				printf("This place already has chess pieces. Please select again: \n");
			}
		}
		else{
			printf("Error! Please select again: \n");
		}
	}
}
char Judge(char Board[][COL], int row, int col)     //判断哪方赢
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){      //判断行是否三子连珠
		if (Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2] && Board[i][0] != ' '){
			return Board[i][0];
		}
	}
	for (i = 0; i < col; i++){      //判断列是否三子连珠
		if (Board[0][j] == Board[1][j] && Board[1][j] == Board[2][j] && Board[0][j] != ' '){
			return Board[0][j];
		}
	}
	if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[0][0] != ' '){     //判断斜对角线是否三子连珠
		return Board[0][0];
	}
	else if (Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0] && Board[2][0] != ' '){
		return Board[0][2];
	}
	if (FullBoard){  //棋盘没满
		return 'N';
	}
	else{
		return 'E';    //平局
	}
}
int FullBoard(char Board[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			if (Board[i][j] == ' '){
				return 0;
			}	
		}
	}
	return 1;
}
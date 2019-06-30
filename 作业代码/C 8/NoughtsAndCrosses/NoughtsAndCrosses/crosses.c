#include "crosses.h"


void Game()
{
	char Board[ROW][COL];
	char result = 'N';
	InitBoard(Board, ROW, COL);
	ShowBoard(Board, ROW, COL);
	srand((unsigned int)time(NULL));    //��һ�����������
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
void InitBoard(char Board[][COL], int row, int col)    //��ʼ�����̣��������
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			Board[i][j] = ' ';
		}
	}
}
void ShowBoard(char Board[][COL], int row, int col)    //չʾ����
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
void ComputerMove(char Board[][COL], int row, int col)        //��������
{
	int x = 0;
	int y = 0;
	printf("It's computer's turn!\n");
	while (1)
	{
		x = rand() % row;           //��������0-3�������
		y = rand() % col;
		if (Board[x][y] == ' ')
		{
			Board[x][y] = 'O';
			break;
		}
	}
}
void PlayerMove(char Board[][COL], int row, int col)       //�û�����
{
	int x = 0;
	int y = 0;
	printf("It is player's turn!\n");
	while (1){
		printf("Please select your pos<x,y>: ");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)      //�ж��û�ѡ���λ���Ƿ���ȷ
		{
			if (Board[x - 1][y - 1] == ' ')      //�û�ѡ���λ��û������
			{
				Board[x - 1][y - 1] = 'X';      //�û�����
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
char Judge(char Board[][COL], int row, int col)     //�ж��ķ�Ӯ
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){      //�ж����Ƿ���������
		if (Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2] && Board[i][0] != ' '){
			return Board[i][0];
		}
	}
	for (i = 0; i < col; i++){      //�ж����Ƿ���������
		if (Board[0][j] == Board[1][j] && Board[1][j] == Board[2][j] && Board[0][j] != ' '){
			return Board[0][j];
		}
	}
	if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[0][0] != ' '){     //�ж�б�Խ����Ƿ���������
		return Board[0][0];
	}
	else if (Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0] && Board[2][0] != ' '){
		return Board[0][2];
	}
	if (FullBoard){  //����û��
		return 'N';
	}
	else{
		return 'E';    //ƽ��
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
#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

void PascalsTriangle(int coeff[][100], int row)
{
	int i, j;
	for (i = 0; i < row;i++){
		coeff[i][0] = 1;
		coeff[i][i] = 1;
	}
	for (i = 2; i < row; i++){
		for (j = 1; j <  i; j++){
			coeff[i][j] = coeff[i - 1][j - 1] + coeff[i - 1][j];
		}
	}
	for (i = 0; i < row; i++){
		for (j = 0; j <= i; j++){
			printf("%d \t", coeff[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int coeff[100][100] = { 0 };
	int row = 0;
	printf("ÇëÊäÈëÐÐÊý£º");
	scanf("%d", &row);
	PascalsTriangle(coeff,row);
	system("pause");
	return 0;
}
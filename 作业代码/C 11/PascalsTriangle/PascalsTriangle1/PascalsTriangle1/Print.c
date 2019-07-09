#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int PascalsTriangle(int i,int j)
{
	if (i == 1 || i == j || j==1){
		return 1;
	}
	else{
		return PascalsTriangle(i - 1, j - 1) + PascalsTriangle(i-1, j );
	}

}

int main()
{
	int i = 0;
	int j = 0;
	int row = 0;
	printf("«Î ‰»Î–– ˝£∫");
	scanf("%d", &row);
	for (i = 1; i <= row; i++){
		for (j = 1; j <= i; j++){
			printf("%d \t", PascalsTriangle(i, j));
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
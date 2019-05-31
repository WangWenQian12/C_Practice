////杨氏矩阵
//
#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int Find_Num(int arr[][3], int *px, int *py, int key)
{
	int x = 0;   //矩阵第一行
	int y = *py - 1; //矩阵第三列
	while (x <= (*px - 1) && y >= 0){  //在矩阵范围内
		if (arr[x][y] == key){   //arr[x][y]就是矩阵右上角元素
			*px = x;
			*py = y;
			return 1;
		}
		else if (arr[x][y] > key){
			y--;
		}
		else{
			x++;
		}
	}
	return 0;
}

int main()
{
	int arr[][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int row = 3;
	int col = 3;
	printf("请输入你要找的数字：");
	int key = 0;
	scanf("%d", &key);
	int ret = Find_Num(arr, &row, &col, key);//传行与列的地址
	if (ret){
		printf("找到了数字%d,其坐标为%d %d\n", key, row+1, col+1);//直接获取row与col
	}
	else{
		printf("矩阵中没有数字%d\n", key);
	}
	system("pause");
	return 0;
}

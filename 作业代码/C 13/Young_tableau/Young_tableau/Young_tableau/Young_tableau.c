////���Ͼ���
//
#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int Find_Num(int arr[][3], int *px, int *py, int key)
{
	int x = 0;   //�����һ��
	int y = *py - 1; //���������
	while (x <= (*px - 1) && y >= 0){  //�ھ���Χ��
		if (arr[x][y] == key){   //arr[x][y]���Ǿ������Ͻ�Ԫ��
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
	printf("��������Ҫ�ҵ����֣�");
	int key = 0;
	scanf("%d", &key);
	int ret = Find_Num(arr, &row, &col, key);//�������еĵ�ַ
	if (ret){
		printf("�ҵ�������%d,������Ϊ%d %d\n", key, row+1, col+1);//ֱ�ӻ�ȡrow��col
	}
	else{
		printf("������û������%d\n", key);
	}
	system("pause");
	return 0;
}

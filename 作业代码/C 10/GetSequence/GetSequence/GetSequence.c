#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)

void GetSequence(int value)
{
	int a[32] = { 0 };
	int count = 0;
	int i = 0;
	while (value){
		a[i++] = value % 2;
		value /= 2;
		count++;
	}
	printf("其二进制序列为; ");
	for (i = count; i >= 0; i--){
		printf("%d", a[i]);
	}
	printf("\n");
	printf("其二进制序列中所有的奇数位： ");
	for (i = count; i >= 0; i = i - 2){
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("其二进制序列中所有的偶数位： ");
	for (i = count - 1; i >= 0; i = i - 2){
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main()
{
	int value = 0;
	printf("请输入：");
	scanf("%d", &value);
	GetSequence(value);
	system("pause");
	return 0;
}
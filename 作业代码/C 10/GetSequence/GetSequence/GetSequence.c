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
	printf("�����������Ϊ; ");
	for (i = count; i >= 0; i--){
		printf("%d", a[i]);
	}
	printf("\n");
	printf("����������������е�����λ�� ");
	for (i = count; i >= 0; i = i - 2){
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("����������������е�ż��λ�� ");
	for (i = count - 1; i >= 0; i = i - 2){
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main()
{
	int value = 0;
	printf("�����룺");
	scanf("%d", &value);
	GetSequence(value);
	system("pause");
	return 0;
}
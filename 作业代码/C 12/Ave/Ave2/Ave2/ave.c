#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996
int Ave(int a, int b)
{
	int ret = 0;
	ret = (a & b) + ((a ^ b) >> 1);
	return ret;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("Please input two number£º");
	scanf("%d %d", &a, &b);
	int ave = Ave(a, b);
	printf("%d\n", ave);
	system("pause");
	return 0;
}
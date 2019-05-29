#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996
int Ave(int a, int b)
{
	int ret = 0;
	int res = 0;
	a > b ? a : b;
	ret = (a - b) / 2;
	res = b + ret;
	return res;
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
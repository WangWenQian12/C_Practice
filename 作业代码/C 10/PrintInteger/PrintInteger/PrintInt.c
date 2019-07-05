#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

PrintInt(int a)
{
	if (a > 10){
		PrintInt(a / 10);
	}
	printf("%d ", a % 10);
	
}

int main()
{
	int a = 0;
	printf("«Î ‰»Î£∫");
	scanf("%d", &a);
	PrintInt(a);
	system("pause");
	return 0;
}
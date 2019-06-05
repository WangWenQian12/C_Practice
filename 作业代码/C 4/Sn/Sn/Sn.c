#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int main()
{
	int sum = 0; 
	int A = 0; 
	int i = 0;
	int a = 0; 
	printf("ÇëÊäÈëÊı×Öa£º");
	scanf("%d",&a);
	for (i = 0; i < 5; i++){
		A = A * 10 + a;
		sum = sum + A;
	}
	printf("%d\n",sum);
	system("pause");
	return 0;
}
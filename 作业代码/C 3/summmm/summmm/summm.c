#include<stdio.h>
#include<windows.h>

int main()
{
	int i; double sum = 0;
	int m = 1;
	for (i = 1; i <= 100; i++){
		sum = sum + (1.0 / i)*m;
		m = -m;
	}
	printf("1/1 - 1/2 + 1/3 - 1/4 + бнбн + 1/99 - 1/100 = %f\n", sum);
	system("pause");
	return 0;
}
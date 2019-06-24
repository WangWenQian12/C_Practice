//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和.
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
#include<stdio.h>                                
#include<windows.h>
#pragma warning(disable:4996)

int DigitNum(int n)
{
	int m = 0;
	int sum = 0;
	if (n > 0){
		m = n %10;
		n = n  / 10;
		sum = m + DigitNum(n);
	}	
	return sum;
}

int main()
{
	int n = 0;
	printf("请输入一个非负整数：");
	scanf("%d", &n);	
	DigitNum(n);
	int ret = DigitNum(n);
	printf("sum = %d\n", ret);
	system("pause");
	return 0;
}
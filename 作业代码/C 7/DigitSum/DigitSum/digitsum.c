//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��.
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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
	printf("������һ���Ǹ�������");
	scanf("%d", &n);	
	DigitNum(n);
	int ret = DigitNum(n);
	printf("sum = %d\n", ret);
	system("pause");
	return 0;
}
#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int countone(unsigned int n)
{
	int count = 0;
	while (n){
		if (n % 2 == 1){
			count++;
		}
		n /= 2;
		}
	return count;
}

int main()
{
	int n = 0;
	int count = 0;
	printf("请输入数字n:");
	scanf("%d", &n);
	countone(n);
	int ret = countone(n);
	printf("%d的二进制中1的个数为%d.\n",n,ret);
	system("pause");
	return 0;

}
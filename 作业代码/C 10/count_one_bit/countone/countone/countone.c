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
	printf("����������n:");
	scanf("%d", &n);
	countone(n);
	int ret = countone(n);
	printf("%d�Ķ�������1�ĸ���Ϊ%d.\n",n,ret);
	system("pause");
	return 0;

}
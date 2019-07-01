#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int CompareBits(int m, int n)
{
	int count = 0;
	while (m || n){
		if ((m % 2) != (n % 2)){
			count++;
		}
		m >>= 1;
		n >>= 1;
	}
	return count;
}

int main()
{
	int m = 0;
	int n = 0;
	printf("请输入你要比较的数字m和n：");
	scanf("%d %d", &m, &n);
	int ret = CompareBits(m, n);
	printf("%d 和 %d 有 %d 个比特位不同 \n",m, n, ret);
	system("pause");
	return 0;
}
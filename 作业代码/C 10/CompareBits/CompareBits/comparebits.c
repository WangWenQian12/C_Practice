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
	printf("��������Ҫ�Ƚϵ�����m��n��");
	scanf("%d %d", &m, &n);
	int ret = CompareBits(m, n);
	printf("%d �� %d �� %d ������λ��ͬ \n",m, n, ret);
	system("pause");
	return 0;
}
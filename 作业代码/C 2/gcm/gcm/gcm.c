#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)   //��vs2013����������scanf�����ı���

int gcd(int m, int n)
{
	while (m * n != 0){
	if (m > n){
		m -= n;
	}
	else if (n > m){
		n -= m;
	}
	else{
		break;
	}
}
	return m;
}


int main()
{
	int m, n;
	printf("Enter the two numbers:");
	scanf("%d %d", &m, &n);
	printf("%d\n", gcd(m, n));
	system("pause");
	return 0;

}
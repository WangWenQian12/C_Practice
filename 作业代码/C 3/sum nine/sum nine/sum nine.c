#include<stdio.h>
#include<windows.h>

int main()
{
	int sum = 0; int i;
	for (i = 1; i <= 100; i++){
		if (i %10==9 ){
			sum++;
		}
		if (i / 10 == 9){
			sum++;
		}
	}
	printf("1-100�����е������а�������9�Ĺ���%d�� ", sum);
	system("pause");
	return 0;
}
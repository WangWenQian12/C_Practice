#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

Multi(int n)
{
	int i = 0; int j = 0;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++){
			printf("%d*%d=%d\t",j,i,j*i);
		}
		printf("\n");
	}

}

int main(){
	int n = 0;
	printf("������Ҫ9*9�˷�������9.��Ҫ12*12�˷���������12.\n");
	printf("�����룺");
	scanf("%d", &n);
	Multi(n);
	system("pause");
	return 0;
}
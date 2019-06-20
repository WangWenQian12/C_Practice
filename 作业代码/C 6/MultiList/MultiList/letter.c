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
	printf("例：需要9*9乘法表，输入9.需要12*12乘法表，请输入12.\n");
	printf("请输入：");
	scanf("%d", &n);
	Multi(n);
	system("pause");
	return 0;
}
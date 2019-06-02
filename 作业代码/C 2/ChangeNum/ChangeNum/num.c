#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

ChangeNum(int *a, int *b){
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}
int main(){
	int a = 0; int b = 0;
	printf("请依次输入a，b的值：");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("before: a:%d  b:%d\n", a, b);
	ChangeNum(&a, &b);
	printf("before: a:%d  b:%d\n", a, b);
	system("pause");
	return 0;
}

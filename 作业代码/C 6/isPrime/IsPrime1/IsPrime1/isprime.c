#include<stdio.h>
#include<windows.h>
#include<math.h>
#pragma warning(disable:4996)

IsPrime(int x)
{
	int i = 0;
	int top = 0;
	top = (int)sqrt(x);
	for (i = 1; i < top; i++){
		if (x%i == 0){
			return 0;
		}
		else{
			return 1;
		}
	}
}

int main(){
	int a = 0;
	printf("请输入一个数字：");
	scanf("%d", &a);
	IsPrime(a);
	if (IsPrime){
		printf("%d是素数\n", a);
	}
	else{
		printf("%d不是素数\n", a);
	}
	system("pause");
	return 0;
}
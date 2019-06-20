#include<stdio.h>
#include<windows.h>
#include<math.h>

int IsPrime(int x)
{
	int i = 2;
	int top = sqrt(x);    //¶Ôx¿ª¸ùºÅ
	for (; i <= top ; i++){
		if (x%i == 0){
			return 0;
		}
		else{
			return 1;
		}
	}
}
int main()
{
	int i = 100;
	for (i = 100; i <= 200; i++){
		if (IsPrime(i) == 1){
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}
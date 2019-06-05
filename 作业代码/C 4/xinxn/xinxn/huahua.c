#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
	int i = 0; int j = 0;
	int count = 1;
	for (; i < 13; i++){
		if (i < 6){
			for (j=0; j < count; j++){
				printf("*");
			}
			count += 2;
			printf("\n");
		}
		else{
			for (j=0; j < count; j++){
				printf("*");
			}
			count -= 2;
			printf("\n");
		}
	}
	system("pause");
	return 0;
}

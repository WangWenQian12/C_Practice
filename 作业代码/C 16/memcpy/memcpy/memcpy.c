#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define N 20

char * my_memcpy(char *des, char *stc, int len)
{
	assert(des);
	assert(stc);
	char *res = des;
	while (len--){
		*des = *stc;
		des++;
		stc++;
	}
	return res;
}

int main()
{
	char arr1[N] = "";
	char arr2[N] = "i am a student";
	my_memcpy(arr1, arr2, 6);
	printf("%s\n",arr1);
	system("pause");
	return 0;
}
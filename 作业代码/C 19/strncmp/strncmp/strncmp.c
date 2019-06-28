#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define N 20

int my_strncmp(const char *des, const char *stc, int n)
{
	assert(des);
	assert(stc);
	char str1[N] = "";
	char str2[N] = "";
	int i = 0;
	for (i = 0; i<n; i++){
		str1[i] = *des++;
		str2[i] = *stc++;
	}
	char *res = str1;
	char *ret = str2;
	if (*res - *ret>0){
		return 1;
	}
	if (*res - *ret<0){
		return -1;
	}
	else{
		return 0;
	}
}

int main()
{
	const char *arr1 = "abcdef";
	const char *arr2 = "abcdeg";
	int n = 3;
	int ret = my_strncmp(arr1, arr2, n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
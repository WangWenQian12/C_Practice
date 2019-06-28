#include<stdio.h>
#include<stdlib.h>
#define N 20

void my_strncmp(char *str1, const char *str2,int n)
{
	char *ret = str1;
	int i = 0;
	for (i = 0; i < n; i++){
		*str1 = *str2;
		str1++;
		str2++;
	}
}

int main()
{
	char arr1[N] = { 0 };
	const char *arr2 = "abcdef";
	int n = 5;
	my_strncmp(arr1, arr2, n);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}
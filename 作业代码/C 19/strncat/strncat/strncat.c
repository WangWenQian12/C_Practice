#include<stdio.h>
#include<stdlib.h>
#define N 20

void my_strncat(char *str1, const char*str2, int n)
{
	char *ret = str1;
	while (*str1 != '\0'){
		str1++;
	}
	int i = 0;
	for (i = 0; i < n; i++){
		*str1 = *str2;
		str1++;
		str2++;
	}
}

int main()
{
	char arr1[N] = "abcd";
	const char *arr2 = "efgh";
	int n = 3;
	my_strncat(arr1, arr2, n);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}
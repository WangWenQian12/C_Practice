#include<stdio.h>
#include<windows.h>
#include<assert.h>

int strcmp(const char *str1, const char *str2)
{
	assert(str1);
	assert(str2);
	while (*str1 && (*str1==*str2)){
		str1++;
		str2++;
	}
	if ((*(unsigned char *)str1) > (*(unsigned char *)str2))
		return 1;
	else if ((*(unsigned char *)str1) < (*(unsigned char *)str2))
		return -1;
	else
		return 0;
}

int main()
{
	char *str1 = "abcd";
	char *str2 = "abcdef";
	int ret = strcmp(str1, str2);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
#include<stdio.h>
#include<stdlib.h>

char * my_strchr(const char * str, char c)
{
	while (*str != '\0'&& *str != c){
		str++;
	}
	return str;
}

int main()
{
	char arr[] = "student";
	char c = 'u';
	char *ret = my_strchr(arr, c);
	printf("%s\n", arr);
	system("pause");
	return 0;
}
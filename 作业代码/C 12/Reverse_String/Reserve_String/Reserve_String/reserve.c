#include<stdio.h>
#include<windows.h>

void Reserve_String(char *start,char *end)
{
	if (*start != ' ' && *end != ' '){
		while (start < end){
			char tmp = *start;
			*start = *end;
			*end = tmp;
			*start++;
			*end--;
		}
	}
}
void Reserve_Words(char *arr,int len)
{
	char *p = arr;
	while (*p){
		char *start = p;
		while (*p != ' ' && *p != '\0'){
			p++;
		}
		Reserve_String(start, p - 1);
		while (*p == ' '){
			p++;
		}
	}
}
int main()
{
	char arr[] = "student a am I";
	int len = sizeof(arr) / sizeof(arr[0])-1;
	char *start = arr;
	char *end = arr + len - 1;
	Reserve_String(start, end);
	printf("%s\n", arr);
	Reserve_Words(arr, len);
	printf("%s\n", arr);
	system("pause");
	return 0;
}
#include<stdio.h>
#include<windows.h>
#include<assert.h>
#pragma warning(disable:4996)

void revolve_string(char *str, int k)
{
	if (k > 0 && k < strlen(str)){
		while (k){
			char *p = str;
			char tmp = *p;
			while (*(p + 1)){
				*p = *(p + 1);
				p++;
			}
			*p = tmp;
			k--;
		}
	}
}

int main()
{
	char a[10] = "abcde";
	int k = 0;
	printf("ÄãÒª×óÒÆ¼¸Î»£º");
	scanf("%d", &k);
	revolve_string(a, k);
	printf("%s\n", a);
	system("pause");
	return 0;
}
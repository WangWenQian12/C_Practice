#include<stdio.h>
#include<windows.h>
#include<assert.h>

char* my_strstr(const char *str1, const char *str2)
{
	assert(str1);
	assert(str2);
	char *ret = (char *)str1;
	char *res = (char *)str2;
	while (*ret){
		char cp = (char *)str1;
		if (*ret == *res && *res != '\0'){
			ret++;
			res++;
		}
		if (*ret == '\0'){
			return NULL;
		}
		if (*res == "\0"){
			return cp;
		}
		ret++;
	}
}

int main()
{
	char *str1 = "question";
	char *str2 = "tion";
	char *ret = my_strstr(str1, str2);
	printf("%p\n",ret );
	system("pause");
	return 0;
}
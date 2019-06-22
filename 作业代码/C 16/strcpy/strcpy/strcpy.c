#include<stdio.h>
#include<windows.h>
#include<assert.h>

char* my_strcpy(char *des, char const *stc)
{
	assert(des != NULL);
	assert(stc != NULL);
	char* res = des;
	while (*stc){
		*des = *stc;
		stc++;
		des++;
	}
	return res;
}

int main()
{
	char str1[100] = { 0 };
	char *str2 = "i am wangwenqian.";
	my_strcpy(str1, str2);
	printf("%s\n", str1);
	system("pause");
	return 0;
}
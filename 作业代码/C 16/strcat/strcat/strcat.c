#include<stdio.h>
#include<windows.h>
#include<assert.h>

char* my_strcat(char *des, char const *stc)
{
	char* ret = des;
	assert(des != NULL);
	assert(stc != NULL);
	while (*des){
		des++;
	}
	while (*stc){
		*des = *stc;
		des++;
		stc++;
	}
	return ret;
}

int main()
{
	char str1[100] = "abc";
	char *str2 = "cdefg";
	my_strcat(str1, str2);//str1Êµ¼Ê´«Ö·
	printf("%s\n", str1);
	system("pause");
	return 0;
}
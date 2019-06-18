#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

void reverse(char *left,char *right)
{
	assert(*left);
	assert(*right);
	while (left < right){
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void revolve_string(char *str, int k,int len)
{
	assert(*str);
	char *p = str;
	while (k){
		p = str + 1;
		k--;
	}
	reverse(str, p);
	reverse(p + 1, str + len - 1);
	reverse(str, str + len - 1);
}

int judge_string(char *str1, char *str2,int len)
{
	int len1 = sizeof(str1);
	int len2 = sizeof(str2);
	if (len1 != len2){
		return 0;
	}
	while (len1){
		revolve_string(str1, 1,len);
		if (strcmp(str1, str2) == 0){
			return 1;
		}
		len1--;
	}
	return 0;
}


int main()
{
	char a[] = "ABCD";
	char b[] = "CDAB";
	int len = sizeof(a) / sizeof(a[0]) - 1;
	revolve_string(a, 2,len);
	int ret = judge_string(a, b,len);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
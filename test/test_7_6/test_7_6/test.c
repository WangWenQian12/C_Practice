#include<stdio.h>
#include<stdlib.h>

//1.添加联系人信息
//2.删除指定联系人信息
//3.查找指定联系人信息
//4.修改指定联系人信息
//5.显示所有联系人信息
//6.清空所有联系人
//7.以名字排序所有联系人
//8.保存联系人到文件
//9.加载联系人


int MyStrcmp(const char *str1, const char *str2)
{
	while (*str1 == *str2){
		if (*str1 == '\0'){
			return 0;
		}
		str1++;
		str2++;
	}
	int ret = str1 - str2;
	if (ret > 0){
		return 1;
	}
	else{
		return -1;
	}
}

int MyStrncmp(const char *str1, const char *str2,int count) 
{

}
int main()
{
	const char *str1 = "abcdef";
	const char *str2 = "abcdeg";
	int ret = MyStrcmp(str1, str2);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
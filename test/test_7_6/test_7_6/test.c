#include<stdio.h>
#include<stdlib.h>

//1.�����ϵ����Ϣ
//2.ɾ��ָ����ϵ����Ϣ
//3.����ָ����ϵ����Ϣ
//4.�޸�ָ����ϵ����Ϣ
//5.��ʾ������ϵ����Ϣ
//6.���������ϵ��
//7.����������������ϵ��
//8.������ϵ�˵��ļ�
//9.������ϵ��


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
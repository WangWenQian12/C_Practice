#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)
#define N 20

void Merge_string(char *str)
{
	str = strncat(str, str, strlen(str));
}

int Judge_string(char *str1, char *str2)
{
	Merge_string(str1);
	if (strstr(str1, str2) != NULL)
		return 1;
	else
		return 0;
}
int main()
{
	char arr1[N];
	char arr2[N];
	printf("请输入初始字符串：");
	scanf("%s", &arr1);
	printf("请输入要查找的左旋之后的字符串：");
	scanf("%s", &arr2);
	int res = Judge_string(arr1, arr2);
	if (res == 1){
		printf("是他的字串噢！\n");
	}
	else{
		printf("哎呀，不是其字串！\n");
	}
	printf("%d", res);
	system("pause");
	return 0;
}





//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#pragma warning(disable:4996)
//#define N 11
// 
//void Merge_string(char *arr)
//{
//	int i = 0;
//	for (i = 0; i < N - 5; i++){
//		arr[i + 5] = arr[i];
//		arr[10] = '\0';
//	}
//}
//
//int Judge_string(char *str1, char *str2)
//{
//	Merge_string(str1);
//	char *p = str1;
//	printf("%s\n", str1);
//	//char *q = NULL;
//	char stc[N];
//	while (p != NULL){
//		while (*p != *str2){
//			p++;
//		}
//		char *tmp = p;
//		int i = 0;
//		for (i = 0; i < 5; i++){
//			stc[i] = *p;
//			p++;
//		}
//		stc[i] = '\0';
//		int ret = strcmp(stc, str2);
//		if (ret == 0)
//			return 1;
//		else
//			p = tmp;
//		    p++;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	char arr1[N];
//	char arr2[N];
//	printf("请输入初始字符串：");
//	scanf("%s", &arr1);
//	printf("%s\n",arr1);
//	printf("请输入要查找的左旋之后的字符串：");
//	scanf("%s", &arr2);
//	printf("%s\n", arr2);
//	int res = Judge_string(arr1, arr2);
//	printf("%d\n", res);
//	system("pause");
//	return 0;
//}



#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#pragma warning(disable:4996)

void reverse(char *left, char *right)
{
	while (left < right){
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void revolve_string(char *str, int k)
{
	//�����Լ��
	assert(str != NULL&&k < strlen(str));//debug
	/*if (str == NULL || k>strlrn(str)){
		return;
	}*/
	int len = strlen(str);
	reverse(str, str + k - 1);
	reverse(str + k, str + len - 1);
	reverse(str, str + len - 1);
}

int is_revolve_string(char *str1, const char *str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	assert(str1 != NULL&&str2 != NULL && (len1 == len2));
	int i = 0;
	for (i = 0; i < len1; i++){
		revolve_string(str1, 1);
		if (strcmp(str1, str2) == 0){
			return 1;
		}
	}
	return 0;
}

//1.����������������Ľ��Ϊ���������������Ľ��
//2.����������д������ҵĵ�һ��Ϊ1�ı���λ����Ϊpos
//3. �ٽ������е�ÿ��Ԫ�ض�����posλ��1��������ʹposλ��ͬ��Ԫ�طֵ�һ��

void Func(int *arr, int len, char *px, char *py)
{
	int i = 0;
	int num = 0;
	int pos = 0;
	for (i = 0; i < len; i++)
	{
		num ^= arr[i];
	}
	//�������Ľ������ŵ���num
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	//�ҵ���num �Ĵ����������ĵ�posλΪ1

	for (i = 0; i < len; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			*px = *px ^ arr[i];
		}
		else
		{
			*py = *py ^ arr[i];
		}
	}

	//int i = 0;
	//int num = 0;
	//int pos = 0;
	//for (i = 0; i < len; i++)
	//{
	//	num ^= arr[i];
	//}
	////�������Ľ������ŵ���num
	//for (i = 0; i < 32; i++){
	//	if (((num>>i) & 1) == 1){
	//		pos = i ;
	//		break;
	//	}
	//}//�ҵ���num�Ĵ�������ĵ�һλΪ1�ı���λ
	//for (i = 0; i < len; i++){
	//	if ((arr[i] >> pos) & 1){
	//		*px ^= arr[i];
	//	}
	//	else{
	//		*py ^= arr[i];
	//	}
	//}
}

int main()
{
	int arr[] = { 1, 3, 2, 4, 1, 5, 3, 4, 5, 9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int x = 0;
	int y = 0;
	Func(arr, len, &x, &y);
	printf("%d,%d\n", x, y);



	/*int arr[] = { 1,2,3,4,5,3,2,1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int x = 0; int y = 0;
	Func(arr, len, &x, &y);
	printf("%d,%d\n", x, y);*/

	//2.char str1[] = "abcdef";
	//const char *str2 = "defabc";
	//int ret = is_revolve_string(str1, str2);
	//if (ret == 1){
	//	printf("find!\n");
	//}
	//else{
	//	printf("not find!\n");
	//}


	//1.char str[] = "abcdef";
	///*revolve_string(str, 3);
	//printf("%s\n", str);*/
	system("pause");
	return 0;
}
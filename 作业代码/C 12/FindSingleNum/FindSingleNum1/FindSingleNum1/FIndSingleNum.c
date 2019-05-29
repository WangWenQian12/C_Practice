//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。请找出这个数字。（使用位运算）

#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int findsinglenum(int arr[], int len)
{
	int i = 0;
	int ret = arr[0];
	for (i = 1; i < len; i++){
		ret = ret ^ arr[i];
	}
	return ret;
}

int main()
{
	int arr[100] = { 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	printf("请输入你要输入的数据的个数：");
	scanf("%d", &n);
	printf("请输入一组数据：");
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	int ret = findsinglenum(arr, n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}



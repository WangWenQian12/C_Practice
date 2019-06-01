#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int FindTwoSingleNum(int *arr, int *px, int *py, int len)
{
	int i = 0;
	int n = 0;
	for (i = 0; i < len; i++){
		n ^= arr[i];
	}
	n = n & ((n - 1) ^ -1);//找出第一个非零的比特位
	for (i = 0; i < len; i++){
		if (arr[i] & n){
			*px ^= arr[i];
		}
		else{
			*py ^= arr[i];
		}
	}
}

int main()
{
	int i = 0;
	int len = 0;
	int arr[100] = { 0 };
	printf("请输入数组长度：");
	scanf("%d", &len);
	printf("请输入数组元素：");
	for (i = 0; i < len; i++){
		scanf("%d", &arr[i]);
	}
	int x = 0;
	int y = 0;
	FindTwoSingleNum(arr,&x,&y,len);
	printf("%d %d\n", x, y);
	system("pause");
	return 0;
}
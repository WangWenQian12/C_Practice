#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

void ArraySort(int *arr, int n)
{
	int *left = arr;
	int *right = arr + n - 1;
	while (left<right){
		while (*left % 2 == 1){
			left++;
		}
		while (*right % 2 == 0){
			right--;
		}
		if (left < right){
			int tmp = *left;
			*left = *right;
			*right = tmp;
		}
	}

}

PrintArray(int *arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++){
		printf("%d ", *(arr + i));
	}
	printf("\n");
}

int main()
{
	int i = 0;
	int n = 0;
	printf("���������鳤�ȣ�");
	scanf("%d", &n);
	int arr[100] = { 0 };
	printf("��������������Ԫ�أ�");
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	ArraySort(arr, n);
	//printf("%d \n", arr);
	PrintArray(arr, n);
	system("pause");
	return 0;
}
#include<stdio.h>
#include<windows.h>

void changearray(int arr1[], int arr2[])
{
	int i = 0; int temp = 0;
	for (i = 0; i <5; i++)
	{
		arr1[i] = arr1[i] ^ arr2[i];
		arr2[i] = arr1[i] ^ arr2[i];
		arr1[i] = arr1[i] ^ arr2[i];
	}

}
int main()
{
	int arr1[5] = { 2, 7, 12, 5, 9 };
	int arr2[5] = { 9, 13, 23, 6, 1 };
	int i, j;
	printf("before arr1: ");
	for (i = 0; i < 5; i++){
		printf("%d ", arr1[i]);		
	}
	printf("\n");
	printf("before arr2: ");
	for (j = 0; j < 5; j++){
		printf("%d ", arr2[j]);
	}
	printf("\n");
	changearray(arr1, arr2);
	int m; int n;
	printf("after  arr1: ");
	for (m = 0; m < 5; m++){
		printf("%d ", arr1[m]);
	}
	printf("\n");
	printf("after  arr2: ");
	for (n = 0; n < 5; n++){
		printf("%d ", arr2[n]);
	}
	printf("\n");

	system("pause");
	return 0;
}
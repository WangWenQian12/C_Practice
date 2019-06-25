#include<stdio.h>
#include<stdlib.h>

void FindTwoSingleNum(int *arr, int len, int *px, int *py)
{
	int i = 0;
	int num = 0;
	int pos = 0;
	for (i = 0; i < len; i++)
	{
		num ^= arr[i];
	}
	for (i = 0; i < 32; i++)
	{
		if ((arr[i] >> 1) & 1)
		{
			pos = i;
			break;
		}
	}
	for (i = 0; i < len; i++)
	{
		if ((arr[i] >> pos) & 1)
		{
			*px ^= arr[i];
		}
		else
		{
			*py ^= arr[i];
		}
	}
}


int main()
{
	int arr[] = { 1, 2, 4, 5, 6, 4, 2, 1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int x = 0;
	int y = 0;
	FindTwoSingleNum(arr, len, &x, &y);
	printf("%d,%d\n", x, y);
	system("pause");
	return 0;
}
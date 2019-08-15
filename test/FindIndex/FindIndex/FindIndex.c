#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

void getIndex(int arr[], int len,int k)
{
	int left = 0;
	int right = len - 1;
	while (arr[left]<arr[right]){
		if (arr[left]+arr[right] > k){
			right--;
		}
		else if (arr[left] + arr[right]< k){
			left++;
		}
		else{
			printf("相加为%d的俩个元素的下标为%d和%d\n",k, left, right);
			break;
		}
	}
}

int main()
{
	int i = 0;
	int n = 0;
	int k = 0;
	printf("请输入数组个数：");
	scanf("%d", &n);
	int arr[20];
	printf("请输入数组：");
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("请输入k值：");
	scanf("%d", &k);
	getIndex(arr, n,k );
	system("pause");
	return 0;
}
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
			printf("���Ϊ%d������Ԫ�ص��±�Ϊ%d��%d\n",k, left, right);
			break;
		}
	}
}

int main()
{
	int i = 0;
	int n = 0;
	int k = 0;
	printf("���������������");
	scanf("%d", &n);
	int arr[20];
	printf("���������飺");
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("������kֵ��");
	scanf("%d", &k);
	getIndex(arr, n,k );
	system("pause");
	return 0;
}
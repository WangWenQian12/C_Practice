//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ����ҳ�������֡���ʹ��λ���㣩

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
	printf("��������Ҫ��������ݵĸ�����");
	scanf("%d", &n);
	printf("������һ�����ݣ�");
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	int ret = findsinglenum(arr, n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}



#include<stdio.h>
#include<stdlib.h>

int int_cmp(const void *px,const void *py)
{
	if (*(char*)px > *(char*)py){
		return 1;
	}
	else if (*(char*)px < *(char*)py){
		return -1;
	}
	else{
		return 0;
	}
}   

void swap(char *x,char *y,int size)   //一个字节一个字节交换
{
	while (size--){
		*x ^= *y;
		*y ^= *x;
		*x ^= *y;
		x++;
		y++;
	}
}

void my_qsort(void *base, int len, int size, int(*int_cmp)(const void*, const void*))
{
	int i = 0;
	int flag = 0;
	for (i = 0; i < len - 1; i++){
		int j = 0;
		for (j = 0; j < len - 1 - i; j++){
			if ((int_cmp((char*)base + j*size, (char*)base + (j + 1)*size)) > 0){
				flag = 1;
				int_cmp((char*)base + j*size, (char*)base + (j + 1)*size);
			}
		}
		if (flag == 1){
			break;
		}
	}
}

int main()
{
	int arr[] = { 0, -2, -1, 8, 3, 45, 22, 67, 89, 100 };
	int len = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, len, sizeof(int), int_cmp);
	int i = 0;
	for (i = 0; i < len; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
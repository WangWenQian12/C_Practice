#include<stdio.h>
#include<windows.h>
#include<assert.h>
#pragma warning(disable:4996)

void adverse(char *left, char *right)
{
	assert(*left);
	assert(*right);
	char tmp = 0;
	while (left < right){
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void left_revolve(char *arr, int k,int len)
{
	char *p = arr;
	while (k>0){
		p=arr+1;
		k--;
	}
	/*int i = 0;
	while (i < k){
		p = arr + i;
		i++;
	}*/
	adverse(arr, p);//bacd
	adverse(p + 1, arr + len - 1);//badc
	adverse(arr, arr + len - 1);//cdab

}
int main()
{
	char a[] = "ABCD";
	int len = sizeof(a) / sizeof(a[0])-1;
	int k = 0;
	printf("×óÒÆ¼¸¸ö×Ö·û£¿");
	scanf("%d", &k);
	left_revolve(a, k ,len);
	printf("%s\n", a);
	system("pause");
	return 0;
}
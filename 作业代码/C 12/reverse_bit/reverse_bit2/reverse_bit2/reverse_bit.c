#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	int ret = 0;
	for (i = 0; i < 32; i++){
		if ((value >> i) & 1){
			ret |= ((value >> i) & 1) << (31 - i);
		}
	}
	return ret;
}

int main()
{
	int value = 0;
	printf("please enter a value:");
	scanf("%d", &value);
	//reverse_bit(value);
	int res = reverse_bit(value);
	printf("%u\n", res);
	system("pause");
	return 0;
}
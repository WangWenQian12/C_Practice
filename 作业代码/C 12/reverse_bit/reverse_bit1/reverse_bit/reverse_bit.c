//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
#include<stdio.h>
#include<windows.h>
#include<math.h>
#pragma warning(disable:4996)

unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	int ret = 0;
	int sum = 0;
	for (i = 0; i < 32; i++){
		ret = ((value >> i) & 1)*pow(2, 31 - i);
		sum += ret;
	}
	return sum;
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


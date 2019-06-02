#include<stdio.h>
#include<windows.h>

swap(int *x, int *y)
{
	int tmp;
	printf("before: x: %d  y: %d \n", *x, *y );
	printf("before: x: %p  y: %p \n", &(*x), &(*y));
	tmp = *x;
	*x = *y;
	*y = tmp;
	printf("after : x: %d  y: %d \n", *x, *y);
	printf("after : x: %p  y: %p \n", &(*x),&(*y));
}
 
int main()
{
	int a = 20;
	int b = 30;
	printf("before: a: %d  b: %d \n", a, b);
	//printf("before: a: %p  b: %p \n", &(a), &(b));
	swap(&a, &b);
	printf("after : a: %d  b: %d \n", a, b);
	//printf("after : a: %p  b: %p \n", &(a), &(b));
	system("pause");
	return 0;
}
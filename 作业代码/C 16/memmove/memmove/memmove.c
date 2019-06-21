#include<stdio.h>
#include<stdlib.h>
#define N 20

char *my_memmove(char *des, char *str, int len)
{
	void *ret = des;
	//ÎŞÄÚ´æÖØµş
	if (des <= str || des >= str + len){  
		while (len--){
			*des = *str;
			des++;
			str++;
		}
	}
	else{
		des += (len - 1);
		str += (len - 1);
		while (len--){
			*des = *str;
			des--;
			str--;
		}
	}
	return ret;
}

int main()
{
	char arr1[N] = "123456789";
	//char arr2[N] = "a xiaohai";
	my_memmove(arr1+3, arr1, 5);
	printf("%s\n", arr1);
	system("pause");
	return 0;
} 

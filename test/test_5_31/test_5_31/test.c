#include<stdio.h>
#include<windows.h>
#include<math.h>

/*5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
A选手说：B第二，我第三；
B选手说：我第二，E第四；
C选手说：我第一，D第二；
D选手说：C最后，我第三；
E选手说：我第四，A第一；
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次*/

//void Function()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	for (a = 1; a <= 5; a++){
//		for (b = 1; b <= 5; b++){
//			for (c = 1; c <= 5; c++){
//				for (d = 1; d <= 5; d++){
//					for (e = 1; e <= 5; e++){
//						if ()
//					}
//				}
//			}
//		}
//	}
//
//}

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//void FindMurder()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++){
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') = 3){
//
//		}
//	}
//}

//杨辉三角
//#define ROW 10
//void Yang()
//{
//
//}

//翻转数字（二进制）
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++){
//		sum += ((value >> i) & 1)*pow(2, 31 - i);
//	}
//	return sum;
//}

//不能使用< > = if 比较俩个数字的大小（位运算）
//(a - b) >> 31 ? -1 : (a - b ? 1; 0); //a-b为负数时右移31位此时检验最高位 若为真返回-1 为假时判断a-b 若a>b返回0 a=b返回0
//int Max(int a, int b)
//{
//	return (a - b) >> 31 ? -1 : (a - b ? 1 : 0);
//}

//逆置字符串

//int MyStrlen(char *str)
//{
//	int count = 0;
//	while (*str == '\0'){
//		count++;
//		str++;
//	}
//	return count;
//}

//ArraySort(int *arr,int len)
//{
//	int left = 0;
//	int right = len - 1;
//	whlie(left < right){
//		while (left < right && arr[left] % 2 == 1){
//			left++;
//		}
//		while (left < right && arr[right] % 2 == 0){
//			right--;
//		}
//		if (left < right){
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
	/*int *left = arr;
	int *right = arr + len - 1;
	while (left < right){
		while (*left%2 != 0){
			left++;
		}
		while (*right % 2 == 0){
			right--;
		}
		if (left < right){
			int tmp = *left;
			*left = *right;
			*right = tmp;
		}
	}*/
//}

//yang
//int Yang(int arr[][3], int *px, int *py, int key)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y >= 0){
//		if (arr[x][y] == key){
//			*px = x;
//			*py = y;
//			return 1;
//		}
//		else if (arr[x][y] > key){
//			y--;
//		}
//		else{
//			x++;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int x = 3;
//	int y = 3;
//	int key = 5;
//	int ret = Yang(arr, &x, &y, key);
//	if (ret){
//		printf("%d %d\n", x, y);
//	}
//	else{
//		printf("NO\n");
//	}
//	system("pause");
//	return 0;
//}



//定义数组长度必须为常量 
//const int a = 10;  //常变量
//int arr[a] = { 0 };  //error

//数组在编译时确定大小
//数组在运行时分配内存
//数组最多分配1M/2M的内存
//数组分配的内存在栈上

//字符串不可修改
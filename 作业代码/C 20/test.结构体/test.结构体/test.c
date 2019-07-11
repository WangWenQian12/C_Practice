#include<stdio.h>
#include<stdlib.h>

////结构体的定义
//struct stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];
//}x, y;
//
//struct Point
//{
//	int x;
//	int y;
//}p1;         //声明类型的同时定义变量p1
//struct Point p2;     //定义结构体变量p2
//
////初始化
//struct stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//struct stu s = { "wangwenqian", 18, "女" };  //初始化
//
//
////结构体嵌套初始化
//struct Point
//{
//	int x;
//	int y;
//};
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5},NULL };
//
////结构体的自引用
//struct Node
//{
//	int data;
//	struct Node* next;
//};

//位段
struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};

//枚举
enum Day
{
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};

enum Sex
{
	MALE,
	FEMALE,
	SECRET
};


//联合
union Un
{
	char c;
	int i;
};

int main()
{
	struct s1
	{
		char c1;
		int i;
		char c2;
	};
	printf("%d\n", sizeof(struct s1));
	system("pause");
	return 0;
}
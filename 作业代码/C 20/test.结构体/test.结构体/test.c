#include<stdio.h>
#include<stdlib.h>

////�ṹ��Ķ���
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
//}p1;         //�������͵�ͬʱ�������p1
//struct Point p2;     //����ṹ�����p2
//
////��ʼ��
//struct stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//struct stu s = { "wangwenqian", 18, "Ů" };  //��ʼ��
//
//
////�ṹ��Ƕ�׳�ʼ��
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
////�ṹ���������
//struct Node
//{
//	int data;
//	struct Node* next;
//};

//λ��
struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};

//ö��
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


//����
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
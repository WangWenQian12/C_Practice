#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int Fuction(int m, int n)
{
	int tmp = 0;
	int sum = 0;
	int i = 0;
	//迭代法（找递推公式）tmp：变化量  sum：求和量
	for (i = 0; i < n; i++){
		tmp = tmp * 10 + m;
		sum += tmp;
	}
	return sum;
}

//int main()
//{
//	int m = 2;
//	int n = 5;
//	Function(m, n);
//	system("pause");
//	return 0;
//}

/*遍历法
1.数字遍历
for(i=a;i<=b;i++)
i完成了对[a,b]的遍历

2.数组遍历
for(i=0;i<=n;i++)
a[i]完成了对数组a的遍历

3.字符串遍历
for(i=0;str[i];i++)
str[i]完成了对字符串str[i]的遍历

4.数位遍历
for(i=src;i;i/=10)
i/=10完成了对十进制数字src中每一位的遍历  回文

5.链表遍历
for(cur = head;cur;cur=cur->next)
cur是完成了对以head为头的链表的遍历（无头单链表）


6.容器遍历
for(iter=v.begin();iter!=v.end();iter++)


*/



int main()
{
	//判断回文
	//int m = 0, n = 0;
	//scanf("%d %d", &m, &n);
	////int n = 12345;
	//int sum = 0;
	//int i = 0;
	//for (i = m; i; i /= n){
	//	sum = sum * n + i % n;//10是十进制
	//}
	//if (sum == m){
	//	printf("%d在%d进制下是回文数！\n",m,n);
	//}
	

	//可枚举的有理数,sanjiao
	/*int line, pos, count = 0;
	int n;
	scanf("%d", &n);
	for (line = 1; count + line < n; line++){
		count += line;
	}
	pos = n - count;
	printf("%d/%d\n", line + 1 - pos, pos);*/



	//




	system("pause");
	return 0;
}




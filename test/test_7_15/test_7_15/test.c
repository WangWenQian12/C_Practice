#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int Fuction(int m, int n)
{
	int tmp = 0;
	int sum = 0;
	int i = 0;
	//���������ҵ��ƹ�ʽ��tmp���仯��  sum�������
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

/*������
1.���ֱ���
for(i=a;i<=b;i++)
i����˶�[a,b]�ı���

2.�������
for(i=0;i<=n;i++)
a[i]����˶�����a�ı���

3.�ַ�������
for(i=0;str[i];i++)
str[i]����˶��ַ���str[i]�ı���

4.��λ����
for(i=src;i;i/=10)
i/=10����˶�ʮ��������src��ÿһλ�ı���  ����

5.�������
for(cur = head;cur;cur=cur->next)
cur������˶���headΪͷ������ı�������ͷ������


6.��������
for(iter=v.begin();iter!=v.end();iter++)


*/



int main()
{
	//�жϻ���
	//int m = 0, n = 0;
	//scanf("%d %d", &m, &n);
	////int n = 12345;
	//int sum = 0;
	//int i = 0;
	//for (i = m; i; i /= n){
	//	sum = sum * n + i % n;//10��ʮ����
	//}
	//if (sum == m){
	//	printf("%d��%d�������ǻ�������\n",m,n);
	//}
	

	//��ö�ٵ�������,sanjiao
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




//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int Buy_Sodawater(int money, int price)
{
	int empty_bottle = 0;
	int count = 0;
	empty_bottle = money / price;
	count = money / price;
	while (empty_bottle>1){
		count += empty_bottle / 2;
		empty_bottle = empty_bottle / 2 + empty_bottle % 2;
	}
	return count;
}

int main()
{
	int money = 0;
	int price = 0;
	
	printf("�������ܽ�");
	scanf("%d", &money);
	printf("�����뵥�ۣ�");
	scanf("%d", &price);
	int ret = Buy_Sodawater(money, price);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
//20   20         20
//20/2=10   10    10 
//10/2=5     5     5
//4/2=2   2+1=3    2
//2/2=1    1+1=2   1
//2/2=1       1    1
//sum=39

//30/2=15     15    15    
//15/2=7      8      7
//8/2=4       4      4
//4/2=2       2      2
//2/2=1       1      1
//sum=15+10+4=29
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�(murderer!=1)
//B˵����C��(murderer==3)
//C˵����D��(murderer==4)
//D˵��C�ں�˵(murderer!=3)
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

#include<stdio.h>
#include<windows.h>

int main()
{
	int murder = 0;
	for (murder = 'a'; murder <= 'd'; murder++){
		if ((murder != 'a') + (murder == 'c') + (murder == 'd') + (murder != 'c') == 3){
			printf("%c is the murder.\n", murder);
		}
	}
	system("pause");
	return 0;
}
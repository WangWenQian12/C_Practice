#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int main()
{
	char s;
	printf("�����룺\n");
	while ((s = getchar()) != EOF){           //һֱ���ռ�������
		if (s >= 'A' && s <= 'Z'){        //�������ַ�Ϊ��д��ĸת��ΪСд
			s += 32;
			printf("%c", s);
		}
		else if (s >= 'a' && s <= 'z'){    //�������ַ�Ϊ��д��ĸת��ΪСд
			s -= 32;
			printf("%c", s);
		}
		
		else if (s >= '0' && s <= '9'){     //�������ַ�Ϊ���ֲ�����

		}
	}
	system("pause");
	return 0;
}
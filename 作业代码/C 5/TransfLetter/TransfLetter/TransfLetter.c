#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int main()
{
	char s;
	printf("请输入：\n");
	while ((s = getchar()) != EOF){           //一直接收键盘输入
		if (s >= 'A' && s <= 'Z'){        //当输入字符为大写字母转化为小写
			s += 32;
			printf("%c", s);
		}
		else if (s >= 'a' && s <= 'z'){    //当输入字符为大写字母转化为小写
			s -= 32;
			printf("%c", s);
		}
		
		else if (s >= '0' && s <= '9'){     //当输入字符为数字不返回

		}
	}
	system("pause");
	return 0;
}
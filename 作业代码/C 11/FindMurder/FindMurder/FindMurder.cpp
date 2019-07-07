//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。(murderer!=1)
//B说：是C。(murderer==3)
//C说：是D。(murderer==4)
//D说：C在胡说(murderer!=3)
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

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
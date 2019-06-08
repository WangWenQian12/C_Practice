#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#pragma warning(disable:4996)

void menu()
{
	printf("************************\n");
	printf("******** 1.play ********\n");
	printf("******** 0.exit ********\n");
	printf("************************\n");
}
void GuessNumber()
{
	int random_num = rand() % 100 + 1;
	int guess_num = 0;
	while (1){
		printf("请输入你猜的数字：");
		scanf("%d", &guess_num);
		if (guess_num > random_num){
			printf("太大了!\n");
		}
		else if (guess_num < random_num){
			printf("太小了!\n");
		}
		else{
			printf("恭喜你猜对啦!\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			GuessNumber();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入：\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}
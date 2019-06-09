#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
int main()
{
	const char *name = "wangwenqian";
	const char *password = "123456789";
	int count = 3;
	char name_[32];
	char password_[32];
	while (count <= 3){
		printf("请输入用户名：");
		scanf("%s", &name_);
		printf("请输入登陆密码：");
		scanf("%s", &password_);
		if (0 == strcmp(name, name_) && 0 == strcmp(password, password_)){
			printf("登陆成功！\n");
			break;
		}
		else{
			count--;
			if (count <= 0){
				printf("因多次账户与密码不匹配，你的账户已被锁定\n");
				break;
			}
			else{
				printf("账户密码不匹配，你还有%d次机会，请重新输入：\n", count);
			}
		}
	}

	system("pause");
	return 0;
}
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
		printf("�������û�����");
		scanf("%s", &name_);
		printf("�������½���룺");
		scanf("%s", &password_);
		if (0 == strcmp(name, name_) && 0 == strcmp(password, password_)){
			printf("��½�ɹ���\n");
			break;
		}
		else{
			count--;
			if (count <= 0){
				printf("�����˻������벻ƥ�䣬����˻��ѱ�����\n");
				break;
			}
			else{
				printf("�˻����벻ƥ�䣬�㻹��%d�λ��ᣬ���������룺\n", count);
			}
		}
	}

	system("pause");
	return 0;
}
#include"Contact.h"

int main()
{
	volatile int quit = 0;
	int input = 0;
	contact_p ct;
	Load(&ct);
	while (!quit){
		//InitContact(&ct);
		Menu();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			Save(ct);
			printf("Bye!\n");
			quit = 1;
			break;
		case 1:
			AddContact(&ct);
			break;
		case 2:
			DelContact(ct);
			break;
		case 3:
			SearchContact(ct);
			break;
		case 4:
			ModContat(ct);
			break;
		case 5:
			SortContact(ct);
			break;
		case 6:
			ShowContact(ct);
			break;
		case 7:
			ClearContact(ct);
			break;
		default:
			printf("Please enter the true number:");
			break;
		}
	}
	system("pause");
	return 0;
}
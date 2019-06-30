#include "mine.h"

void Menu()
{
	printf("#########################\n");
	printf("#####     1.Play    #####\n");
	printf("#####     2.Exit    #####\n");
	printf("#########################\n");
	printf("Please select:");
}

int main()
{
	int select = 0;
	int quit = 0;
	while (quit!=1){
		Menu();
		scanf("%d", &select);
		switch (select){
		case 1:
			Game();
			break;
		case 2:
			printf("Bye-bye!\n");
			quit = 1;
			break;
		default:
			printf("Select error!Please select again!\n");
			break;
		}
	}
	system("pause");
	return 0;
}
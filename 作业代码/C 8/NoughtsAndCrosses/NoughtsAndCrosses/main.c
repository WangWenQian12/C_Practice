void ShowMenu()
{
	printf("#########################\n");
	printf("######## 1.play #########\n");
	printf("######## 2.exit #########\n");
	printf("#########################\n");
	printf("Please select:");
}
int main()
{
	int select = 0;
	int quit = 0;
	while (!quit){
		ShowMenu();
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			Game();
			break;
		case 2:
			printf("Bye-Bye!\n");
			quit = 1;
			break;
		default:
			printf("Enter error!Please try again:\n");
			break;
		}
	}
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

	int main()
	{
		int i = 0; int j = 0; int s = 0;
		for (i = 1; i <= 9; i++){
			for (j = 1; j <= i; j++){
				s = i*j;
				printf(" %d*%d=%2d\t", j, i, s);
			}

			printf("\n");
		}
		system("pause");

	}


	
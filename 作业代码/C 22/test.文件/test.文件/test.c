//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int n;
	FILE * pFile;
	char buffer[27];

	pFile = fopen("myfile.txt", "w+");
	for (n = 'A'; n <= 'Z'; n++){
		fputc(n, pFile);
	}
	rewind(pFile);
	fread(buffer, 1, 26, pFile);
	fclose(pFile);
	buffer[26] = '\0';
	puts(buffer);
	system("pause");
	return 0;

}



//int main()
//{
//	FILE * pFile;
//	long size;
//
//	pFile = fopen("myfile.txt", "rb");
//	if (pFile == NULL){
//		perror("Error opening file");
//	}
//	else{
//		fseek(pFile, 0, SEEK_END);
//		size = ftell(pFile);
//		fclose(pFile);
//		printf("size of myfile.txt:%ld bytes.\n", size);
//	}
//	system("pause");
//	return 0;
//}



//int main()
//{
//	FILE * pFile;
//	pFile = fopen("example.txt", "wb");
//	fputs("This is an apple.", pFile);
//	fseek(pFile, 9, SEEK_SET);
//	fputs(" sam", pFile);
//	fclose(pFile);
//	system("pause");
//	return 0;
//}



//int main()
//{
//	FILE * pFile;
//	pFile = fopen("myfile.txt", "w");
//	if (pFile != NULL){
//		fputs("fopen example", pFile);
//		fclose(pFile);
//	}
//	system("pause");
//	return 0;
//}
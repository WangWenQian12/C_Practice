#ifndef _TEST_H
#define _TEST_H

#define MAX_NUMBER 1000

#define MAX_NAME 10
#define MAX_SEX 5
#define MAX_TEL 11
#define MAX_ADDRESS

typedef struct Personlnof
{
	char name[MAX_NAME];
	short age;
	char sex[MAX_SEX];
	char tel[MAX_TEL];
	char address[MAX_ADDRESS];

}Personlnfo;

typedef struct Contact
{
	Personlnfo per[MAX_NUMBER];
	int usedSize;
}Con;

void DelContact(Contact *pcon)

#endif 
#ifndef _CONTACT_H_
#define _CONTACT_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

#pragma warning(disable:4996)

#define MAX_NAME 10
#define MAX_SEX 5
#define MAX_TEL 11
#define MAX_ADDRESS 20

#define LIST_DEFAULT 2
#define INC_SIZE 1

#define CT_FILE "contact.bin"

typedef struct Person
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	unsigned int age;
	char tel[MAX_TEL];
	char address[MAX_ADDRESS];

}person_t,*person_p,**person_pp;

typedef struct	Contact
{
	int cap;//容量
	int usedSize;//第几个人
	person_t list[0];//现在通讯录可容纳几个人

}contact_t,*contact_p,**contact_pp;

void Menu();
void InitContact(contact_pp ct_pp);  //
void AddContact(contact_pp ct_pp);

//static int isFull(contact_p ct_p);
//static int Inc(contact_pp ct_pp);

void ShowContact(contact_p ct_p);
void DelContact(contact_p ct_p);
int FindContact(contact_p ct_p, char *name);
void SearchContact(contact_p ct_p);
void ModContat(contact_p ct_p);
//static int person_cmp(const void*, const void*);//参数为要比较的俩个数的地址
void SortContact(contact_p ct_p);
void ClearContact(contact_p ct_p);

int InitFile(contact_pp ct_pp, FILE *fp);
int Load(contact_pp ct_pp);
void Save(contact_p ct_p);


#endif
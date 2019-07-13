#include"Contact.h"

void Menu()
{
	printf("\n");
	printf("*********************************************\n");
	printf("********* 1.Add    ********** 2.Del  ********\n");
	printf("********* 3.Search ********** 4.Mod  ********\n");
	printf("********* 5.Sort   ********** 6.Show ********\n");
	printf("********* 7.Clear  ********** 0.Exit ********\n");
	printf("*********************************************\n");
	printf("Please select:");
}

int InitFile(contact_pp ct_pp, FILE *fp)
{
	contact_p ct_p = (contact_p)malloc(sizeof(contact_t));//结构体指针
	if (ct_p){
		fread(ct_p, sizeof(contact_t), 1, fp);//将结构体指针读入文件
		int _cap = ct_p->cap;
		int size = sizeof(contact_t)+sizeof(person_t)*(ct_p->cap);
		contact_p p = (contact_p)realloc(ct_p, size);//扩容
		if (p){
			ct_p = p;
			fread(ct_p->list, sizeof(person_t)*(ct_p->cap), 1, fp);//把数据读入fp中
			(*ct_pp) = ct_p;
			return 1;
		}
	}
	return 0;
}

int Load(contact_pp ct_pp)
{
	FILE *fp = fopen(CT_FILE, "rb");
	if (NULL == fp){
		printf("Init Contact default!\n");
		InitContact(ct_pp);
		return 1;
	}
	int ret = InitFile(ct_pp, fp);
	fclose(fp);
	return ret;
}

void Save(contact_p ct_p)
{
	FILE *fp = fopen(CT_FILE,"wb");//wb:为了读和写，新建一个新的二进制文件
	if (NULL == fp){
		printf("fopen error!\n");
		return;
	}
	int size = sizeof(contact_t)+(ct_p->cap)*sizeof(person_t);
	fwrite(ct_p, size, 1, fp);//二进制输出
	fclose(fp);
}

void InitContact(contact_pp ct_pp)
{
	*ct_pp = malloc(sizeof(contact_t)+sizeof(person_t)*LIST_DEFAULT);
	if (NULL == (*ct_pp)){
		printf("%d:%s\n", errno, strerror(errno));
		exit(1);
	}
	else{
		(*ct_pp)->cap = LIST_DEFAULT;
		(*ct_pp)->usedSize = 0;
		printf("debug:Init Contact Success!\n");
	}
}

static int IsFull(contact_p ct_p)  
{
	return ct_p->usedSize == ct_p->cap ? 1 : 0;
}

static int Inc(contact_pp ct_pp)
{
	int new_size = malloc(sizeof(contact_t)+((*ct_pp)->cap + INC_SIZE)*sizeof(person_t));
	contact_p p = realloc(*ct_pp, new_size);
	if (!p){
		printf("Inc error!\n");
		return 0;
	}
	p->cap = (*ct_pp)->cap + INC_SIZE;
	*ct_pp = p;
	printf("debug:Inc Contact Success!\n");
}
void AddContact(contact_pp ct_pp)
{
	if (!IsFull(*ct_pp) || Inc(ct_pp)){
		person_p p = &((*ct_pp)->list[(*ct_pp)->usedSize]);
		printf("Enter name:");
		scanf("%s", p->name);
		printf("Enter sex: ");
		scanf("%s", p->sex);
		printf("Enter age: ");
		scanf("%u", &(p->age));
		printf("Enter tel: ");
		scanf("%s", p->tel);
		printf("Enter address: ");
		scanf("%s", p->address);
		((*ct_pp)->usedSize)++;
	}
	else{
		printf("realloc error!\n");
	}
}

void ShowContact(contact_p ct_p)
{
	int i = 0;
	int top = ct_p->usedSize;
	person_p p = ct_p->list;
	printf("\n");
	printf("%-10s %-5s %-5s %-11s %-10s\n", "姓名","性别","年龄","电话","住址");
	for (i = 0; i < top; i++){
		printf("%-10s %-5s %-5u %-11s %-10s\n", p[i].name, p[i].sex, p[i].age, p[i].tel, p[i].address);
	}
	printf("\n");
}

void DelContact(contact_p ct_p)
{
	int i = 0;
	printf("Enter the name of who you want to delete:");
	char NAME[MAX_NAME];
	scanf("%s", &NAME);
	int pos = FindContact(ct_p, NAME);
	if (pos == -1){
		printf("Can not find!Please try again:");
		return;
	}
	else{
		for (i = pos; i < ct_p->usedSize; i++){
			ct_p->list[i] = ct_p->list[i + 1];
		}
		(ct_p->usedSize)--;
		printf("Delete Success!\n");
	}
}

int FindContact(contact_p ct_p, char *name)
{
	char pos = 0;
	person_p p = ct_p->list;
	int i = 0;
	for (i = 0; i < ct_p->usedSize; i++){
		if (strcmp(p[i].name, name)==0){
			return i;
		}
	}
	return -1;
}

void SearchContact(contact_p ct_p)
{
	printf("Enter the name of who you want to search:");
	char NAME[MAX_NAME];
	scanf("%s", &NAME);
	int pos = FindContact(ct_p, NAME);
	if (pos == -1){
		printf("Can not find!Please try again:");
		return;
	}
	else{
		printf("\n");
		printf("%-10s %-5s %-5s %-11s %-10s\n", "姓名", "性别", "年龄", "电话", "住址");
		printf("%-10s % -5s % -5u % -11s % -10s\n", ct_p->list[pos].name, ct_p->list[pos].sex, 
			ct_p->list[pos].age, ct_p->list[pos].tel, ct_p->list[pos].address);
		printf("\n");
	}	
}

void ModContat(contact_p ct_p)
{
	printf("Enter the name of who you want to modify:");
	char NAME[MAX_NAME];
	scanf("%s", &NAME);
	int pos = FindContact(ct_p, NAME);
	if (pos == -1){
		printf("Can not find!Please try again:");
		return;
	}
	printf("Please enter the number you want to modify?\n(1.name 2.sex 3.age 4.tel 5.address)");
	char name[MAX_NAME] = { 0 };
	char sex[MAX_SEX] = { 0 };
	unsigned int age = 0;
	char tel[MAX_TEL] = { 0 };
	char address[MAX_ADDRESS] = { 0 };
	int select = 0;
	scanf("%d", &select);
	switch (select)
	{
	case 1:
		printf("please enter the new name:");
		scanf("%s", name);
		//ct_p->list[pos].name = name;
		strcpy(ct_p->list[pos].name, name);
		printf("Modify Success!\n");
		break;
	case 2:
		printf("please enter the new sex:");
		scanf("%s", sex);
		//ct_p->list[pos].sex = sex;
		strcpy(ct_p->list[pos].sex, sex);
		printf("Modify Success!\n");
		break;
	case 3:
		printf("Please enter the new age:");
		scanf("%d", &age);
		ct_p->list[pos].age = age;
		printf("Modify Success!\n");
		break;
	case 4:
		printf("Please enter the new tel:");
		scanf("%s", tel);
		//ct_p->list[pos].tel = tel;
		strcpy(ct_p->list[pos].tel, tel);
		printf("Modify Success!\n");
		break;
	case 5:
		printf("Please enter the new address:");
		scanf("%s", address);
		//ct_p->list[pos].address = address;
		strcpy(ct_p->list[pos].address, address);
		printf("Modify Success!\n");
		break;
	default:
		break;
	}
}

static int person_cmp(const void *x,const void *y)
{
	person_p _x = (person_p)x;
	person_p _y = (person_p)y;
	return strcmp(_x->name, _y->name);
}

void SortContact(contact_p ct_p)
{
	person_p p = ct_p->list;
	qsort(p, ct_p->usedSize, sizeof(person_t), person_cmp);
}

void ClearContact(contact_p ct_p)
{
	ct_p->usedSize = 0;
	printf("Clear Success!\n");
}
#include <stdio.h>
#include <conio.h>

int consol_input(void);
int check_buffer(void);
int ask_name_old(void);
int carefull_using_buffer(void);

int carefull_using_buffer(void)
{
	FILE* fp = stdin;
	int age = 0;

	char yname[12] = "0";
	puts("chat your age ");
	scanf_s("input : %d",&age); // �������� ���� \0�� �����. scanf�� ������ \0 �ѹ� �� ����. \0\0�� ��.

	//char enter = getchar(); �׷��Ƿ� \0 �Ѱ� ������. but, 10�� spacebar�̸� �ȵ�.
	fflush(stdin);// window���� �� �� �ְ�, ����� pointer�� base(ó��)���� �ٲ�. linux���� fpulge

	puts("chat your name");
	//scanf_s("%s", yname); �̷� �ʿ�x
	gets_s(yname, sizeof(yname));

	printf("your age is %d, and your name is %s", age, yname);
}


int consol_input(void)
{
	char ok = '\0';
	while (ok != 'O')
	{
		ok = _getch();
		//ok = _getche();
		printf("What user out chat is %c \n", ok);
	}
	return 0;
}


int check_buffer(void)
{	
	FILE* fp = stdin;
	char first_va = getchar();
	char seonc_va = getchar();
	char third_va = getchar();
	char forth_va = getchar();
	printf("%c ,%p\n", first_va, &first_va);
	printf("%c ,%p\n", seonc_va, &seonc_va);
	printf("%c ,%p\n", third_va, &third_va);
	printf("%c ,%p\n", forth_va, &forth_va);
	return 0;
}

int ask_name_old(void)
{
	char yname[30] = { "string format" };
	int age;
	printf("What is your name?\n");
	gets_s(yname, sizeof(yname)); //�ִ� ���� �̷��� �����ؾ���.
	printf("printf or scanf is function which request OS to io. \nby reading or writing device file\n\n");
	fputs(yname, stdout);
	printf("is your name\n");

	printf("How old are you?\n");
	scanf_s("%d", &age, sizeof(age));
	printf("%s's %d years old. \n", yname, age);
	
	return 0;
}


int main(void)
{

	//check_buffer();
	//FILE* fp = stdin;
	//int NDATA = 0;
	//scanf_s("%d", &NDATA);
	//consol_input(void);
	carefull_using_buffer();

	return 0;
}




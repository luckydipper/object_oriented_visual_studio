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
	scanf_s("input : %d",&age); // 마지막에 엔터 \0이 저장됨. scanf가 끝나서 \0 한번 더 붙혀. \0\0이 됨.

	//char enter = getchar(); 그러므로 \0 한개 빼야함. but, 10살 spacebar이면 안됨.
	fflush(stdin);// window에만 쓸 수 있고, 입출력 pointer가 base(처음)으로 바뀜. linux에선 fpulge

	puts("chat your name");
	//scanf_s("%s", yname); 이럴 필요x
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
	gets_s(yname, sizeof(yname)); //넣는 곳도 이렇게 설정해야함.
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




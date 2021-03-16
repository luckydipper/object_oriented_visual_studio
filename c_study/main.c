#include <stdio.h>
#include <conio.h>

int get_input(int* get_int, char* get_char[50]);
//function prototype

int get_input(int* get_int, char* get_char[50]) {
	printf("Int that i'v got is %d \n", *get_int);
	printf("And my name is %s", get_char);
	return 0;
}

int main()
{
	int var = 10;
	//char yname[5] = { 't','h','i' };
	char yname[5] = { "Thi" };
	printf("hello world %5d \n", var);
	puts(yname);
	get_input(&var, yname);
	return 0;
}

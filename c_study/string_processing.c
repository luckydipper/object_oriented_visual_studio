#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int print_foo(char name[]) {
	printf("foo %s", name);
	return 3;
}

// char *names = "HeeSung Kim";
// int (*ptr_print_foo)(char *name) = print_foo;
// ptr_print_foo(names);
// errno_t err;
// FILE *pt_file = NULL;
// err = fopen_s(&pt_file, "CON", "w");
// fprintf(pt_file, "hello world");
// fclose(pt_file);

void getName(char const name[], int n_size) {
	printf("Input your name\n");
	char szBuffer[32] = { 0 };
	gets_s(szBuffer, sizeof(szBuffer));
	strcpy_s(name, n_size, szBuffer);
};

int main() {
	//obtimize example
	char name[32] = { 0 };
	FILE* ptr_input_buff = stdin;
	scanf_s("%s", name, sizeof(name));

	printf("%s", name);
	getchar();
	gets_s(name, sizeof(name));
	getName(name, sizeof(name));
	puts(name);
	return 0;
}
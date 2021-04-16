#include <stdio.h>

int main()
{
	int a = 300;
	int* ptr_a = &a;

	printf("%d's position is %p", a, ptr_a);
}
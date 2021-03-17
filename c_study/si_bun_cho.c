#include <stdio.h>

int main()
{
	FILE* fp = stdin;
	int user_sec = 0, hour = 0, minute = 0, second = 0;
	puts("Give a sec");
	scanf_s("%d", &user_sec);
	hour = user_sec / 3600;
	minute = user_sec % 3600;
	second = minute % 60;
	if (minute > 60)
	{
		minute /= 60;
		second = user_sec % 3600 % 60;
	}
	
	printf("%d", ~3);
	printf("%0d : %0d : %0d", hour, minute, second); // % 뒤에 0n -> 0을 n개 집어넣고 시작하자. %k -> k의 빈칸 중에서 시작하자.
	return 0;
}
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
	printf("%0d : %0d : %0d", hour, minute, second); // % �ڿ� 0n -> 0�� n�� ����ְ� ��������. %k -> k�� ��ĭ �߿��� ��������.
	return 0;
}
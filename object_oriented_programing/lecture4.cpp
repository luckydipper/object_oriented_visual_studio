#include <iostream>
#include <cstdlib>
#include <stdio.h>
int foo3(void);

int main() {
	char hello[15] = { '0' };
	FILE *cptr = stdin;
	std::cin >> hello;
	std::cout << hello;
	return 0;
}

int foo1(void)
{
	int user_give[5];
	int min, max;

	std::cout << "give me five int. use enter between the input \n";
	std::cin >> user_give[0] >> user_give[1] >> user_give[2] >> user_give[3] >> user_give[4];
	min = user_give[0];
	max = user_give[0];
	for (int i = 0; i < 5; i++)
	{
		if (user_give[i] <= min)
			min = user_give[i];
		if (user_give[i] >= max)
			max = user_give[i];
	}
	std::cout << "maximum is " << max << std::endl;
	std::cout << "minimum is " << min << std::endl;
	return 0;
}


int foo2(void)
{
	bool flag;
	int a, b, sum;
	double average;
	const double EPS = 0.0000000000001;


	std::cout << "give me the flag.\n 1 is true 0 is false\n";
	std::cin >> flag;
	std::cout << "give me the a and b value. enter between the charactor. \n";
	std::cin >> a >> b;

	if (flag)
	{
		sum = a + b;
		average = sum / 2;
		std::cout << "sum is : " << sum << std::endl;
		std::cout << "average is : " << average;
	}
	else
	{
		std::cout << "flag is not true";
	}
	return 0;
}

int foo3(void)
{
	//lets assume each perpect score is 100.
	double quiz, mid_term, final_score, average;
	const double EPS = 0.0000000001;
	char grade = 'A';

	std::cout << "quiz score is : ";
	std::cin >> quiz;
	std::cout << "mid_term score is : ";
	std::cin >> mid_term;
	std::cout << "final_score score is : ";
	std::cin >> final_score;

	average = (quiz + mid_term + final_score) / 3;
	if (average > 90 || abs(90 - average) < EPS)// 89.9999999... 인 무한소수도 90점이기 때문.
		grade = 'A';
	else if (average > 70 || abs(70 - average) < EPS)
		grade = 'B';
	else if (average > 50 || abs(50 - average) < EPS)
		grade = 'C';
	else if (average < 50)
		grade = 'F';
	std::cout << "your grade is " << grade << std::endl;
	return 0;
	//int user_int;
//bool odd;
//std::cout << "give integer" << std::endl;
//std::cin >> user_int;
//odd = user_int % 2; // if even, get 0(false). if odd, get 1 true
//if (odd)
//	std::cout << "given int is odd";
//else
//	std::cout << "given int is even";
}
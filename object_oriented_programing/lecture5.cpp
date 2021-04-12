#include <iostream>
#include <math.h>
#include <cstdlib>


double factorial_over_one(int number);
int oop_lec5_c1(void);
int nth_number_of_digit(int number, int n);
int oop_lec5_c2(void);
int last_problem(void);

int main()
{
	double user_var, sum = 0, min, max;
	std::cout << "Enter first double ";
	std::cin >> user_var;
	sum += user_var;
	min = user_var;
	max = user_var;
	for (size_t i = 1; i < 20; i++)
	{
		std::cout << "Enter " << i+1 << "th " << "double ";
		std::cin >> user_var;
		sum += user_var;
		std::cout << sum << "\n";
		if (user_var > max)
			max = user_var;
		else if (user_var < min)
			min = user_var;
	};
	std::cout << "Sum of these doubles is " << sum << \
		"\nAverage of these doubles is " << sum / 20 << \
		"\nMinimum of these doubles is " << min << \
		"\nMaximum of these doubles is " << max;

}


int oop_lec5_c2(void)
{
	int u_give, ndigit = 0; //ndigit은 자릿수.
	//short coefficient[8] = {0};
	std::cout << "Give me number : ";
	std::cin >> u_give;

	//자리수 계산
	do
		ndigit++;
	while (u_give >= (int)pow(10, ndigit));


	//10진수의 각 계수를 추출하여 출력함.
	for (short i = 1; i < ndigit + 1; i++)
	{
		//coefficient[i] = nth_number_of_digit(u_give, i);
		std::cout << nth_number_of_digit(u_give, i);
	}
	return 0;

}

int nth_number_of_digit(int number, int n)
{
	int result;
	result = (number % (int)std::pow(10, n)) / std::pow(10, n-1);
	return result;
}

int oop_lec5_c1(void)
{
	double first_approx = 0, second_approx = 0;
	const double EPS = 0.000001;
	int count = 0;
	do
	{
		first_approx += factorial_over_one(count);
		second_approx = first_approx + factorial_over_one(count + 1);
		count++;
	} while ((second_approx - first_approx) > EPS);
	std::cout << second_approx;
	return 0;
}
double factorial_over_one(int number)
{
	double result = 1;
	for (int a = 1; a <= number; a++)
	{
		result *= a;
	}
	return 1 / result;
}
int last_problem(void)
{
	int element = 0, sum = 0;
	for (size_t i = 0; i < 50; i++)
	{
		element = 1 + 3 * i;
		sum += element;
	}
	std::cout << sum;
	return 0;

}
#include <iostream>
#include <cmath>

// calculate Fibonacci value
// param n : index of Fibonacci.
// retrun sum of fibonacci
int Fibonacci(int n)
{
	if (n == 1)
		return 0;
	else if(n == 2)
		return 1;

	int seris = 0, first = 0, second = 1, next_step = 0;
	for (int i = 0; i < n-2; i++)
	{
		//recurrence relation
		next_step = first + second;
		std::cout << first << " + " << second << " = " << next_step << std::endl;
		first = second;
		second = next_step;
		seris += next_step;
	}
	std::cout << n << "'th index of value is " << next_step << std::endl;
	return seris;
}


int d_3(void)
{
	double a, b, c, solution1, solution2;

	std::cout << "To calculate quadratic equation ax²+bx+c=0, give a,b,c" << std::endl;
	std::cin >> a >> b >> c;

	if (a == 0 && b == 0)
	{
		std::cout << "[ERROR] - This is not equation" << std::endl;
		return 0;
	}
	else if (a == 0 && b != 0)
	{
		std::cout << "The solutions is " << -c / b << std::endl;
		return 1;
	}
	else if (b * b - 4 * a * c < 0)
	{
		std::cout << "[ERROR] - It doesn't has real solution" << std::endl;
		return 0;
	}
	else
	{
		solution1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
		solution2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
		std::cout << "Each solutions are " << solution1 << " and " << solution2 << std::endl;
		return 1;
	}
}

#include <iostream>
#include <cmath>

int Permutation(int n, int r);
int main(void)
{
	int n, r;
	std::cout << "to calculate n permutation r, give n and r" << std::endl;
	std::cin >> n >> r;
	std::cout << Permutation(n, r);
	return 1;
}

int Permutation(int n, int r)
{	//In integer space, tgamma is equal to factorial.
	//n이 정수일 때 감마함수(n) = (n-1)!
	double n_pac = tgamma(n+1);
	double r_plus_one_pac = tgamma(n-r+1);
	return (n_pac)/ r_plus_one_pac;
}
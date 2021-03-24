# include <iostream>

int integer(void)
{
	int first_val = 0, second_val = 0;
	std::cout << "Please enter the first number: ";
	std::cin >> first_val;
	std::cout << "Please enter the second number: ";
	std::cin >> second_val;

	std::cout << first_val << '+' << second_val << '=' << first_val + second_val << std::endl;
	std::cout << first_val << '-' << second_val << '=' << first_val - second_val << std::endl;
	std::cout << first_val << '*' << second_val << '=' << first_val * second_val << std::endl;
	std::cout << first_val << '/' << second_val << '=' << first_val / second_val << std::endl;
	std::cout << first_val << '%' << second_val << '=' << first_val % second_val << std::endl;
	return 0;
}

int doubles(void)
{
	double first_val = 0, second_val = 0;
	std::cout << "Please enter the first number: ";
	std::cin >> first_val;
	std::cout << "Please enter the second number: ";
	std::cin >> second_val;

	std::cout << first_val << '+' << second_val << '=' << first_val + second_val << std::endl;
	std::cout << first_val << '-' << second_val << '=' << first_val - second_val << std::endl;
	std::cout << first_val << '*' << second_val << '=' << first_val * second_val << std::endl;
	std::cout << first_val << '/' << second_val << '=' << first_val / second_val << std::endl;
	return 0;
}

int main()
{
	int i1 = 2, i2 = 5, i3 = -3;
	double d1 = 2.0, d2 = 5.0, d3 = -0.5;
	std::cout << 3 * (d1 + d2) * (d1 - d3) << '\n';
	return 0;
}
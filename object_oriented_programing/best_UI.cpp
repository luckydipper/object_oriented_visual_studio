#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <conio.h>
//coding convention
//indentation rull use BSD, not K&R
//variable use snake case, member varialbe(attribute) use _(underscore) at the end
//member of struct usese snake case
//const UPPER_LIKE_THIS
//function name pascal.. start with verb is good! PascalIsThis()
bool EndCheck(void);
double CalculatesAverage(double sum_of_variable, int num_of_variable);
double GeometricMean(double multiple_of_variable, int num_of_variable);
double HarmonicMean(double sum_of_invert_variable, int num_of_variable);
int main()
{
	int num_of_variable = 0;
	bool type_error;
	double user_varialbe, sum_of_variable = 0, sum_of_invert_variable = 0, multiple_of_variable = 1;
	do
	{
        std::cout << "Give the " << num_of_variable+1 << "'th varialbe \n" \
			<<"If you want stop the program, chat 'q'"<< std::endl;
        std::cin >> user_varialbe;
		type_error = std::cin.fail();
		if (type_error)
		{
			std::cout << "ERROR - You gave wrong type." << std::endl;
			if (EndCheck() == true)
			{
				type_error = true;
				break;
			}
			else
			{
				type_error = false;
				std::cout << "Please try again." << std::endl;
				continue;
			}
		}
		//user_varialbe = _getch();
		sum_of_variable += user_varialbe;
		multiple_of_variable *= user_varialbe;
		sum_of_invert_variable += 1 / user_varialbe;
		++num_of_variable;
	} while(!type_error);
	CalculatesAverage(sum_of_variable, num_of_variable);
	GeometricMean(multiple_of_variable, num_of_variable);
	HarmonicMean(sum_of_invert_variable, num_of_variable);

	// cin method fail, clear, ignore
	// if cin is fail cin.fail() return 1;
	// cin.clear() format error bit//에러 비트를 초기화함. 그래도 버퍼엔 문자 남아있음. fail()의 return을 0으로 바꿈.
	// cin.ignore(n,',') read n buffer and end charactor alike fflush
	return 1;
}


bool EndCheck(void)
{
	char yes_or_no;
	bool result;
	do
	{
		std::cout << "Do you want to quit this program? [y,n]" << std::endl;
		std::cin.clear();
		std::cin.ignore(100, '\n');
		std::cin >> yes_or_no;
		switch (yes_or_no)
		{
			case 'y':
			case 'Y':
				result = true;
				break;
			case 'n':
			case 'N':
				result = false;
				break;
			default:
				std::cout << "ERROR, you give wrong charactor try again" << std::endl;
				result = true;
				break;
		}
	} while (std::cin.fail());
	std::cin.clear();
	std::cin.ignore(100, '\n');
	return result;
}

double CalculatesAverage(double sum_of_variable, int num_of_variable)
{
	double result = sum_of_variable / num_of_variable;
	std::cout << "calculus average is " << result << std::endl;;
	return result;
}

double GeometricMean(double multiple_of_variable, int num_of_variable)
{
	double result = std::pow(multiple_of_variable, 1. / num_of_variable);
	std::cout << "GeometricMean is " << result << std::endl;
	return result;
}

double HarmonicMean(double sum_of_invert_variable, int num_of_variable)
{
	double result = num_of_variable / sum_of_invert_variable;
	std::cout << "HarmonicMean is " << result << std::endl;
	return result;
}
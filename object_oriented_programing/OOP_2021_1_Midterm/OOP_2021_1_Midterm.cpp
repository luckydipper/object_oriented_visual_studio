#include <iostream>
#include <vector>
void midterm_ex()
{
	std::cout << "hello world";
	std::vector<int>vec_list(5);
	for (int &elem : vec_list)
	{
		std::cin >> elem;
	}

	for (int elem : vec_list)
	{
		std::cout << elem;
	}
}

#ifdef WIN32
#ifdef _DEBUG
#pragma comment(lib, "OOP_2021_1_Midterm_LibD.Lib")
#else
#pragma comment(lib, "OOP_2021_1_Midterm_Lib.Lib")
#endif
#else
#ifdef _DEBUG
#pragma comment(lib, "OOP_2021_1_Midterm_Lib64D.Lib")
#else
#pragma comment(lib, "OOP_2021_1_Midterm_Lib64.Lib")
#endif
#endif

int main()
{
	midterm_ex();
	//
}
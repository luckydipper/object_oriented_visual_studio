#include <iostream>
void midterm_ex();

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
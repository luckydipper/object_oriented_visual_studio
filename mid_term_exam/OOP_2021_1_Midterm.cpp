/*             Object-Oriented Programming, Midterm exam (2021-1)                       */
//  Department(�а�): ����Ʈ���������а�         Student ID(�й�): 2020105695   Name(�̸�): ����                   
//
// Write your answers in Korean or English(����� �ѱ��� �Ǵ� ����� �ۼ��Ͻÿ�).

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>

#include <sstream>
#include <string>
#include <fstream>

//#define _MAC  // If you are not using a Mac, delete this line (���� Mac�� ������� �ʴ´ٸ� �� ���� ����ÿ�).
#define _MSVC // If you are not using a Visual Studio on Windows, delete this line (���� Windows���� Visual Studio�� ������� �ʴ´ٸ� �� ���� ����ÿ�).

#ifdef _MAC
void OOP_2021_1_Midterm(std::string);
#else
void OOP_2021_1_Midterm();
#ifdef _MSVC 
#ifdef WIN32
#pragma comment(lib, "OOP_2021_1_Midterm_Lib.Lib")
#else
#pragma comment(lib, "OOP_2021_1_Midterm_Lib64.Lib")
#endif
#endif
#endif

// Notation: 
// 1. a^b denotes a raised the power b(a^b�� a�� b����)
// 2. [a, b] denotes the range from a to b, and a and b are inclusive
//    ([a, b]�� a���� b������ �����̸�, a�� b�� �����Ѵ�)

/*
1(10). Trace the evaluation of the following expressions, and write their resulting values and corresponding variables
(�Ʒ� ������ �� ����(��� �� �� ������ ������ ����)�� �����϶�).
(example, x = 1+4/2; -> x = 1+2; -> x = 3;)
a)
int x = 10, y = 2, z;		//
y += x++ + y%10;            //

solution)
y += x++ + y%10;
y += 10++ + 0;              //
y = y + 10;
y = 2 + 10;
y = 12;
x = 11;


b)
int x = 3;					//
auot result = 4 < x < 10;	//

sol)
result = (4 < x) < 10;
result = (4 < 3) < 10;
result = 0 < 10;
result = 1;
true or 1


c)
int x = 3;					//
auto result = (x =! 3);		//

sol)
result = (x =! 3);
result = (3 =! 3);
result = 0;
false or 0



d)
int F(int n) { return n*2; }
int x = F(12%10+5 + F(12)/F(2));		//

sol)
x = F(2+5 + (12*2)/(2*2));
x = F(7 + 24/4);
x = F(7 + 6);
x = F(13);
x = 26;


e)
int x = 10;		//
int &r = x;		//
int &rr = r;	//
rr = 2;			//
int xx = x;		//
int xxx = r;	//

sol)
reference
xx = 2;
xxx = 2;

*/
// Please perform "build/run" after completing problem 1
// (1�� �ۼ��� "build/run"�� �����Ͻÿ�).


/*
2(10). Explain any errors in the following program
(�Ʒ� ���α׷��� ������ ������ �����϶�).
a)
int F(int x, y) { return x+y; }			//

sol)
y�� type�� �������� �ʾҴ�.

b)
std::cout << sqrt(2., 1.) << std::endl;	//

sol)
sqrt�� prototype�� ���� parameter�� 1����.

c)
std::vector x(10, 3);					//

sol)
vector�� element�� type�� �������� �ʾ���.

d)
for(int x = 0 ; x < 10 ; x++ );			//
std::cout << x << std::endl;		//

sol)
for �ڿ� ;�� ������ �ݸ��� ���� �ʾ��� ���̴�.


e)
void F(int x1 = 0, int x2 = 0, int x3) {}	//

sol)
Function���� �ʱ�ȭ�� parameter�� ���� ���� ���������� �����Ѵ�.
F(int x3, ...)
�̷��� �ؾ��� ���̴�.

*/
// Please perform "build/run" after completing problem 2
// (2�� �ۼ��� "build/run"�� �����Ͻÿ�).

/*
* Explain how the following code fragment works(the final values of variables and process)
(�Ʒ� �ڵ��� ������ �����϶�(������ ����Ǵ� ���� ó�� ����)).
3(5).
std::vector<int> data[3];
for(int i = 0 ; i < 3 ; ++i){
do {
data[i] = rand()%10;
for(int k = 0 ; k < i ; ++k)
if(data[k] == data[i]) break;
}while(k<i);
}


sol)
data array�� �̹� ���� �Ǿ��ִٰ� �����ϰ� ������ Ǯ����. data�� �̻���. ������ vector�� ������ �� �ֳ�?
����������������������������������������������������������������������������������������������������������������������������

//
//
//
//
//
//
//
//



4(5).
int x1 = 10, x2 = 20;
int *p = &x1;
++(*p);
p = &x2;
++(*p);

sol)
x1 = 10
x2 = 20
p = x1�� address
p�� address�� �����, �� x1�� ���� 1�� ����, 11�� ��.
p�� �ٽ� x2�� �ּҸ� ������.
p�� address�� �����, �� x2�� ���� 1�� ���� 21�� ��.


//
//
//
//
//
//
//
//

5(5).
std::vector<int> data(3, 10);
int i = 0;
for(auto x:data)
x = ++i;
for(auto x:data)
std::cout << x << ' ';



sol)
data = 3���� 10�� ����ִ� vector��.
range based for���� �̿���, data�� �� element�� x�� �̿��Ϸ��� ������, reference�� �̿����� ����.
�׷��Ƿ� x�� 1�� ���ص� data�� ���� ������ �ʾ���.
���� data�� ����ִ� ���� ����ص� 10 10 10��.
//
//
//
//
//
//
//
//
*/
// Please perform "build/run" after completing problem 5
// (5�� �ۼ��� "build/run"�� �����Ͻÿ�).

/* Fill in _____ to satify the given condtions(�־��� ������ �����ϵ��� _____�� ä��ÿ�).
6(3). Condtion: data[r][c] = r*10+c
std::vector<std::vector<int>> data(5, std::vector<int>(3));
for(auto_____ : data) {						//
int r = 0;
for(auto_____: x1d) {					//
int c = 0;
x = _____;							//
}
}

7(2). Condition: average = 2.5
std::vector<int> data = {1, 2, 5, 2};
double average = _____;						//
for(auto x : data)
average _____;							//

*/
// Please perform "build/run" after completing problem 7
// (7�� �ۼ��� "build/run"�� �����Ͻÿ�).

// Make your codes as clear, concise, and simple as possible.
// �����ϸ� ��Ȯ�ϰ� �����ϰ� ������ �ۼ��϶�.

// 8(4). Write a function that returns the relative change of two parameters(�� ���� �Ű������� ��� ��ȭ�� ��ȯ�ϴ� �Լ��� �ۼ��϶�).
// Do not use the standard library functions(ǥ�� ���̺귯�� �Լ��� ������� �� ��)
// relative difference of a and b: |x-y|/x
double Fn01(int x, int y) {
	double result = (x - y) / static_cast<double>(x);
	if (result < 0)
		result = -result;
	return result;
}

// 9(15). Write a recursive function that returns the reversed number of an integer parameter(������ �Ű������� �������� ��ȯ�ϴ� recursive �Լ��� �ۼ��Ͻÿ�).
// Input(�Է�): 4321 -> Reversed number(����): 4321
// Hint: n = n0 * 1 + n1 * 10 + n2 * 100 + n3 *1000 -> ((n3 * 10 + n2) * 10) * 10 + n1
int Fn02(int n) {
	int left_val = n % 10;
	if ( n > 0 && n < 10)
	{
		std::cout << n;
		return 0;
	}
	int x = n / 10;
	if (x > 0 )
	{
		std::cout << left_val;
		Fn02(x);
	}
	return 0; // Delete this sentence(�� ������ ����ÿ�).
}

// 10(6). Write a function that can modify an argument(passing to Max) value, and the argument value stores the maximum value of data vector
// (�μ�(Max�� ����)�� ���� data vector�� ����� ���� ū ������ �����ϴ� �Լ��� �ۼ��϶�).
void Fn03(std::vector<int> data, int &Max) {// You can modify the parameter types(�ĸ����� Ÿ���� ������ �� ����).

	for (int elem : data)
	{
		if (Max < elem)
			Max = elem;
	}//
}

// 11(15). Write a function that returns sin(Angle) where Angle is an angle in degree. sin should be calculated by x - x^3/3! + x^5/5! - x^7/7! (x is an angle in radian ranging [0, 2pi]).
// You cannot use the sin function and another user-defined function. 
// (sin(Angle)�� ��ȯ�ϴ� �Լ��� �ۼ��϶�(Angle�� degree). sin�� x - x^3/3! + x^5/5! - x^7/7!�� ����ϸ� x�� [0, 2pi] ������ radian �����̴�. sin �Լ��� �ٸ� ����� ���� �Լ��� ����� �� ����.
int factorial(int k)
{
	int result = 1;
	while (k != 0)
	{
		result *= k;
		k--;
	}
	return result;
}
double Fn04(double Angle) {
	static double pi = 3.141592;
	double radian = Angle / 180 * pi;
	double result = radian - pow(radian, 3) / factorial(3) + pow(radian, 5) / factorial(5) - pow(radian,7)/factorial(7);
	return 0.; // Delete this sentence(�� ������ ����ÿ�).
}

/* 12(20). Write a function that works as like the below comments and test codes(main).
�Ʒ� �ּ��� ���� �����ϴ� �Լ��� �׽�Ʈ �ڵ�(main)�� �ۼ��϶�.
std::vector<int> v1, v2;
// define v3(v3�� ����)
// v1 and v2 store ten elements that are random values ranging [0, 100]
// (v1�� v2�� [0, 100]�� ������ ���� 10���� ��ҷ� ����)
v3 = Fn05(v1, v2);
// v3 stores ten elements that are average values of v1 and v2 by element-wise (real value)
// (v3�� v1�� v2�� ��Ҵ����� ����� 10���� ��ҿ� ����)
*/

#ifdef _MAC
std::string currentPath = "";       // Paste only the path shown by GD(GD�� ǥ�õǴ� ��θ� �ٿ���������).
#endif

int main() {
#ifdef _MAC
	OOP_2021_1_Midterm(currentPath);
#else
	OOP_2021_1_Midterm();
#endif
	srand((unsigned)time(nullptr));

	std::cout << Fn01(2, 5) << std::endl;
	std::cout << Fn02(1222553) << std::endl;

	std::vector<int> data(15);
	for (int i = 0; i < data.size(); i++)
		data[i] = rand() % 1000;

	int Return;
	Return = 0;
	Fn03(data, Return);
	std::cout << Return << std::endl;

	for (double i = 0; i <= 180.; i += 30.)
		std::cout << Fn04(i) << std::endl;

	// Do not change the codes above in the main function(main �Լ����� ���� ������ �������� ���ÿ�).

	// Write test codes for problems 12(12�� ������ test �ڵ带 �ۼ�)

	// You can optionally use the remaining parts(���� �κ��� �����Ӱ� ����ϼ���).
}
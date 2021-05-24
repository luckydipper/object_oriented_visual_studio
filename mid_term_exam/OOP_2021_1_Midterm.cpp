/*             Object-Oriented Programming, Midterm exam (2021-1)                       */
//  Department(학과): 소프트웨어융합학과         Student ID(학번): 2020105695   Name(이름): 김희성                   
//
// Write your answers in Korean or English(답안은 한국어 또는 영어로 작성하시오).

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>

#include <sstream>
#include <string>
#include <fstream>

//#define _MAC  // If you are not using a Mac, delete this line (만일 Mac을 사용하지 않는다면 이 줄은 지우시오).
#define _MSVC // If you are not using a Visual Studio on Windows, delete this line (만일 Windows에서 Visual Studio를 사용하지 않는다면 이 줄은 지우시오).

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
// 1. a^b denotes a raised the power b(a^b는 a의 b제곱)
// 2. [a, b] denotes the range from a to b, and a and b are inclusive
//    ([a, b]는 a부터 b까지의 범위이며, a와 b를 포함한다)

/*
1(10). Trace the evaluation of the following expressions, and write their resulting values and corresponding variables
(아래 수식의 평가 과정(결과 값 및 연관된 변수를 포함)을 설명하라).
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
// (1번 작성후 "build/run"을 진행하시오).


/*
2(10). Explain any errors in the following program
(아래 프로그램의 오류가 있으면 설명하라).
a)
int F(int x, y) { return x+y; }			//

sol)
y의 type을 설정하지 않았다.

b)
std::cout << sqrt(2., 1.) << std::endl;	//

sol)
sqrt의 prototype을 보면 parameter가 1개임.

c)
std::vector x(10, 3);					//

sol)
vector의 element의 type을 설정하지 않았음.

d)
for(int x = 0 ; x < 10 ; x++ );			//
std::cout << x << std::endl;		//

sol)
for 뒤에 ;을 붙혀서 반목문이 돌지 않았을 것이다.


e)
void F(int x1 = 0, int x2 = 0, int x3) {}	//

sol)
Function에서 초기화된 parameter가 있을 때는 오른쪽으로 빼야한다.
F(int x3, ...)
이렇게 해야할 것이다.

*/
// Please perform "build/run" after completing problem 2
// (2번 작성후 "build/run"을 진행하시오).

/*
* Explain how the following code fragment works(the final values of variables and process)
(아래 코드의 동작을 설명하라(변수에 저장되는 값과 처리 과정)).
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
data array가 이미 정의 되어있다고 생각하고 문제를 풀겠음. data가 이상함. 저렇게 vector를 정의할 수 있나?
ㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇ

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
p = x1의 address
p의 address가 저장된, 즉 x1의 값에 1을 더해, 11이 됨.
p에 다시 x2의 주소를 대입함.
p의 address에 저장된, 즉 x2의 값에 1을 더해 21이 됨.


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
data = 3개의 10이 들어있는 vector임.
range based for문을 이용해, data의 각 element를 x을 이용하려고 했지만, reference를 이용하지 않음.
그러므로 x에 1을 더해도 data의 값은 변하지 않았음.
이후 data에 들어있는 값을 출력해도 10 10 10임.
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
// (5번 작성후 "build/run"을 진행하시오).

/* Fill in _____ to satify the given condtions(주어진 조건을 만족하도록 _____을 채우시오).
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
// (7번 작성후 "build/run"을 진행하시오).

// Make your codes as clear, concise, and simple as possible.
// 가능하면 명확하고 간결하고 간단히 작성하라.

// 8(4). Write a function that returns the relative change of two parameters(두 개의 매개변수의 상대 변화를 반환하는 함수를 작성하라).
// Do not use the standard library functions(표준 라이브러리 함수를 사용하지 말 것)
// relative difference of a and b: |x-y|/x
double Fn01(int x, int y) {
	double result = (x - y) / static_cast<double>(x);
	if (result < 0)
		result = -result;
	return result;
}

// 9(15). Write a recursive function that returns the reversed number of an integer parameter(정수형 매개변수를 역순으로 반환하는 recursive 함수를 작성하시오).
// Input(입력): 4321 -> Reversed number(역순): 4321
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
	return 0; // Delete this sentence(이 문장은 지우시오).
}

// 10(6). Write a function that can modify an argument(passing to Max) value, and the argument value stores the maximum value of data vector
// (인수(Max로 전달)의 값을 data vector에 저장된 가장 큰 값으로 수정하는 함수를 작성하라).
void Fn03(std::vector<int> data, int &Max) {// You can modify the parameter types(파리메터 타입을 수정할 수 있음).

	for (int elem : data)
	{
		if (Max < elem)
			Max = elem;
	}//
}

// 11(15). Write a function that returns sin(Angle) where Angle is an angle in degree. sin should be calculated by x - x^3/3! + x^5/5! - x^7/7! (x is an angle in radian ranging [0, 2pi]).
// You cannot use the sin function and another user-defined function. 
// (sin(Angle)을 반환하는 함수를 작성하라(Angle은 degree). sin은 x - x^3/3! + x^5/5! - x^7/7!로 계산하며 x는 [0, 2pi] 범위의 radian 각도이다. sin 함수와 다른 사용자 정의 함수를 사용할 수 없다.
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
	return 0.; // Delete this sentence(이 문장은 지우시오).
}

/* 12(20). Write a function that works as like the below comments and test codes(main).
아래 주석과 같이 동작하는 함수와 테스트 코드(main)를 작성하라.
std::vector<int> v1, v2;
// define v3(v3를 정의)
// v1 and v2 store ten elements that are random values ranging [0, 100]
// (v1과 v2는 [0, 100]의 임의의 수를 10개의 요소로 저장)
v3 = Fn05(v1, v2);
// v3 stores ten elements that are average values of v1 and v2 by element-wise (real value)
// (v3는 v1과 v2의 요소단위의 평균을 10개의 요소에 저장)
*/

#ifdef _MAC
std::string currentPath = "";       // Paste only the path shown by GD(GD로 표시되는 경로만 붙여넣으세요).
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

	// Do not change the codes above in the main function(main 함수에서 위의 내용은 수정하지 마시오).

	// Write test codes for problems 12(12번 문제의 test 코드를 작성)

	// You can optionally use the remaining parts(이후 부분은 자유롭게 사용하세요).
}
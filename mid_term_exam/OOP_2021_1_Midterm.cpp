/*             Object-Oriented Programming, Midterm exam (2021-1)                       */
//  Department(俳引): 社覗闘裾嬢清杯俳引         Student ID(俳腰): 2020105695   Name(戚硯): 沿費失                   
//
// Write your answers in Korean or English(岩照精 廃厩嬢 暁澗 慎嬢稽 拙失馬獣神).

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>

#include <sstream>
#include <string>
#include <fstream>

//#define _MAC  // If you are not using a Mac, delete this line (幻析 Mac聖 紫遂馬走 省澗陥檎 戚 匝精 走酔獣神).
#define _MSVC // If you are not using a Visual Studio on Windows, delete this line (幻析 Windows拭辞 Visual Studio研 紫遂馬走 省澗陥檎 戚 匝精 走酔獣神).

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
// 1. a^b denotes a raised the power b(a^b澗 a税 b薦咽)
// 2. [a, b] denotes the range from a to b, and a and b are inclusive
//    ([a, b]澗 a採斗 b猿走税 骨是戚悟, a人 b研 匂敗廃陥)

/*
1(10). Trace the evaluation of the following expressions, and write their resulting values and corresponding variables
(焼掘 呪縦税 汝亜 引舛(衣引 葵 貢 尻淫吉 痕呪研 匂敗)聖 竺誤馬虞).
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
// (1腰 拙失板 "build/run"聖 遭楳馬獣神).


/*
2(10). Explain any errors in the following program
(焼掘 覗稽益轡税 神嫌亜 赤生檎 竺誤馬虞).
a)
int F(int x, y) { return x+y; }			//

sol)
y税 type聖 竺舛馬走 省紹陥.

b)
std::cout << sqrt(2., 1.) << std::endl;	//

sol)
sqrt税 prototype聖 左檎 parameter亜 1鯵績.

c)
std::vector x(10, 3);					//

sol)
vector税 element税 type聖 竺舛馬走 省紹製.

d)
for(int x = 0 ; x < 10 ; x++ );			//
std::cout << x << std::endl;		//

sol)
for 及拭 ;聖 細粕辞 鋼鯉庚戚 宜走 省紹聖 依戚陥.


e)
void F(int x1 = 0, int x2 = 0, int x3) {}	//

sol)
Function拭辞 段奄鉢吉 parameter亜 赤聖 凶澗 神献楕生稽 皐醤廃陥.
F(int x3, ...)
戚係惟 背醤拝 依戚陥.

*/
// Please perform "build/run" after completing problem 2
// (2腰 拙失板 "build/run"聖 遭楳馬獣神).

/*
* Explain how the following code fragment works(the final values of variables and process)
(焼掘 坪球税 疑拙聖 竺誤馬虞(痕呪拭 煽舌鞠澗 葵引 坦軒 引舛)).
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
data array亜 戚耕 舛税 鞠嬢赤陥壱 持唖馬壱 庚薦研 熱畏製. data亜 戚雌敗. 煽係惟 vector研 舛税拝 呪 赤蟹?
しししししししししししししししししししししししししししししししししししししししししししししししししししししししししししししし

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
p = x1税 address
p税 address亜 煽舌吉, 聡 x1税 葵拭 1聖 希背, 11戚 喫.
p拭 陥獣 x2税 爽社研 企脊敗.
p税 address拭 煽舌吉, 聡 x2税 葵拭 1聖 希背 21戚 喫.


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
data = 3鯵税 10戚 級嬢赤澗 vector績.
range based for庚聖 戚遂背, data税 唖 element研 x聖 戚遂馬形壱 梅走幻, reference研 戚遂馬走 省製.
益君糠稽 x拭 1聖 希背亀 data税 葵精 痕馬走 省紹製.
戚板 data拭 級嬢赤澗 葵聖 窒径背亀 10 10 10績.
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
// (5腰 拙失板 "build/run"聖 遭楳馬獣神).

/* Fill in _____ to satify the given condtions(爽嬢遭 繕闇聖 幻膳馬亀系 _____聖 辰酔獣神).
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
// (7腰 拙失板 "build/run"聖 遭楳馬獣神).

// Make your codes as clear, concise, and simple as possible.
// 亜管馬檎 誤溌馬壱 娃衣馬壱 娃舘備 拙失馬虞.

// 8(4). Write a function that returns the relative change of two parameters(砧 鯵税 古鯵痕呪税 雌企 痕鉢研 鋼発馬澗 敗呪研 拙失馬虞).
// Do not use the standard library functions(妊層 虞戚崎君軒 敗呪研 紫遂馬走 源 依)
// relative difference of a and b: |x-y|/x
double Fn01(int x, int y) {
	double result = (x - y) / static_cast<double>(x);
	if (result < 0)
		result = -result;
	return result;
}

// 9(15). Write a recursive function that returns the reversed number of an integer parameter(舛呪莫 古鯵痕呪研 蝕授生稽 鋼発馬澗 recursive 敗呪研 拙失馬獣神).
// Input(脊径): 4321 -> Reversed number(蝕授): 4321
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
	return 0; // Delete this sentence(戚 庚舌精 走酔獣神).
}

// 10(6). Write a function that can modify an argument(passing to Max) value, and the argument value stores the maximum value of data vector
// (昔呪(Max稽 穿含)税 葵聖 data vector拭 煽舌吉 亜舌 笛 葵生稽 呪舛馬澗 敗呪研 拙失馬虞).
void Fn03(std::vector<int> data, int &Max) {// You can modify the parameter types(督軒五斗 展脊聖 呪舛拝 呪 赤製).

	for (int elem : data)
	{
		if (Max < elem)
			Max = elem;
	}//
}

// 11(15). Write a function that returns sin(Angle) where Angle is an angle in degree. sin should be calculated by x - x^3/3! + x^5/5! - x^7/7! (x is an angle in radian ranging [0, 2pi]).
// You cannot use the sin function and another user-defined function. 
// (sin(Angle)聖 鋼発馬澗 敗呪研 拙失馬虞(Angle精 degree). sin精 x - x^3/3! + x^5/5! - x^7/7!稽 域至馬悟 x澗 [0, 2pi] 骨是税 radian 唖亀戚陥. sin 敗呪人 陥献 紫遂切 舛税 敗呪研 紫遂拝 呪 蒸陥.
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
	return 0.; // Delete this sentence(戚 庚舌精 走酔獣神).
}

/* 12(20). Write a function that works as like the below comments and test codes(main).
焼掘 爽汐引 旭戚 疑拙馬澗 敗呪人 砺什闘 坪球(main)研 拙失馬虞.
std::vector<int> v1, v2;
// define v3(v3研 舛税)
// v1 and v2 store ten elements that are random values ranging [0, 100]
// (v1引 v2澗 [0, 100]税 績税税 呪研 10鯵税 推社稽 煽舌)
v3 = Fn05(v1, v2);
// v3 stores ten elements that are average values of v1 and v2 by element-wise (real value)
// (v3澗 v1引 v2税 推社舘是税 汝液聖 10鯵税 推社拭 煽舌)
*/

#ifdef _MAC
std::string currentPath = "";       // Paste only the path shown by GD(GD稽 妊獣鞠澗 井稽幻 細食隔生室推).
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

	// Do not change the codes above in the main function(main 敗呪拭辞 是税 鎧遂精 呪舛馬走 原獣神).

	// Write test codes for problems 12(12腰 庚薦税 test 坪球研 拙失)

	// You can optionally use the remaining parts(戚板 採歳精 切政罫惟 紫遂馬室推).
}
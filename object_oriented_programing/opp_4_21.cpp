1. Consider the following C++ code:
#include <iostream>
int sum1(int n) {
	int s = 0;
	while (n > 0) {
		s++;
		n--;
	}
	return s;
}
int input;
int sum2() {
	int s = 0;
	while (input > 0) {
		s++;
		input--;
	}
	return s;
}
int sum3() {
	int s = 0;
	for (int i = input; i > 0; i--)
		s++;
	return s;
}
int main() {
	// See each question below for details
}
(a)What is printed if main is written as follows ?
int main() {
	input = 5;
	std::cout << sum1(input) << '\n';
	std::cout << sum2() << '\n';
	std::cout << sum3() << '\n';
}
(b)What is printed if main is written as follows ?
int main() {
	input = 5;
	std::cout << sum1(input) << '\n';
	std::cout << sum3() << '\n';
	std::cout << sum2() << '\n';
}
(c)What is printed if main is written as follows ?
int main() {
	input = 5;
	std::cout << sum2() << '\n';
	std::cout << sum1(input) << '\n';
	std::cout << sum3() << '\n';
}
(d)Which of the functions sum1, sum2, and sum3 produce a side effect ? What is the side effect ?
(e)Which function may not use the input variable ?
(f)What is the scope of the variable input ? What is its lifetime ?
(g)What is the scope of the variable i ? What is its lifetime ?
(h)Which of the functions sum1, sum2, and sum3 manifest good functional independence ? Why ?
2. Consider the following C++ code :
#include <iostream>
	int next_int1() {
	static int cnt = 0;
	cnt++;
	return cnt;
}
int next_int2() {
	int cnt = 0;
	cnt++;
	return cnt;
}
int global_count = 0;
int next_int3() {
	global_count++;
	return global_count;
}
int main() {
	for (int i = 0; i < 5; i++)
		std::cout << next_int1() << " "
		<< next_int2() << " "
		<< next_int3() << '\n';
}
(a)What does the program print ?
(b)Which of the functions next_int1, next_int2, and next_int3 is the best function for
the intended purpose ? Why ?
(c)What is a better name for the function named next_int2 ?
(d)The next_int3 function works in this context, but why is it not a good implementation of a
function that always returns the next largest integer ?

3. The following C++ program is split up over three source files.The first file, counter.h, consists of
int read();
int increment();
int decrement();
The second file, counter.cpp, contains
static int count;
int read() {
	return count;
}
int increment() {
	if (count < 5)
		count++;
}
int decrement() {
	if (count > 0)
		count--;
}
The third file, main.cpp, is incomplete :
#include <iostream>
#include "counter.h"
int main() {
	// Add code here
}
(a)Add statements to main that enable it to produce the following output :
3
2
4
The restriction is that the only ouput statement you are allowed to use(three times) is
std::cout << read() << '\n';
(b)Under the restriction of using the same output statement above, what code could you add to
main so that it would produce the following output ?
6
4. Consider the following C++ code :
#include <iostream>
	int max(int n) {
	return n;
}
int max(int m, int n) {
	return (m >= n) ? m : n;
}
int max(int m, int n, int r) {
	int x = m;
	if (n > x)
		x = n;
	if (r > x)
		x = r;
	return x;
}
int main() {
	std::cout << max(4) << '\n';
	std::cout << max(4, 5) << '\n';
	std::cout << max(5, 4) << '\n';
	std::cout << max(1, 2, 3) << '\n';
	std::cout << max(2, 1, 3) << '\n';
	std::cout << max(2, 1, 2) << '\n';
}
(a)Is the program legal since there are three different functions named max ?
(b)What does the program print ?
5. Consider the following function :
int proc(int n) {
	if (n < 1)
		return 1;
	else
		return proc(n / 2) + proc(n - 1);
}
Evaluate each of the following expressions :
(a)proc(0)
(b)proc(1)
(c)proc(2)
(d)proc(3)
(e)proc(5)
(f)proc(10)
(g)proc(-10)
6. Rewrite the gcd function so that it implements Euclid¡¯s method but uses iteration instead of recursion.
7. If x is a variable, how would you determine its address in the computer¡¯s memory ?
8. What is printed by the following code fragment ?
int x = 5, y = 3, *p = &x, *q = &y;
std::cout << "x = " << x << ", y = " << y << '\n';
x = y;
std::cout << "x = " << x << ", y = " << y << '\n';
x = 7;
std::cout << "x = " << x << ", y = " << y << '\n';
*p = 10;
std::cout << "x = " << x << ", y = " << y << '\n';
p = q;
*p = 20;
std::cout << "x = " << x << ", y = " << y << '\n';
9. Given the declarations :
int x, y, * p, * q;
indicate what each of the following code fragments will print.
(a)p = &x;
x = 5;
std::cout << *p << '\n';
(b)x = 5;
p = &x;
std::cout << *p << '\n';
(c)p = &x;
*p = 8;
std::cout << *p << '\n';
(d)p = &x;
q = &y;
x = 100;
y = 200;
*q = *p;
std::cout << x << ' ' << y << '\n';
std::cout << *p << ' ' << *q << '\n';
(e)p = &x;
q = &y;
x = 100;
y = 200;
q = p;
std::cout << x << ' ' << y << '\n';
std::cout << *p << ' ' << *q << '\n';
(f)x = 5;
y = 10;
p = q = &y;
std::cout << *p << ' ' << *q << '\n';
*p = 100;
*q = 1;
std::cout << x << ' ' << y << '\n';
(g)x = 5;
y = 10;
p = q = &x;
*p = *q = y;
std::cout << x << ' ' << y << '\n';
10. The following function does not behave as expected :
/*
* (Faulty function)
*
* get_range
* Establishes a range of integers. The lower value must
* be greater than or equal to min, and the upper value
* must be less than or equal to max.
* min is the lowest acceptable lower value.
* max is the highest acceptable upper value.
* lower is assigned the lower limit of the range
* upper is assigned the upper limit of the range
*/
void get_range(int min, int max, int lower, int upper) {
	std::cout << "Please enter a data range within the bounds "
		<< min << "..." << max << ": ";
	do { // Loop until acceptable values are provided
		std::cin >> lower >> upper;
		if (lower < min)
			std::cout << lower << " is too low, please try again.\n";
		if (upper > max)
			std::cout << upper << " is too high, please try again.\n";
	} while (lower < min || upper > max);
}
(a)Modify the function so that it works using pass by reference with pointers.
(b)Modify the function so that it works using pass by reference with reference parameters.

12. Complete the following function that assigns to its mx and my reference parameters the components
of the midpoint of the points(x1, y1) and (x2, y2), represented by the parameters x1, y1, x2, and y2.
// Computes the midpoint of the points (x1, y1) and (x2, y2).
// The point (mx, my) represents the midoint.
void midpoint(double x1, double y1, double x2, double y2,
	double& mx, double& my) {
	// Add your code . . .
}
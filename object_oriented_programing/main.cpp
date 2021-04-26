#include <iostream>
/*
* gcd(m, n)
* Uses Euclid's method to compute the greatest common divisor
* (also called greatest common factor) of m and n.
* Returns the GCD of m and n.
*/
int gcd(int greater, int smaller) {
	int remain = 1;
	while (remain != 0) {
		remain = greater % smaller;
		greater = smaller;
		smaller = remain;
	}
	return greater;
}


//int iterative_gcd(int num1, int num2) {
//	// Determine the smaller of num1 and num2
//	int min = (num1 < num2) ? num1 : num2;
//	// 1 is definitely a common factor to all ints
//	int largestFactor = 1;
//	for (int i = 1; i <= min; i++)
//		if (num1 % i == 0 && num2 % i == 0)
//			largestFactor = i; // Found larger factor
//	return largestFactor;
//}

int main() {
	// Try out the gcd functions
	const int num1 = 121,
		num2 = 66;
	//for (int num1 = BEGIN; num1 <= END; num1++)
	//	for (int num2 = BEGIN; num2 <= END; num2++)
	//		std::cout << "iterative_gcd(" << num1 << "," << num2
	//		<< ") = " << iterative_gcd(num1, num2) << '\n';
	//for (int num1 = BEGIN; num1 <= END; num1++)
	//	for (int num2 = BEGIN; num2 <= END; num2++)
			std::cout << "gcd(" << num1 << "," << num2
			<< ") = " << gcd(num1, num2) << '\n';
}
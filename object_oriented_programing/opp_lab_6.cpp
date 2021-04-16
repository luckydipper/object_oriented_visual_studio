#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
int main() {

}

int A_1(void)
{
	// Location of orbiting point is (x,y)
	double x; // These values change as the
	double y; // satellite moves
	const double PI = 3.14159;
	// Location of fixed point is always (100, 0),
	// AKA (p_x, p_y). Change these as necessary.
	const double p_x = 100;
	const double p_y = 0;
	// Radians in 10 degrees
	const double radians = 10 * PI / 180;
	// Precompute the cosine and sine of 10 degrees
	const double COS10 = cos(radians);
	const double SIN10 = sin(radians);
	// Get starting point from user
	std::cout << "Enter initial satellite coordinates (x,y):";
	std::cin >> x >> y;
	// Compute the initial distance
	double d1 = sqrt((p_x - x) * (p_x - x) + (p_y - y) * (p_y - y));
	// Let the satellite orbit 10 degrees
	double x_old = x; // Remember x's original value
	x = x * COS10 - y * SIN10; // Compute new x value
	// x's value has changed, but y's calculate depends on
	// x's original value, so use x_old instead of x.
	y = x_old * SIN10 + y * COS10;
	// Compute the new distance
	double d2 = sqrt((p_x - x) * (p_x - x) + (p_y - y) * (p_y - y));
	// Print the difference in the distances
	std::cout << "Difference in distances: " << d2 - d1 << '\n';
	return 0;
}

int A_2(void)
{
	// Set the random seed value
	srand(static_cast<unsigned>(time(0)));
	// Roll the die three times
	for (int i = 0; i < 3; i++) {
		// Generate random number in the range 1...6
		int value = rand() % 6 + 1;
		// Show the die
		std::cout << "+-------+\n";
		switch (value) {
		case 1:
			std::cout << "| |\n";
			std::cout << "| * |\n";
			std::cout << "| |\n";
			break;
		case 2:
			std::cout << "| * |\n";
			std::cout << "| |\n";
			std::cout << "| * |\n";
			break;
		case 3:
			std::cout << "| * |\n";
			std::cout << "| * |\n";
			std::cout << "| * |\n";
			break;
		case 4:
			std::cout << "| * * |\n";
			std::cout << "| |\n";
			std::cout << "| * * |\n";
			break;
		case 5:
			std::cout << "| * * |\n";
			std::cout << "| * |\n";
			std::cout << "| * * |\n";
			break;
		case 6:
			std::cout << "| * * * |\n";
			std::cout << "| |\n";
			std::cout << "| * * * |\n";
			break;
		default:
			std::cout << " *** Error: illegal die value ***\n";
			break;
		}
		std::cout << "+-------+\n";
	}
}
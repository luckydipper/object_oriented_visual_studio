#include <iostream>
#include <vector>
int main() {std::vector<double> vec(10);std::cout << "Please enter 10 numbers: ";
for (double& elem : vec)
{
	std::cin >> elem;
	for (double elem : vec)
		std::cout << elem << '\n';
}
}
// in c, 64bit compiler's int size was 4byte.
// in c++, 64bit compiler's int size was 4byte
#include <iostream>
#include <vector>
int main() {
	std::vector<int> a;
	int scoreList[3] = { 0 };
	for (int i = 0; i < 10; i++) {
		scoreList[i] = i;
	}
	return 0;
}


#include <iostream>
#include "counter.h"

int read() {
	return count;
}
int increment() {
	if (count < 5)
		count++;
	return 1;
}
int decrement() {
	if (count > 0)
		count--;
	return 1;
}
//int main() {
//	for (int i = 0; i < 5; i++)
//	{
//		read();
//	}
//}

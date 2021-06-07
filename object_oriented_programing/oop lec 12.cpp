#include <iostream>
#include <vector>
class Base {
	int x;
protected:
	std::vector<int> Data;
public:
	Base(int x) :x(x) {
		Data = std::vector<int>(x);
	};
	void print() { std::cout << x << std::endl; }
 	void setN(int repeat, int offset) {
		if (repeat < x) {Data[repeat] = offset;}
	};
	void printData() {
		for (const int element : Data)
			std::cout << element << " ";
		std::cout << "\n Data print complete" << std::endl;
	}
};
class Derived : public Base {
public:
	Derived(int x) : Base(x) {};	
	void insert(int elem) {
		Base::Data.push_back(elem);
	}
};

int main() {
	Base b1(2), b2(10);
	b1.print();		// 2
	b2.print();		// 10
	for (int i = 0; i < 5; i++) {
		b1.setN(i, (i + 1) * 20);//0,20//1,40//2,60
		b2.setN(i, (i + 1) * 10);//0,10//1,20//2,30//3,40//4,50
	}
	b1.printData();  // 20 40
	b2.printData();  // 10 20 30 40 50 0 0 0 0 0

	Derived d(5);
	d.print();		// 5
	d.printData();		// 0 0 0 0 0
	for (int i = 0; i < 10; i++) {
		d.setN(i, (i + 1) * 3);
	}
	d.printData();	// 3 6 9 12 15
	d.insert(99);	// "Base" class does not have "insert" method.
	d.printData();	// 3 6 9 12 15 99

}
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

class Shape {
	static double PI = 3.141592;
public:
	
	virtual void area_calculation() = 0;
	virtual void print() = 0;
};

class TwoDemension : public Shape {

private:
	const std::string status_label[4] = { "Triangle", "Rectangule","Circle" };
	std::string status;
	double x, y, r, area = 0;

public:
	TwoDemension(std::string status, double x, double y, double r);
	void area_calculation();
	void print();
};

bool hasNum(const std::string a[], int size, std::string figure) {
	for (int i = 0; i < size; i++) {
		if (a[i] == figure) {
			return true;
		}
	}
	return false;
}



TwoDemension::TwoDemension(std::string status, double x = 0, double y = 0, double r = 0) : status(status), x(x), y(y), r(r) {
	const std::string* check_label = this-> status_label;
	int size = sizeof(this->status_label) / sizeof(std::string);
	bool adequent_figure = hasNum(check_label, size, status);
	assert(!adequent_figure && "status is not Triangle or Rectangule or Circle ");
};

void TwoDemension::area_calculation() {
	if (this->status == std::string("Triangle")){
		area = this->x * this->y * 1/2;
		std::cout << "Triangle area calcuated.";
	}
}

class TreeDemension : public Shape {

};

int main() {
	TwoDemension triange(std::string("Triangle"), 8., 4.);
	return 0;
}
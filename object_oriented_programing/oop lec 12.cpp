#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "oop lec 12.h"

double Shape::PI = 3.141592;

bool hasNum(const std::string a[], int size, std::string figure) {
	for (int i = 0; i < size; i++) {
		if (a[i] == figure) {
			return true;
		}
	}
	return false;
}

TwoDemension::TwoDemension(std::string status, double x, double y) : status(status), x(x), y(y){
	const std::string* check_label = this->status_label;
	int size = sizeof(this->status_label) / sizeof(std::string);
	bool adequent_figure = hasNum(check_label, size, status);
	assert(adequent_figure && "status is not Triangle or Rectangule");
	std::cout << status << " object has been made" << std::endl;
};
TwoDemension::TwoDemension(std::string status, double r) : status(status), r(r) {
	const std::string* check_label = this->status_label;
	int size = sizeof(this->status_label) / sizeof(std::string);
	bool adequent_figure = hasNum(check_label, size, status);
	assert(adequent_figure && "status is not a Circle ");
	std::cout << status << " object has been made" << std::endl;
};


void TwoDemension::area_calculation() {
	if (this->status == std::string("Triangle")) {
		area = this->x * this->y * 1 / 2;
		std::cout << this -> status << " area calcuated." << std::endl;
	}
	else if (this->status == std::string("Rectangule")) {
		area = this->x * this->y;
		std::cout << this->status << " area calcuated." << std::endl;
	}
	else if (this->status == std::string("Circle")) {
		area = this->r * this->r * this->PI;
		std::cout << this->status << " area calcuated." << std::endl;
	}
}

void TwoDemension::print() {
	std::cout << "Area of " << this->status << " is " << this->area << std::endl;
}

TreeDemension::TreeDemension(std::string status, double x, double y, double z) : status(status), x(x), y(y), z(z) {
	const std::string* check_label = this->status_label_3D;
	int size = sizeof(this->status_label_3D) / sizeof(std::string);
	bool adequent_figure = hasNum(check_label, size, status);
	assert(adequent_figure && "status is not Triangle or Rectangule");
	std::cout << status << " object has been made" << std::endl;
}

TreeDemension::TreeDemension(std::string status, double r) : status(status), r(r) {
	const std::string* check_label = this->status_label_3D;
	int size = sizeof(this->status_label_3D) / sizeof(std::string);
	bool adequent_figure = hasNum(check_label, size, status);
	assert(adequent_figure && "status is not a Circle ");
	std::cout << status << " object has been made" << std::endl;
}

void TreeDemension::area_calculation() {
	if (this->status == std::string("Cube")) {
		area = this->x * this->y * this->z;
		std::cout << this->status << " area calcuated." << std::endl;
	}

	else if (this->status == std::string("Sphere")) {
		area = 4. / 3. *this->r * this->r * this->r* this->PI;
		std::cout << this->status << " area calcuated." << std::endl;
	}
}

void TreeDemension::print() {
	std::cout << "Area of " << this->status << " is " << this->area << std::endl;
}


int main() {
	TwoDemension triange(std::string("Triangle"), 8., 4.);
	triange.area_calculation();
	triange.print();
	TwoDemension circle(std::string("Circle"), 3.);
	circle.area_calculation();
	circle.print();
	TreeDemension sphere(std::string("Sphere"), 3.);
	sphere.area_calculation();
	sphere.print();
	return 0;

}
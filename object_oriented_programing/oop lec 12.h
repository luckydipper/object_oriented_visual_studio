#pragma once
#include <string>
class Shape {

public:
	static double PI;
	virtual void area_calculation() = 0;
	virtual void print() = 0;
};

class TwoDemension : public Shape {

private:
	const std::string status_label[4] = { "Triangle", "Rectangule","Circle" };
	std::string status;
	double x = 0, y = 0, r =0, area = 0;

public:
	TwoDemension(std::string status, double x, double y);
	TwoDemension(std::string status, double r);
	void area_calculation();
	void print();
};

class TreeDemension : public Shape {
	const std::string status_label_3D[4] = { "Cube", "Sphere" };
	std::string status;
	double x = 0, y = 0, z=0, r = 0, area = 0;

public:
	TreeDemension(std::string status, double x, double y, double z);
	TreeDemension(std::string status, double r);
	void area_calculation();
	void print();


};

#include <iostream>

const double PI = 3.141592;

#include <iostream>
class IntPoint {
public:
	int x;
	int y;
	IntPoint(int x, int y) : x(x), y(y) {}
};
class Rectangle {
	IntPoint corner; // Location of the rectangle's lower-left corner
	int width; // The rectangle's width
	int height; // The rectangle's width
public:
	Rectangle(IntPoint pt, int w, int h) :
		corner((pt.x < -100) ? -100 : (pt.x > 100 ? 100 : pt.x),
			(pt.y < -100) ? -100 : (pt.y > 100 ? 100 : pt.y)),
		width((w < 0) ? 0 : w), height((h < 0) ? 0 : h) {}
	int perimeter() {
		return 2 * width + 2 * height;
	}
	int area() {
		return width * height;
	}
	IntPoint get_intpnt() {
		return this->corner;
		//(k에서 corner를 접근해야하는데, private에 있는 변수에 접근하지 못함.)
		//getter setter 생성자를 통해서 private랜덤변수에 접근가능.
		//하지만 배우지 않은 영역이라 불가능했음.
		//https://sourcestudy.tistory.com/20
	}
	int get_width() {
		return width;
	}
	int get_height() {
		return height;
	}

	// Returns true if rectangle r overlaps this
	// rectangle object.
	bool intersect(Rectangle r) {
		IntPoint compare_point = r.get_intpnt();
		int compare_width = r.get_width();
		int compare_height = r.get_height();
		//경계는 교집합이 없기 때문에 equal을 넣지 않음.
		if (corner.x - compare_width < compare_point.x && compare_point.x < corner.x + this->width)
			return false;
		else if (corner.y - compare_height < compare_point.y && compare_point.y < corner.y + this->height)
			return false;
		return true;
	}




	// Returns the length of a diagonal rounded to the nearest
		// integer.
	int diagonal() {
		return  static_cast<int>(sqrt((this->height * this->height) + (this->width * this->width)));
	}
	// Returns the geometric center of the rectangle with
	// the (x,y) coordinates rounded to the nearest integer.
	IntPoint center() {
		int x_middle = (corner.x + corner.x + (this->width)) / 2;
		int y_middle = (corner.y + corner.y +(this->height)) / 2;

		IntPoint result(x_middle, y_middle);
		return result;
	}
	bool is_inside(IntPoint pt) {
		int x = pt.x;
		int y = pt.y;
		//경계는 교집합이 없기 때문에 equal을 넣지 않음.
		if (corner.x < x && x < corner.x + this->width &&
			corner.y < y && y < corner.y + this->height)
			return true;
		return false;
	}
};

class Circle {

public:
	IntPoint corner;
	int radius = 0;
	Circle(int x, int y, int r ) : corner(x,y), radius(r){}
	Circle(IntPoint initial, int r) : corner(initial.x, initial.y), radius(r) {}
	
	double perimeter(){ 
		return 2 * PI * radius;
		}
	double area() {
		return PI * radius * radius;
	}
 };

bool encloses(Rectangle rect, Circle circ) {
	int x_left_coordinate = rect.get_width() + rect.get_intpnt().x;
	if (rect.get_width() != rect.get_height())
	{
		std::cout << "f1";
		return false;
	}
	else if (x_left_coordinate != circ.radius)
	{
		std::cout << rect.get_width() << circ.radius;
		return false;
	}
	return true;
}
int main()
{
	Circle c1(0, 0, 3);
	IntPoint initial(-3, -3);
	Rectangle r1(initial, 6, 6);
	std::cout << encloses(r1, c1);
}
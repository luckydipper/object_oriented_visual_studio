#include <iostream>
int sec(void)
{
	double x_f, x_s, y_f, y_s, x_result, y_result = 0;
	x_f = x_s = y_f = y_s = x_result = y_result; //allocation
	char left_paren, comma, right_paren = '0';
	left_paren = comma = right_paren;
	std::cout << "Please enter the first point: ";
	std::cin >> left_paren >> x_f >> comma >> y_f >> right_paren; // 내 생각엔, 콘솔창에서 char이 나올 때 까지 읽어 들이는 듯,
	std::cout << "Please enter the second point: ";
	std::cin >> left_paren >> x_s >> comma >> y_s >> right_paren;
	
	x_result = (x_f + x_s) / 2;
	y_result = (y_f + y_s) / 2;

	std::cout << "The midpoint of " << left_paren << x_f << ',' << y_f << right_paren\
		<< " and " << left_paren << x_s << ',' << y_s << right_paren \
		<< " is " << left_paren << x_result << ',' << y_result << right_paren << std::endl;
	return 0;
}

int c()
{
	double var = 0;
	int result = 0;
	std::cout << "give me float: ";
	std::cin >> var;
	result = (int)var;
	std::cout << var;
	return 0;
}


int main()
{
	double length, width;
	length = width =0;
	std::cout << "chat lenght and enter, width and enter. to calculate the area and perimeter of rectangle" << std::endl;
	std::cin >> length >> width;

	std::cout << "perimeter is " << 2 * (length + width) << " and area is " << length * width;


}
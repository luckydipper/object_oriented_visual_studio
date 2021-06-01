#include <iostream>
#include <vector>
#include <string>
#include <sstream>

class BigUnsigned {
	std::vector<int> vect;

public:
	BigUnsigned();
	BigUnsigned(unsigned int parm);
	BigUnsigned(const BigUnsigned &copy); //복사 생성자

	BigUnsigned(std::string param);
	void process(unsigned int parm);
	void show();
};

BigUnsigned::BigUnsigned(){
	std::cout << "Default dat is zero \n";
	std::vector<int> zero(1);
	this -> vect = zero;
}
BigUnsigned::BigUnsigned(unsigned int parm) {
	while ((parm / 10 > 0)) {
		
		int value = parm % 10;
		this->vect.push_back(value);
		parm /= 10;
		
	}
	this->vect.push_back(parm);
	std::reverse(this->vect.begin(), this->vect.end());

}
BigUnsigned::BigUnsigned(const BigUnsigned &copy) {
	BigUnsigned result{};
	result = copy; //deep copy
	return result;
}
BigUnsigned::BigUnsigned(std::string parm) {
	int int_str = std::stoi(parm);
	(*this).process(int_str);
}

void BigUnsigned::show() {
		for (int k : vect)
			std::cout << k;
}
void BigUnsigned::process(unsigned int parm) {
	while ((parm / 10 > 0)) {

		int value = parm % 10;
		this->vect.push_back(value);
		parm /= 10;

	}
	this->vect.push_back(parm);
	std::reverse(this->vect.begin(), this->vect.end());
}

int main() {
	BigUnsigned num{};
	BigUnsigned num2{"1635"};
	num2.show();
	return 0;
}
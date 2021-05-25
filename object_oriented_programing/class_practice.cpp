#include <iostream>
#include <string>

class monster {
private:
	char id[10] = {'0'};
	char pw[10] = {'0'};
	
	int set_private() {
		std::cout << "name : " << name << std::endl;
		std::cout << "ID : ";
		std::cin >> id;
		std::cout << "\nPW : ";
		std::cin >> pw;
		std::cout << "\n";
		return 0;
	}

public:
	std::string name;
	int hp;
	int mp;
	int exp;


	int check_status() {
		std::cout << "name = " << name << std::endl;
		std::cout << "id = " << id << std::endl;
		std::cout << "Pw = " << pw << std::endl;
		std::cout << "hp = " << hp << std::endl;
		std::cout << "mp = " << mp << std::endl;
		std::cout << "exp = " << exp << std::endl;
		return 0;
	}

	monster(std::string names, int hp, int mp) : name(names), hp(hp), mp(mp), exp(0){
		set_private();
	}

};



int main() {
	monster mushmom("ÁÖÈ² ¹ö¼¸", 10, 10);
	monster chorock("ÃÊ·Ï ¹ö¼¸", 4, 2);
	mushmom.check_status();
	chorock.check_status();
	return 0;
}
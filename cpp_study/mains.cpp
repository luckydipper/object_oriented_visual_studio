#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <cstdlib>
#include <ctime>

int rand_time_math_lib();
int vector_STL();
//int string_STL();


class monster {
	static int total_monster_num_; //자동으로 0이 됨.
	int const id;
	int hp;
	int mp;
	int exp;
protected:
	monster(int id, int hp, int mp, int exp);
	//monster();
public:
	std::string name; //static은 따로 format해줘야함.
	//virtual funciton
	virtual void attack(int monster) {
		int a = 0;
	};
	//pure virtual
	virtual void feature_show_() = 0;
	~monster() {
		total_monster_num_--;
		std::cout << "marin Dies\n";
	};
};

class Marin : public monster{
	bool is_dead;
	const std::string name = "Marin"; // const값은 header에서 format 하자.
	const int damage = 5;		// 이후 const methodfㄹ 통해 접근 가능
public:
	Marin(int id, int hp, int mp, int exp, bool is_dead);
	Marin();
	virtual void feature_show_();
};

class Jilut : public monster {
	bool is_dead;
	const std::string name = "Jilut";
	const int damage = 7;
public:
	Jilut(int id, int hp, int mp, int exp, bool is_dead);
	virtual void feature_show_();
};
//monster::monster():id(1) {};
int monster::total_monster_num_ = 0;
monster::monster(int id, int hp, int mp, int exp) : id(id), hp(hp), mp(mp), exp(exp) { total_monster_num_++; };


//const std::string name = "";
//const int Marin::damage = 5;
Marin::Marin(int id, int hp, int mp, int exp, bool is_dead) : monster(id, hp, mp, exp), is_dead(is_dead) {
	std::cout << "Marin 생성";
};
//Marin::Marin() {};
void Marin::feature_show_() {
	std::cout <<"marin은 테란의 main 종족이다. 총을 들고 다니며, 약을 한다.";
}

Jilut::Jilut(int id, int hp, int mp, int exp, bool is_dead) : monster(id, hp, mp, exp), is_dead(is_dead) {
	std::cout << "jilut 생성";
};
void Jilut::feature_show_() {
	std::cout << "jilut은 프로토스의 근접 기본 유닛이다.";
};


void creat_marin() {
	std::cout << "function called \n";
	Marin tem_marin(5,3,2,6,true);
}
int main() {
	std::cout << "hello world";
	creat_marin();
	Marin marins(123, 6, 5, 2, true);
	Marin* tem_marin = new Marin(123, 6, 5, 2, true);
	delete tem_marin;
	int size = 10;
	Marin* pointer = new Marin[size];
	std::vector<int> amazon(11, 6);
	std::vector<int>::iterator iter = std::begin(amazon);
	int a = 2, b = 3;
	auto func = [](int i) { return i % 2 == 1; };
	func(4);  // false;
	return 0;
//	Marin* marin_array = new Marin[];
};



int rand_time_math_lib() {
	srand(5);
	std::cout << rand();
	time_t current_time = time(NULL);
	return 0;
}

int vector_STL() {
	std::vector<int> students_scores(10, 3);
	std::vector<int> arbitrary_num{ 1, 3, 5,6 };
	std::vector<int>::iterator iter = std::begin(arbitrary_num);
	std::cout << *iter;
	std::cout << *(++iter);
	for (int& score : students_scores) {
		score++;
		std::cout << score << ",";
	}
	std::cout << arbitrary_num[2];
	std::vector< std::vector<int> > iamge(100, std::vector<int>(3));
	// array int a[60];
	// 2d parameter는 a[][30]으로 받고, 1d 는 a[]로 받는게 직관적일듯
	return 0;
}
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
	static int total_monster_num_; //�ڵ����� 0�� ��.
	int const id;
	int hp;
	int mp;
	int exp;
protected:
	monster(int id, int hp, int mp, int exp);
	//monster();
public:
	std::string name; //static�� ���� format�������.
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
	const std::string name = "Marin"; // const���� header���� format ����.
	const int damage = 5;		// ���� const methodf�� ���� ���� ����
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
	std::cout << "Marin ����";
};
//Marin::Marin() {};
void Marin::feature_show_() {
	std::cout <<"marin�� �׶��� main �����̴�. ���� ��� �ٴϸ�, ���� �Ѵ�.";
}

Jilut::Jilut(int id, int hp, int mp, int exp, bool is_dead) : monster(id, hp, mp, exp), is_dead(is_dead) {
	std::cout << "jilut ����";
};
void Jilut::feature_show_() {
	std::cout << "jilut�� �����佺�� ���� �⺻ �����̴�.";
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
	// 2d parameter�� a[][30]���� �ް�, 1d �� a[]�� �޴°� �������ϵ�
	return 0;
}
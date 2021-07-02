#include <iostream>

class Marine {
    static int total_marine_num;
    const static int i = 0;

    int hp;                // 마린 체력
    int coord_x, coord_y;  // 마린 위치
    bool is_dead;

    const int default_damage;  // 기본 공격력

public:
    Marine();              // 기본 생성자
    Marine(int x, int y);  // x, y 좌표에 마린 생성
    Marine(int x, int y, int default_damage);

    int attack() const;                    // 데미지를 리턴한다. //const member변수는 const만 보여줄 수 있어.
    Marine& be_attacked(int damage_earn);  // 입는 데미지
    void move(int x, int y);               // 새로운 위치

    void show_status();  // 상태를 보여준다.
    static void show_total_marine(); //static은 class에 종속된 것이라, format도 class로 따로 해줘야하지만, object없이 class로 쓸 수 있어.
    ~Marine() { total_marine_num--; }
};
int Marine::total_marine_num = 0;
void Marine::show_total_marine() {
    std::cout << "전체 마린 수 : " << total_marine_num << std::endl;
}
Marine::Marine()
    : hp(50), coord_x(0), coord_y(0), default_damage(5), is_dead(false) {
    total_marine_num++;
}

Marine::Marine(int x, int y)
    : coord_x(x),
    coord_y(y),
    hp(50),

    default_damage(5),
    is_dead(false) {
    total_marine_num++;
}

Marine::Marine(int x, int y, int default_damage)
    : coord_x(x),
    coord_y(y),
    hp(50),
    default_damage(default_damage),
    is_dead(false) {
    total_marine_num++;
}

void Marine::move(int x, int y) {
    coord_x = x;
    coord_y = y;
}
int Marine::attack() const { return default_damage; }
Marine& Marine::be_attacked(int damage_earn) {
    hp -= damage_earn;
    if (hp <= 0) is_dead = true;

    return *this;
}
void Marine::show_status() {
    std::cout << " *** Marine *** " << std::endl;
    std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
        << std::endl;
    std::cout << " HP : " << hp << std::endl;
    std::cout << " 현재 총 마린 수 : " << total_marine_num << std::endl;
}

//int main() {
//    Marine marine1(2, 3, 5);
//    marine1.show_status();
//
//    Marine marine2(3, 5, 10);
//    marine2.show_status();
//
//    std::cout << std::endl << "마린 1 이 마린 2 를 두 번 공격! " << std::endl;
//    marine2.be_attacked(marine1.attack()).be_attacked(marine1.attack());
//
//    marine1.show_status();
//    marine2.show_status();
////}
//int main() {
//    Marine* marines[100];
//
//    marines[0] = new Marine(2, 3, "Marine 2");
//    marines[1] = new Marine(1, 5, "Marine 1");
//
//    marines[0]->show_status();
//    marines[1]->show_status();
//
//    std::cout << std::endl << "마린 1 이 마린 2 를 공격! " << std::endl;
//
//    marines[0]->be_attacked(marines[1]->attack());
//
//    marines[0]->show_status();
//    marines[1]->show_status();
//
//    delete marines[0];
//    delete marines[1];


//#include <string.h>
//#include <iostream>
//
//class Marine {
//    int hp;                // 마린 체력
//    int coord_x, coord_y;  // 마린 위치
//    int damage;            // 공격력
//    bool is_dead;
//    char* name;  // 마린 이름
//
//public:
//    Marine();                                       // 기본 생성자
//    Marine(int x, int y, const char* marine_name);  // 이름까지 지정
//    Marine(int x, int y);  // x, y 좌표에 마린 생성
//    ~Marine();
//
//    int attack();                       // 데미지를 리턴한다.
//    void be_attacked(int damage_earn);  // 입는 데미지
//    void move(int x, int y);            // 새로운 위치
//
//    void show_status();  // 상태를 보여준다.
//};
//Marine::Marine() {
//    hp = 50;
//    coord_x = coord_y = 0;
//    damage = 5;
//    is_dead = false;
//    name = NULL;
//}
//Marine::Marine(int x, int y, const char* marine_name) {
//    name = new char[strlen(marine_name) + 1];
//    strcpy(name, marine_name);
//
//    coord_x = x;
//    coord_y = y;
//    hp = 50;
//    damage = 5;
//    is_dead = false;
//}
//Marine::Marine(int x, int y) {
//    coord_x = x;
//    coord_y = y;
//    hp = 50;
//    damage = 5;
//    is_dead = false;
//    name = NULL;
//}
//void Marine::move(int x, int y) {
//    coord_x = x;
//    coord_y = y;
//}
//int Marine::attack() { return damage; }
//void Marine::be_attacked(int damage_earn) {
//    hp -= damage_earn;
//    if (hp <= 0) is_dead = true;
//}
//void Marine::show_status() {
//    std::cout << " *** Marine : " << name << " ***" << std::endl;
//    std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
//        << std::endl;
//    std::cout << " HP : " << hp << std::endl;
//}
//Marine::~Marine() {
//    std::cout << name << " 의 소멸자 호출 ! " << std::endl;
//    if (name != NULL) {
//        delete[] name;
//    }
//}
//int main() {
//    Marine* marines[100];
//
//    marines[0] = new Marine(2, 3, "Marine 2");
//    marines[1] = new Marine(1, 5, "Marine 1");
//
//    marines[0]->show_status();
//    marines[1]->show_status();
//
//    std::cout << std::endl << "마린 1 이 마린 2 를 공격! " << std::endl;
//
//    marines[0]->be_attacked(marines[1]->attack());
//
//    marines[0]->show_status();
//    marines[1]->show_status();
//
//    delete marines[0];
//    delete marines[1];
//}

//// 템플릿 첫 활용
//#include <iostream>
//#include <string>
//
//template <typename T>
//class Vector {
//    T* data;
//    int capacity;
//    int length;
//
//public:
//    // 생성자
//    Vector(int n = 1) : data(new T[n]), capacity(n), length(0) {}
//
//    // 맨 뒤에 새로운 원소를 추가한다.
//    void push_back(T s) {
//        if (capacity <= length) {
//            T* temp = new T[capacity * 2];
//            for (int i = 0; i < length; i++) {
//                temp[i] = data[i];
//            }
//            delete[] data;
//            data = temp;
//            capacity *= 2;
//        }
//
//        data[length] = s;
//        length++;
//    }
//
//    // 임의의 위치의 원소에 접근한다.
//    T operator[](int i) { return data[i]; }
//
//    // x 번째 위치한 원소를 제거한다.
//    void remove(int x) {
//        for (int i = x + 1; i < length; i++) {
//            data[i - 1] = data[i];
//        }
//        length--;
//    }
//
//    // 현재 벡터의 크기를 구한다.
//    int size() { return length; }
//
//    ~Vector() {
//        if (data) {
//            delete[] data;
//        }
//    }
//};
//
//int main() {
//    // int 를 보관하는 벡터를 만든다.
//    Vector<int> int_vec;
//    int_vec.push_back(3);
//    int_vec.push_back(2);
//
//    std::cout << "-------- int vector ----------" << std::endl;
//    std::cout << "첫번째 원소 : " << int_vec[0] << std::endl;
//    std::cout << "두번째 원소 : " << int_vec[1] << std::endl;
//
//    Vector<std::string> str_vec;
//    str_vec.push_back("hello");
//    str_vec.push_back("world");
//    std::cout << "-------- std::string vector -------" << std::endl;
//    std::cout << "첫번째 원소 : " << str_vec[0] << std::endl;
//    std::cout << "두번째 원소 : " << str_vec[1] << std::endl;
//}

//template <typename T>
//T max(T& a, T& b) {
//    return a > b ? a : b;
//}
//
//int main() {
//    int a = 1, b = 2;
//    std::cout << "Max (" << a << "," << b << ") ? : " << max(a, b) << std::endl;
//
//    std::string s = "hello", t = "world";
//    std::cout << "Max (" << s << "," << t << ") ? : " << max(s, t) << std::endl;
//}

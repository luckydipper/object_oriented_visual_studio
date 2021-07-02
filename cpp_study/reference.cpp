#include <iostream>

class Marine {
    static int total_marine_num;
    const static int i = 0;

    int hp;                // ���� ü��
    int coord_x, coord_y;  // ���� ��ġ
    bool is_dead;

    const int default_damage;  // �⺻ ���ݷ�

public:
    Marine();              // �⺻ ������
    Marine(int x, int y);  // x, y ��ǥ�� ���� ����
    Marine(int x, int y, int default_damage);

    int attack() const;                    // �������� �����Ѵ�. //const member������ const�� ������ �� �־�.
    Marine& be_attacked(int damage_earn);  // �Դ� ������
    void move(int x, int y);               // ���ο� ��ġ

    void show_status();  // ���¸� �����ش�.
    static void show_total_marine(); //static�� class�� ���ӵ� ���̶�, format�� class�� ���� �����������, object���� class�� �� �� �־�.
    ~Marine() { total_marine_num--; }
};
int Marine::total_marine_num = 0;
void Marine::show_total_marine() {
    std::cout << "��ü ���� �� : " << total_marine_num << std::endl;
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
    std::cout << " ���� �� ���� �� : " << total_marine_num << std::endl;
}

//int main() {
//    Marine marine1(2, 3, 5);
//    marine1.show_status();
//
//    Marine marine2(3, 5, 10);
//    marine2.show_status();
//
//    std::cout << std::endl << "���� 1 �� ���� 2 �� �� �� ����! " << std::endl;
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
//    std::cout << std::endl << "���� 1 �� ���� 2 �� ����! " << std::endl;
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
//    int hp;                // ���� ü��
//    int coord_x, coord_y;  // ���� ��ġ
//    int damage;            // ���ݷ�
//    bool is_dead;
//    char* name;  // ���� �̸�
//
//public:
//    Marine();                                       // �⺻ ������
//    Marine(int x, int y, const char* marine_name);  // �̸����� ����
//    Marine(int x, int y);  // x, y ��ǥ�� ���� ����
//    ~Marine();
//
//    int attack();                       // �������� �����Ѵ�.
//    void be_attacked(int damage_earn);  // �Դ� ������
//    void move(int x, int y);            // ���ο� ��ġ
//
//    void show_status();  // ���¸� �����ش�.
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
//    std::cout << name << " �� �Ҹ��� ȣ�� ! " << std::endl;
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
//    std::cout << std::endl << "���� 1 �� ���� 2 �� ����! " << std::endl;
//
//    marines[0]->be_attacked(marines[1]->attack());
//
//    marines[0]->show_status();
//    marines[1]->show_status();
//
//    delete marines[0];
//    delete marines[1];
//}

//// ���ø� ù Ȱ��
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
//    // ������
//    Vector(int n = 1) : data(new T[n]), capacity(n), length(0) {}
//
//    // �� �ڿ� ���ο� ���Ҹ� �߰��Ѵ�.
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
//    // ������ ��ġ�� ���ҿ� �����Ѵ�.
//    T operator[](int i) { return data[i]; }
//
//    // x ��° ��ġ�� ���Ҹ� �����Ѵ�.
//    void remove(int x) {
//        for (int i = x + 1; i < length; i++) {
//            data[i - 1] = data[i];
//        }
//        length--;
//    }
//
//    // ���� ������ ũ�⸦ ���Ѵ�.
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
//    // int �� �����ϴ� ���͸� �����.
//    Vector<int> int_vec;
//    int_vec.push_back(3);
//    int_vec.push_back(2);
//
//    std::cout << "-------- int vector ----------" << std::endl;
//    std::cout << "ù��° ���� : " << int_vec[0] << std::endl;
//    std::cout << "�ι�° ���� : " << int_vec[1] << std::endl;
//
//    Vector<std::string> str_vec;
//    str_vec.push_back("hello");
//    str_vec.push_back("world");
//    std::cout << "-------- std::string vector -------" << std::endl;
//    std::cout << "ù��° ���� : " << str_vec[0] << std::endl;
//    std::cout << "�ι�° ���� : " << str_vec[1] << std::endl;
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

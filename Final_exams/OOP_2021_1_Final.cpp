/*             Object-Oriented Programming, Final exam (2021-1)                       */
//  Department(�а�): ����Ʈ���������а�         Student ID(�й�): 2020105695   Name(�̸�): ����              
//
// Write your answers in Korean or English(����� �ѱ��� �Ǵ� ����� �ۼ��Ͻÿ�).

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>

//#define _MAC 
#define _MSVC 

#ifdef _MAC
void OOP_2021_1_Final(std::string);
#else
void OOP_2021_1_Final();
#ifdef _MSVC 
#ifdef WIN32
#pragma comment(lib, "OOP_2021_1_Final_Lib_Win_MSVC32.Lib")
#else
#pragma comment(lib, "OOP_2021_1_Final_Lib_Win_MSVC64.Lib")
#endif
#endif
#endif

#ifdef _MAC                         // Mac Only
std::string currentPath = "";       // Paste only the path shown by GD(GD�� ǥ�õǴ� ��θ� �ٿ���������).
#endif
//#define _MAC 
#define _MSVC 

/*
1(8).Trace the evaluation of the following expressions, and write their resulting valuesand corresponding variables
(�Ʒ� ������ �� ����(��� �� �� ������ ������ ����)�� �����϶�).
a)
    int x[5] = {1, 2, 3, 4, 5};
    int *p = x+1;
    int ans1 = *p++;
    int ans2 = *p;

    c�� array ������ ������. x�� identifier�� list�� ���� �ּ��� 1�� �ּҰ��̴�. x���� 1�� ���ϸ� p�� ���� �ּ� 2�� ����Ų��.
    ans1���� x+1�� �ּҰ��� ������, 2�� ����ȴ�. ����, p���� x+2 3�� ����Ű�� �ּҰ��� ����ȴ�. �׷��Ƿ� ans2���� 3�� �������� ����ȴ�. 


 b)
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    int *p = *(a+1);
    int ans = *(p+2);
    a�� 2���� array�� ù �ּҰ� 1�� ����Ű�� �ּҸ� identifier�� ���´�. 
    3���� int�� �����ϴ� array�� ����ų�� , a���� 1�� ���ϸ� 4�� ����Ű�� �ּҰ��� ��Ÿ����.
    �׷��Ƿ� p���� 4�� ����Ű�� �ּҰ��� ����ȴ�. 
    p�� 4���� 6������ 3���� int�� �����ϴ�  array�� ù �ּҰ��̴�.
    p�� 4�� ���������� 2�� ���� ��, asterisk�� ���� ���� ��ȯ�Ͽ�, ans ���� 6�� ����ȴ�
*/
/*
2(8). Explain any errors in the following program
   (�Ʒ� ���α׷��� ������ ������ �����϶�).
a)
#include <iostream>
class A {
    int x;
pubic:
    A(int x) : x(x) {}
    void Print() const {
        std::cout << x++ << std::endl;
    }
};
int main() {
    A a1, a2(2), a3(3);
    a2.x = 10;
}

// ������ �ִ�. const method�� �ȿ� ����ִ� ������ ���� �ٲٸ� �ȵȴ�.
// ���� a1�� ���鶧, default constructor�� ����.


b)
class A {
    int a;
public:
    int GetSum() {
        return a;
    }
};

class B : public A {
protected:
    int b;
public:
    int GetSum() {
        return a+b;
    }
};

class C : public B {
    int c;
public:
    int GetSum() {
        return a+b+c;
    }
}
base class�� private ������ a�� �������ִ�. �׷��Ƿ� drived class, B�� C������ a�� ������ �Ұ����ϴ�.
�����ϰ� �ϰܸ� a�� protected ������ ��������� �Ѵ�.

*/

/*
3(4). Fill in _____ to print the given results(�־��� ����� ��µǵ��� _____�� ä��ÿ�).
#include <iostream>
class A {
    int a;
public:
    A(int a) : a(a) {}
    void print() const{
        std::cout << a << std::endl;
    }
    A operator -(const A &aa) {
        return {a-aa.a};
    }
};

int main() {
    A a1(1), a2(2);
    const A a3(3);

    a1.print(); // prints 1
    a3.print(); // prints 3

    A a4 = a1 - a2;
    a4.print(); // prints -1
}
*/

/*
4.(60) Write the declarations and definitions for the classes that work as the following codes and comments.
       (�Ʒ��� ���� �ڵ�� �ּ��� ���� �����ϴ� Ŭ������ �����ϰ� �����϶�)
// All data members of classes must be declared as private or protected access types.
// (Ŭ������ ��� ������ ����� private �Ǵ� protected ���� �������� �����϶�)

    Point2D b1(5, 2);
    Point2D b2(3, 7);
    Point3D d1(4, 3, 2);
    Point3D d2(5, 9, 2);

    Point2D& r1 = b1;
    r1.print();   // prints 5, 2
    Point2D& r2 = d1;
    r2.print();            // prints 4, 3, 2

    Point2D b = b1 + b2;
    b.print();  // prints 8, 9
    Point3D d = d1 + d2;
    d.print();  // prints 9, 12, 4

    const Point2D cb1 = d1;
    cb1.print();    // prints 4, 3

    Rect2D rect1(Point2D(2, 5), Point2D(3, 2));
    Rect2D rect2(Point2D(1, 7), Point2D(6, 3));
    std::cout << rect1.isEmpty() << std::endl;  // prints 1

    Rect2D rect3 = rect1.Intersect(rect2);
    rect3.print();  // prints 2, 5
                    //        3, 3
�������� ������ �Ʒ���

��: 
class Point2D {
private:
    int x, y;
protected:

public:
    Point2D() {};
    Point2D(int x, int y) : x(x), y(y) {};
    void print() {
        std::cout << x << "," << y << "\n";
    };
    Point2D operator+(Point2D& aa) {
        std::cout << x + aa.x << ", ";
        std::cout << y + aa.y;
        aa.x += x;
        aa.y += y;
        return aa;
    }
};

class Point3D : public Point2D{
private:
    int x, y, z;

public:
    Point3D() {};
    Point3D(int x, int y, int z) : x(x), y(y), z(z) {};
    void print() {
        std::cout << x << "," << y << "," << z << "\n";
    };
    Point3D operator+(Point3D& aa) {
        std::cout << x + aa.x << ", ";
        std::cout << y + aa.y << ", ";
        std::cout << z + aa.z;
        aa.x += x;
        aa.y += y;
        aa.z += z;
        return aa;
    }
};

*/

/*
* 5.(10)  Explain a pure virtual function with an example.
*         (���� ���� �Լ��� ���� ��� �����϶�)
*
* pure virtual function�� class�� method��
* virtual void foo() = 0;
* �÷� �����ȴ�. �� base class������ ���������� �������� �ʴ´�.
* �̸� ��� ���� drived class������ foo()�� ���ؼ� �����ؾ��Ѵ�.
* 
* class base {
public:
    virtual void hello() = 0;

};

class drived : public base {
    virtual void hello() {
        std::cout << "drived class���� ���� ������� ��.";
    };

    interface�� ����� ���̴�.
};
*/

/*
* 6.(10) Explain static data member and static member function with example.
*        (static ������ ����� static ��� �Լ��� ���� ��� �����϶�)
*
* static ��� ������ �ѹ� ����Ǹ� class���ο� ����ȴ�.
* �׷��Ƿ� class�� ���ؼ� ������ �����ϴ�.
* ��� object�� static member������ �����ϰ�, static memeber function�� ���ؼ� static member ������ ����ϴ� method�� ����� �ִ�.
* 
* 
class base {
    static int var;
public:
    virtual void hello() {};
    static void print() { std::cout << var; }; // �̿Ͱ��� STATIC ������ ����� �� �� �ִ�.
};
int base::var = 0;
�� �ʱ�ȭ ����, �� �� �ִ�.

*/

class base {
    static int var;
public:
    virtual void hello() {};
    static void print() { std::cout << var; };
};

class drived : public base {
    virtual void hello() {
        std::cout << "base���� ���� ���������.";
    };
};


class A {
    int a;
public:
    A(int a) : a(a) {}
    void print() const{
        std::cout << a << std::endl;
    }
    A operator -(const A& aa) {
        return { a - aa.a };
    }
};



class Point2D {
private:
    int x, y;
protected:

public:
    Point2D() {};
    Point2D(int x, int y) : x(x), y(y) {};
    void print() {
        std::cout << x << "," << y << "\n";
    };
    Point2D operator+(Point2D& aa) {
        std::cout << x + aa.x << ", ";
        std::cout << y + aa.y;
        aa.x += x;
        aa.y += y;
        return aa;
    }
};

class Point3D : public Point2D{
private:
    int x, y, z;

public:
    Point3D() {};
    Point3D(int x, int y, int z) : x(x), y(y), z(z) {};
    void print() {
        std::cout << x << "," << y << "," << z << "\n";
    };
    Point3D operator+(Point3D& aa) {
        std::cout << x + aa.x << ", ";
        std::cout << y + aa.y << ", ";
        std::cout << z + aa.z;
        aa.x += x;
        aa.y += y;
        aa.z += z;
        return aa;
    }
};

//
//Point2D b1(5, 2);
//Point2D b2(3, 7);
//Point3D d1(4, 3, 2);
//Point3D d2(5, 9, 2);
//
//Point2D& r1 = b1;
//r1.print();   // prints 5, 2
//Point2D& r2 = d1;
//r2.print();            // prints 4, 3, 2
//
//Point2D b = b1 + b2;
//b.print();  // prints 8, 9
//Point3D d = d1 + d2;
//d.print();  // prints 9, 12, 4
//
//const Point2D cb1 = d1;
//cb1.print();    // prints 4, 3
int main(){
#ifdef _MAC
    OOP_2021_1_Final(currentPath);
#else
	OOP_2021_1_Final();
#endif
	setlocale(LC_ALL, "");

    // Do not change the codes above in the main function(main �Լ����� ���� ������ �������� ���ÿ�).

    // You can optionally use the remaining parts(���� �κ��� �����Ӱ� ����ϼ���).
    int a[2][3] = { 1, 2, 3, 4, 5, 6 };
    int* p = *(a + 1);

    int ans = *(p + 2);

    A a1(1), a2(2);
    const A a3(3);

    a1.print(); // prints 1
    a3.print(); // prints 3

    A a4 = a1 - a2;
    a4.print(); // prints -1
    Point2D b1(5, 2);
    Point2D b2(3, 7);
    Point3D d1(4, 3, 2);
    Point3D d2(5, 9, 2);

    Point2D& r1 = b1;
    r1.print();   // prints 5, 2
    Point2D& r2 = d1;
    r2.print();            // prints 4, 3, 2

    Point2D b = b1 + b2;
    b.print();  // prints 8, 9
    Point3D d = d1 + d2;
    d.print();  // prints 9, 12, 4

}

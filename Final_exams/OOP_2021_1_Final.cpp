/*             Object-Oriented Programming, Final exam (2021-1)                       */
//  Department(학과): 소프트웨어융합학과         Student ID(학번): 2020105695   Name(이름): 김희성              
//
// Write your answers in Korean or English(답안은 한국어 또는 영어로 작성하시오).

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
std::string currentPath = "";       // Paste only the path shown by GD(GD로 표시되는 경로만 붙여넣으세요).
#endif
//#define _MAC 
#define _MSVC 

/*
1(8).Trace the evaluation of the following expressions, and write their resulting valuesand corresponding variables
(아래 수식의 평가 과정(결과 값 및 연관된 변수를 포함)을 설명하라).
a)
    int x[5] = {1, 2, 3, 4, 5};
    int *p = x+1;
    int ans1 = *p++;
    int ans2 = *p;

    c의 array 형식을 따른다. x의 identifier는 list에 시작 주소인 1의 주소값이다. x에다 1을 더하면 p는 다음 주소 2를 가르킨다.
    ans1에는 x+1의 주소값의 실제값, 2가 저장된다. 이후, p에는 x+2 3을 가르키는 주소값이 저장된다. 그러므로 ans2에는 3의 실제값이 저장된다. 


 b)
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    int *p = *(a+1);
    int ans = *(p+2);
    a는 2차원 array의 첫 주소값 1을 가르키는 주소를 identifier로 갖는다. 
    3개의 int를 저장하는 array를 가르킬때 , a에다 1을 더하면 4를 가르키는 주소값을 나타낸다.
    그러므로 p에는 4를 가르키는 주소값이 저장된다. 
    p는 4부터 6까지의 3개의 int를 저장하는  array의 첫 주소값이다.
    p는 4를 가르켰지만 2를 더한 후, asterisk로 실제 값을 반환하여, ans 에는 6이 저장된다
*/
/*
2(8). Explain any errors in the following program
   (아래 프로그램의 오류가 있으면 설명하라).
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

// 오류가 있다. const method는 안에 들어있는 변수의 값을 바꾸면 안된다.
// 또한 a1을 만들때, default constructor가 없다.


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
base class의 private 변수로 a가 지정되있다. 그러므로 drived class, B와 C에서는 a에 접근이 불가능하다.
가능하게 하겨면 a를 protected 영역에 선언해줘야 한다.

*/

/*
3(4). Fill in _____ to print the given results(주어진 결과가 출력되도록 _____을 채우시오).
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
       (아래와 같은 코드와 주석과 같이 동작하는 클래스를 선언하고 정의하라)
// All data members of classes must be declared as private or protected access types.
// (클래스의 모든 데이터 멤버는 private 또는 protected 접근 권한으로 지정하라)

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
왼쪽위점 오른쪽 아래점

답: 
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
*         (순수 가상 함수를 예를 들어 설명하라)
*
* pure virtual function은 class의 method에
* virtual void foo() = 0;
* 꼴로 지정된다. 즉 base class에서는 직접적으로 정의하지 않는다.
* 이를 상속 받은 drived class에서는 foo()에 대해서 정의해야한다.
* 
* class base {
public:
    virtual void hello() = 0;

};

class drived : public base {
    virtual void hello() {
        std::cout << "drived class에서 따로 정해줘야 함.";
    };

    interface와 비슷한 것이다.
};
*/

/*
* 6.(10) Explain static data member and static member function with example.
*        (static 데이터 멤버와 static 멤버 함수를 예를 들어 설명하라)
*
* static 멤버 변수는 한번 시행되면 class내부에 저장된다.
* 그러므로 class를 통해서 접근이 가능하다.
* 모든 object가 static member변수를 공유하고, static memeber function을 통해서 static member 변수를 사용하는 method를 만들수 있다.
* 
* 
class base {
    static int var;
public:
    virtual void hello() {};
    static void print() { std::cout << var; }; // 이와같이 STATIC 변수를 출력해 줄 수 있다.
};
int base::var = 0;
로 초기화 한후, 쓸 수 있다.

*/

class base {
    static int var;
public:
    virtual void hello() {};
    static void print() { std::cout << var; };
};

class drived : public base {
    virtual void hello() {
        std::cout << "base에서 따로 정해줘야함.";
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

    // Do not change the codes above in the main function(main 함수에서 위의 내용은 수정하지 마시오).

    // You can optionally use the remaining parts(이후 부분은 자유롭게 사용하세요).
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

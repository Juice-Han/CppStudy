#include <iostream>
using namespace std;

class A{
    int a;
    public:
    A(){cout << "A생성자" << endl;}
    ~A(){cout << "A소멸자" << endl;}
};
class B : public A{
    int b;
    public:
    B(){cout << "B생성자" << endl;}
    B(int x){b = x; cout << "매개변수생성자 B" << endl;}
    ~B(){cout << "B소멸자" << endl;}
};
class C : public B{
    int a;
    public:
    C() : B(3){cout << "C생성자" << endl;}
    ~C(){cout << "C소멸자" << endl;}
};

int main(){
    C c;
}
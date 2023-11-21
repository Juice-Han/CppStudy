#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle(int radius=1){this->radius = radius;}
    int getRadius(){return radius;}
};

template <class T>
void myswap(T& a, T& b){
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int a=4,b=5;
    cout << a << ' ' << b << endl;
    myswap(a,b);
    cout << a << ' ' << b << endl;

    Circle c1(3), c2(6);
    cout << c1.getRadius() << ' ' << c2.getRadius() << endl;
    myswap(c1,c2);
    cout << c1.getRadius() << ' ' << c2.getRadius() << endl;
}
#include <iostream>
using namespace std;

class Circle{
    int radius;
    public:
    Circle(){radius = 1;};
    Circle(int radius){this->radius = radius;}
    void setRadius(int radius){this->radius = radius;}
    double getArea(){return 3.14*radius*radius;}
};

void readRadius(Circle& c){ //참조변수를 통해 Circle 객체 입력받기
    int r;
    cout << "반지름을 입력해주세요: ";
    cin >> r;
    c.setRadius(r);
}

int main(){
    Circle a(3);
    cout << a.getArea() << endl;
    readRadius(a);
    cout << a.getArea() << endl;    
}
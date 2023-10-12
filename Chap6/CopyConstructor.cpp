#include <iostream>
using namespace std;

class Circle{
    private:
    int radius;
    public:
    Circle(){radius = 1;}
    Circle(int radius){this->radius = radius;}
    Circle(const Circle& c); // 복사 생성자는 클래스당 하나만 선언할 수 있고, 매개변수는 const 클래스& 변수이름 이 들어가야한다.
    double getArea(){return 3.14*radius*radius;}
};

Circle::Circle(const Circle& c){
    this->radius = c.radius;
    cout << "복사 생성자 실행" << endl;
}

int main(){
    Circle src(30);
    Circle dest(src);

    cout << dest.getArea() << endl;
}
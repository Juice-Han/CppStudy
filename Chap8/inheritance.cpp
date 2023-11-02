#include <iostream>
using namespace std;

class Point{
private:
    int x, y;
public:
    void set(int x, int y){this->x = x; this->y = y;};
    void showPoint(){cout << "x = " << x << ", y= " << y << endl;};
};

class ColorPoint : public Point{
private:
    string color;
public:
    void setColor(string color){this->color = color;}
    void showColorPoint(){cout << color << ": "; showPoint();}
};

int main(){
    //업 캐스팅
    // ColorPoint cp;
    // Point *pBase = &cp; // 업 캐스팅(up casting) : 파생클래스 객체는 기본클래스의 멤버를 모두 가지고 있기 때문에 기본클래스 포인터로도 가리킬수 있다. 이것이 업 캐스팅이다.

    // cp.set(3,4);
    // cp.setColor("Red");
    // cp.showColorPoint();
    // pBase->showPoint(); //업 캐스팅된 파생클래스 객체는 기본클래스가 가지고 있던 멤버 함수들만 사용할 수 있게 된다.
    
    //다운 캐스팅
    ColorPoint *pDer;
    Point *pBase, po;
    pBase = &po;
    pDer = (ColorPoint *) pBase; //다운 캐스팅을 하려면 업 캐스팅과는 달리 명시적 타입변환을 해줘야 한다. 업 캐스팅은 명시적 타입변환을 생략할 수 있다.

    pDer->setColor("Red"); //컴파일 시에는 문제가 발생하지 않으나 실행 중에는 객체에 color 속성이 존재하지 않기 때문에 오류가 발생한다.
}
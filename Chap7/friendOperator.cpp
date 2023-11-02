#include <iostream>
using namespace std;

class Power{
    int kick;
    int punch;
public:
    Power(int kick=0, int punch=0){
        this->kick = kick; this->punch = punch;
    }
    void show(){cout << "kick=" << kick << " punch=" << punch << endl;}
    // 클래스 내부함수로 연산자 중복함수 구현
    // Power operator+(Power op2){ //컴파일러에 의해 a + b 는 a. + (b) 라고 바뀐다. 그러므로 Power객체의 operator+ 함수가 실행된다.
    //     Power tmp;
    //     tmp.kick = this->kick + op2.kick;
    //     tmp.punch = this->punch + op2.punch;
    //     return tmp;   
    // }
    // bool operator==(Power op2){ //컴파일러에 의해 a == b 는 a. == (b) 로 바뀐다. 그러므로 Power객체의 operator == 함수가 실행된다.
    //     if(this->kick == op2.kick && this->punch == op2.punch) return true;
    //     else return false;
    // }

    // Power& operator+=(Power op2){
    //     this->kick += op2.kick;
    //     this->punch += op2.punch;
    //     return *this;
    // }

    // Power operator+(int a){
    //     Power tmp;
    //     tmp.kick = this->kick + a;
    //     tmp.punch = this->punch + a;
    //     return tmp;
    // }

    // Power& operator++(){ // ++a 가 컴파일러에 의해 a. ++() 로 바뀐다.
    //     this->kick++;
    //     this->punch++;
    //     return *this;
    // }

    // Power operator++(int x){
    //     Power tmp = *this;
    //     this->kick++;
    //     this->punch++;
    //     return tmp;
    // }
    
    // operator함수를 외부함수로 작성하고 friend로 선언
    friend Power operator+(Power op1, Power op2); // a + op2 가 컴파일러에 의해 +(a,op2)로 바뀐다.
    friend Power& operator++(Power& op1);
    friend Power operator++(Power& op1, int x);

    Power& operator<<(int x){ // <<연산자 내부함수로 오버라이드하기
        this->kick += x;
        this->punch += x;
        return *this;
    }
};

Power operator+(Power op1, Power op2){
    Power tmp;
    tmp.kick = op1.kick + op2.kick;
    tmp.punch = op1.kick + op2.kick;
    return tmp;
}

Power& operator++(Power& op1){
    op1.kick++;
    op1.punch++;
    return op1;
}

Power operator++(Power& op1, int x){
    Power tmp = op1;
    op1.kick++;
    op1.punch++;
    return tmp;
}


int main()
{
    Power a(3,3);
    Power b(4,4);
    Power c = a + b;
    c.show();
    c++;
    c.show();
    ++c;
    c.show();
    c << 3 << 5 << 7;
    c.show();
}
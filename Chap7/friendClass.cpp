/* 
클래스 자체를 friend로 선언해서 해당 클래스가 friend를 선언한 클래스의 속성에 접근할 수 있게 만들어 준다.
friend 키워드를 사용할 때 주의해야 할 점은 friend로 선언한 함수나 클래스가 전방 참소를 하는 경우를 방지하기 위해
friend를 선언한 클래스를 전방 선언(forward declaration)을 해줘야한다. 
*/

#include <iostream>
using namespace std;

class Rect; //전방 선언을 해서 RectManager 클래스가 Rect클래스를 참조해도 오류가 발생하지 않는다.

class RectManager{
    public:
    bool equals(Rect r, Rect s);
    void copy(Rect& dest, Rect& src);
};

class Rect{
    int width, height;
    public:
    Rect(int width, int height){
        this->width = width;
        this->height = height;
    }
    friend RectManager;
};

bool RectManager::equals(Rect r, Rect s){
    if(r.width == s.width && r.height == s.height) return true;
    return false;
}

void RectManager::copy(Rect& dest, Rect& src){
    dest.width = src.width; dest.height = src.height;
}

int main(){
    Rect a(3,4), b(4,5);
    RectManager rm;
    rm.copy(a,b);
    if(rm.equals(a,b)) cout << "equal" << endl;
    else cout << "not equal" << endl;
}
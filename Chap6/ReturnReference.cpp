#include <iostream>
using namespace std;

char& find(char s[], int index){ // 참조 리턴을 통해 변수의 값이 저장된 공간을 리턴할 수 있다.
    return s[index];
}

int main(){
    char name[] = "Mike";
    cout << name << endl;

    find(name, 0) = 'N'; // name문자열의 0번째 인덱스 값을 N으로 바꾼다.
    cout << name << endl;

    char& ref = find(name,2); //name 문자열의 2번째 인덱스 공간을 ref에 저장한다.
    ref = 'c'; //그 공간에 c를 넣어준다.
    cout << name << endl;

    //참조리턴은 c++에서 매우 중요하므로 잘 숙지해야한다. 연산자 함수의 경우 참조리턴을 사용하는 대표적인 함수이다.
}
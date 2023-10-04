/*
C++에서 함수는 참조값을 리턴할 수 있다. 
참조리턴이란 변수가 저장된 공간을 리턴하는 것이다.
변수가 저장된 공간을 리턴하기 때문에 포인터 변수에 대입해서 사용할 수도 있고, 레퍼런스 변수에 대입해서 사용할 수도 있다.
C++에서 참조리턴은 자주 사용되니 잘 익혀두자.
*/

#include <iostream>
using namespace std;


char& find(char s[], int index){
    return s[index];
}

int main(){
    char name[] = "Mike";
    cout << name << endl;

    find(name, 0) = 'S';
    cout << name << endl; // name : Sike

    char& ref = find(name,2);
    ref = 't'; // name : Site
    cout << name << endl;

    return 0;    
}
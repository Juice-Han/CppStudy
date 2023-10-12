#include <iostream>
using namespace std;

int main(){
    string str = "I love ";
    str.append("C++");

    cout << str << endl;

    string str1(" and Python");
    
    cout << str + str1 << endl; // + 연산자로 string 문자열을 이어줄 수 있다.
    
    str.insert(1," really"); // 1번째 인덱스에 문자열을 삽입

    cout << str << endl;

    str.replace(2,11,"study"); // 2번째 인덱스 문자를 포함하여 11개의 문자를 study로 대체

    cout << str << endl;

    cout << "문자열의 길이는 " << str.length() << endl; // length() : 문자열의 길이 반환 == size()

    str.erase(0,8); // 0번째 인덱스의 문자를 포함하여 8개의 문자를 지움

    cout << str << endl;

    string newString = str.substr(0,1); //0번째 인덱스포함 1개의 문자를 발췌

    cout << newString << endl;

    
    
    return 0;
}
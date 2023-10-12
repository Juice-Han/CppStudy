#include <iostream>
using namespace std;

int main(){
    string e = "I love love C++";
    int index = e.find("love"); //string e 에서 "love" 문자열을 찾아 시작 인덱스를 리턴
    cout << index << endl;
    index = e.find("love", index+1); //매개변수로 입력한 index+1 부터 "love" 문자열을 찾아 시작 인덱스를 리턴
    cout << index << endl;
    index = e.find("C#"); //찾으려는 문자열이 없으면 -1 리턴
    cout << index << endl;
    index = e.find('v',7); // 인덱스 7부터 v라는 문자를 찾아 해당 인덱스를 리턴
    cout << index << endl;

    
}
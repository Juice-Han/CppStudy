#include <iostream>
using namespace std;

int main(){
    string str = "13456";
    int sToI = stoi(str);
    cout << sToI + 4 << endl; // 문자열을 숫자로 변환시키는 stoi() 함수
}
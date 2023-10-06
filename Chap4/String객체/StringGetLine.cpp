#include <iostream>
using namespace std;

int main(){
    //string class를 활용한 문자열 입력받기
    // string str;
    // cout << "문자를 입력하세요: ";
    // getline(cin, str, '\n');

    //char str을 활용한 문자열 입력받기
    char str[100];
    cout << "문자를 입력하세요: ";
    cin.getline(str,100,'\n');
    cout << str << endl;

    return 0;
}
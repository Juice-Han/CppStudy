#include <iostream>
using namespace std;

int main(){

    /* cin은 문자열 입력 버퍼에 개행문자를 남겨두기 때문에
    연속으로 3개의 문자열을 입력하려고 할 때 문제가 생긴다.
    값을 2개 밖에 입력하지 않았는데 개행문자 때문에 빈 문자열이 입력되는 경우이다.
    이럴 경우 cin.ignore()을 사용해서 버퍼를 비운 다음 다시 문자열을 입력받아야 한다.

    그에 반해 getline함수는 개행문자를 버퍼에 남겨놓지 않기 때문에 연속으로 문자열을 받아도 문제가 없다.
    cin.getline()함수와 getline()함수가 그 예이다.
     */

    //string class를 활용한 문자열 입력받기
    string str1;
    cout << "문자를 입력하세요: ";
    getline(cin, str1, '\n');
    cout << str1 << endl;
    
    //char str을 활용한 c언어식 문자열 입력받기
    char str2[100];
    cout << "문자를 입력하세요: ";
    cin.getline(str2,100,'\n');
    cout << str2 << endl;

    return 0;
}
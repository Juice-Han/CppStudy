#include <iostream>
#include <locale> 
/* string 헤더파일은 문자열을 다루는 함수는 있지만 문자를 다루는 함수는 없다. 
문자를 다룰려면 locale 헤더파일을 인클루드 해야한다. */
using namespace std;

int main(){
    string a = "hello";
    for (int i = 0; i<a.length(); i++){
        a[i] = toupper(a[i]); //문자를 대문자로 바꿔주는 함수 toupper()
    }
    cout << a << endl;
    if(isdigit(a[0])) cout << "숫자" << endl; //문자가 숫자라면 true를 리턴하는 함수 isdigit()
    else if(isalpha(a[0])) cout << "문자" << endl; //문자가 영어라면 true를 리턴하는 함수 isalpha()
}
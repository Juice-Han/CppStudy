#include <iostream>
using namespace std;

int main(){
    string s;
    cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자 입니다." << endl;
    getline(cin,s,'&');
    cin.ignore(); // &뒤에 따라오는 Enter 키를 제거하기 위한 코드

    string f, r;

    cout << "찾으려는 문자열을 입력하세요: ";
    getline(cin,f,'\n');

    cout << "대체하려는 문자열을 입력하세요: ";
    getline(cin,r,'\n');

    int fIndex = s.find(f);
    int count = 0;
    int len_f = f.length();
    int len_r = r.length();


    while(true){
        if(fIndex == -1){
            break;
        }
        s.replace(fIndex,len_f,r);
        fIndex = s.find(f,fIndex + len_r + 1);
    }

    cout << s << endl;

}
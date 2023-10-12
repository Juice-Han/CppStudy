#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;

    cout << "문자를 입력하세요. 빈칸이 있어도 됩니다.(한글 x)" << endl;
    getline(cin,s,'\n');
    
    for(int i = 0; i < s.length(); i++){
        s = s.substr(1,s.length()-1) + s[0];
        cout << s << endl;
    }
}
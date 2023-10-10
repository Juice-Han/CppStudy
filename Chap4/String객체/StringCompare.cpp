#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1("Hello World");
    string str2("Hello World");

    int res = str1.compare(str2);
    if(res == 0){
        cout << "두 문자열은 같습니다." << endl;
    }else{
        cout << "두 문자열은 다릅니다." << endl;
    }

    string str3 = "Apple is delicious";
    int res1 = str1.compare(str3); // str1 이 사전상 앞에 온다면 음수 리턴
    if(res1 < 0){
        cout << str1 << " < " << str3;
    }else{
        cout << str1 << " > " << str3;
    }

    return 0;
}
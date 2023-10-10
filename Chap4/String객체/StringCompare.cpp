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

    return 0;
}
#include <iostream>
using namespace std;

void get1(){ //int get()은 int 값을 리턴한다.
    cout << "cin.get()로 <enter>까지 입력 받고 출력합니다 >> ";
    int ch;
    while((ch = cin.get()) != EOF){
        cout.put(ch);
        if(ch == '\n') break;
    }
}

void get2(){ // istream& get(char&)는 입력 스트림 객체를 참조리턴한다. 
    cout << "cin.get(char&)로 <enter>까지 입력 받고 출력합니다. >> ";
    char ch;
    while(true){
        cin.get(ch);
        if(cin.eof()) break;
        cout.put(ch);
        if(ch == '\n') break;
    }
}
int main(){
    get1();
    get2();
}
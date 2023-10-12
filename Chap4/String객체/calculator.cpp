#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cout << "덧셈 계산하려는 식을 입력해주세요. ex) 123+12+92 : ";
    getline(cin,str,'\n');

    int count = 0;
    int start = 0;
    int sum = 0;
    int len = str.length();

    for(int i = 0; i<len; i++){
        if(!isdigit(str[i]) || i == len-1){
            string number = str.substr(start,count);
            sum += stoi(number);
            start = i;
        }
        count++;
    }
    cout << "총 합은 = " << sum << endl;
    
}
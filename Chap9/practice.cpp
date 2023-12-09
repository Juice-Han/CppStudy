// 1번
// #include <iostream>
// using namespace std;

// class Converter{
// protected:
//     double ratio;
//     virtual double convert(double src)=0;
//     virtual string getSourceString()=0;
//     virtual string getDestString()=0;
// public:
//     Converter(double ratio) {this->ratio = ratio;}
//     void run(){
//         double src;
//         cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다.";
//         cout << getSourceString() << "을 입력하세요>> ";
//         cin >> src;
//         cout << "변환 결과 : " << convert(src) << getDestString() << endl;
//     }
// };

// class WonToDollar : public Converter{
// public:
//     WonToDollar(double ratio) : Converter(ratio){}
//     double convert(double src){return src / ratio;}
//     string getSourceString(){return "원";}
//     string getDestString(){return "달러";};
// };

// int main(){
//     WonToDollar wd(1010);
//     wd.run();
// }

// 2번

// #include <iostream>
// using namespace std;

// class Converter{
// protected:
//     double ratio;
//     virtual double convert(double src)=0;
//     virtual string getSourceString()=0;
//     virtual string getDestString()=0;
// public:
//     Converter(double ratio) {this->ratio = ratio;}
//     void run(){
//         double src;
//         cout << getSourceString() << "를 " << getDestString() << "로 바꿉니다.";
//         cout << getSourceString() << "을 입력하세요>> ";
//         cin >> src;
//         cout << "변환 결과 : " << convert(src) << getDestString() << endl;
//     }
// };

// class KmToMile : public Converter{
// public:
//     KmToMile(double ratio) : Converter(ratio){}
//     double convert(double src){return src / ratio;}
//     string getSourceString(){return "km";}
//     string getDestString(){return "mile";};
// };

// int main(){
//     KmToMile toMile(1.609344);
//     toMile.run();
// }

// 3번
// #include <iostream>
// using namespace std;
// class LoopAdder{
//     string name;
//     int x, y, sum;
//     void read();
//     void write();
// protected:
//     LoopAdder(string name=""){
//         this->name = name;
//     }
//     int getX(){return x;};
//     int getY(){return y;};
//     virtual int calculate() = 0;
// public:
//     void run();
// };

// void LoopAdder::read(){
//     cout << name << ":" << endl;
//     cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
//     cin >> x >> y;
// }

// void LoopAdder::write(){
//     cout << x << "에서 " << y << "까지의 합= " << sum << "입니다" << endl;
// }

// void LoopAdder::run(){
//     read();
//     sum = calculate();
//     write();
// }

// class DoWhileLoopAdder : public LoopAdder{
// public:
//     DoWhileLoopAdder(string name) : LoopAdder(name){}
//     int calculate();
// };

// int DoWhileLoopAdder::calculate(){
//     int s = 0;
//     for(int i = getX(); i<=getY(); i++){
//         s += i;
//     }
//     return s;
// }

// int main() {
//     DoWhileLoopAdder forLoop("For Loop");
//     forLoop.run();
// }

// 4번

// #include <iostream>
// using namespace std;
// class LoopAdder{
//     string name;
//     int x, y, sum;
//     void read();
//     void write();
// protected:
//     LoopAdder(string name=""){
//         this->name = name;
//     }
//     int getX(){return x;};
//     int getY(){return y;};
//     virtual int calculate() = 0;
// public:
//     void run();
// };

// void LoopAdder::read(){
//     cout << name << ":" << endl;
//     cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
//     cin >> x >> y;
// }

// void LoopAdder::write(){
//     cout << x << "에서 " << y << "까지의 합= " << sum << "입니다" << endl;
// }

// void LoopAdder::run(){
//     read();
//     sum = calculate();
//     write();
// }

// class DoWhileLoopAdder : public LoopAdder{
// public:
//     DoWhileLoopAdder(string name) : LoopAdder(name){}
//     int calculate();
// };

// int DoWhileLoopAdder::calculate(){
//     int s = 0;
//     int count = getX();
//     do{
//         s += count;
//         count++;
//     }while(count <= getY());
//     return s;
// }

// int main() {
//     DoWhileLoopAdder doWhileLoop("Do While Loop");
//     doWhileLoop.run();
// }

// 5번

// #include <iostream>
// using namespace std;

// class AbstractGate
// {
// protected:
//     bool x, y;

// public:
//     void set(bool x, bool y)
//     {
//         this->x = x;
//         this->y = y;
//     }
//     virtual bool operation() = 0;
// };

// class ANDGate : public AbstractGate{
// public:
//     bool operation(){
//         if(x == true && y == true){
//             return true;
//         }else{
//             return false;
//         }
//     }
// };

// int main()
// {
//     ANDGate andGate;
//     andGate.set(true,false);
//     cout.setf(ios::boolalpha);
//     cout << andGate.operation() << endl;
// }

// 6번

// #include <iostream>
// using namespace std;

// class AbstractStack
// {
// public:
//     virtual bool push(int n) = 0;
//     virtual bool pop(int &n) = 0;

//     virtual int size() = 0;
// };

// class IntStack : public AbstractStack
// {
//     int top, capacity;
//     int* stack;
// public:
//     IntStack(int capacity){
//         this->capacity = capacity;
//         this->top = 0;
//         stack = new int[capacity];
//     }
//     ~IntStack(){delete [] stack;}
//     bool push(int n);
//     bool pop(int& n);
//     int size(){return top;}
// };

// bool IntStack::push(int n){
//     if(top == capacity) return false;
//     this->stack[top++] = n;
//     return true;
// }

// bool IntStack::pop(int& n){
//     if(top == 0) return false;
//     n = this->stack[--top];
//     return true;
// }

// int main(){
//     IntStack stack(100);
//     int n = 3;
//     if(stack.push(5)) cout << "5을(를) push했습니다.\n";
//     else cout << "스택이 full 상태입니다.\n";
    
//     if(stack.pop(n)) cout << "n은 " << n << "입니다.\n";
//     else cout << "스택이 empty 상태입니다.\n"; 
    
//     if(stack.pop(n)) cout << "n은 " << n << "입니다.\n";
//     else cout << "스택이 empty 상태입니다.\n"; 
// }

// 7번
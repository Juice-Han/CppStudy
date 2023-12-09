// 1번

// #include <iostream>
// using namespace std;

// class Circle{
//     int radius;
// public:
//     Circle(int radius=0){this->radius = radius;}
//     int getRadius(){return this->radius;}
//     void setRadius(int radius){this->radius = radius;}
//     double getArea(){return 3.14*radius*radius;}
// };

// class NamedCircle : public Circle{
//     string name;
// public:
//     NamedCircle(int radius=0, string name="") : Circle(radius){this->name = name;};
//     void show();
// };

// void NamedCircle::show(){
//     cout << "반지름이 " << getRadius() << "인 " << name << endl;
// }

// int main(){
//     NamedCircle waffle(3, "waffle");
//     waffle.show();
// }

// 2번
// #include <iostream>
// using namespace std;

// class Circle{
//     int radius;
// public:
//     Circle(int radius=0){this->radius = radius;}
//     int getRadius(){return this->radius;}
//     void setRadius(int radius){this->radius = radius;}
//     double getArea(){return 3.14*radius*radius;}
// };

// class NamedCircle : public Circle{
//     string name;
// public:
//     NamedCircle(int radius=0, string name="") : Circle(radius){this->name = name;};
//     void setName(string name){this->name = name;}
//     string getName(){return name;}
//     void biggest(NamedCircle nCir, int n);
//     void show();
//     friend void biggest(NamedCircle nCir[], int n);
// };

// void NamedCircle::show(){
//     cout << "반지름이 " << getRadius() << "인 " << name << endl;
// }

// void biggest(NamedCircle nCir[], int n){
//     string bigName;
//     int bigRadius = 0;
//     for (int i = 0; i<n; i++){
//         if (nCir[i].getRadius() > bigRadius){
//             bigRadius = nCir[i].getRadius();
//             bigName = nCir[i].getName();
//         }
//     }
//     cout << "가장 면적이 큰 피자는 " << bigName << "입니다." << endl;
// }

// int main(){
//     NamedCircle pizza[5];
//     cout << "5 개의 정수 반지름과 원의 이름을 입력하세요." << endl;
//     for(int i = 0; i<5; i++){
//         int r;
//         string n;
//         cout << i+1 << ">> ";
//         cin >> r >> n;
//         pizza[i].setName(n);
//         pizza[i].setRadius(r);
//     }
//     biggest(pizza,5);
// }

// 3번

// #include <iostream>
// using namespace std;

// class Point{
//     int x,y;
// public:
//     Point(int x, int y){this-> x = x; this->y = y;}
//     int getX() { return x;}
//     int getY() { return y;}
// protected:
//     void move(int x, int y){ this->x=x; this->y=y;}
// };

// class ColorPoint : public Point{
//     string color;
// public:
//     ColorPoint(int x, int y, string color):Point(x,y){this->color = color;}
//     void setPoint(int x, int y){move(x,y);}
//     void setColor(string color){this->color = color;}
//     void show(){cout << color << "색으로 " << '(' << getX() << ',' << getY() << ')' << "에 위치한 점입니다." << endl;}
// };

// int main(){
//     ColorPoint cp(5,5,"RED");
//     cp.setPoint(10,10);
//     cp.setColor("BLUE");
//     cp.show();
// }

// 4번

// #include <iostream>
// using namespace std;

// class Point{
//     int x,y;
// public:
//     Point(int x, int y){this-> x = x; this->y = y;}
//     int getX() { return x;}
//     int getY() { return y;}
// protected:
//     void move(int x, int y){ this->x=x; this->y=y;}
// };

// class ColorPoint : public Point{
//     string color;
// public:
//     ColorPoint(int x=0, int y=0, string color="BLACK"):Point(x,y){this->color = color;}
//     void setPoint(int x, int y){move(x,y);}
//     void setColor(string color){this->color = color;}
//     void show(){cout << color << "색으로 " << '(' << getX() << ',' << getY() << ')' << "에 위치한 점입니다." << endl;}
// };

// int main(){
//     ColorPoint zeroPoint;
//     zeroPoint.show();

//     ColorPoint cp(5,5);
//     cp.setPoint(10,20);
//     cp.setColor("BLUE");
//     cp.show();
// }

// 5번

// #include <iostream>
// using namespace std;

// class BaseArray
// {
// private:
//     int capacity;
//     int *mem;

// protected:
//     BaseArray(int capacity = 100)
//     {
//         this->capacity = capacity;
//         mem = new int[capacity];
//     }
//     ~BaseArray() { delete[] mem; }
//     void put(int index, int val) { mem[index] = val; }
//     int get(int index) { return mem[index]; }
//     int getCapacity() { return capacity; }
// };

// class MyQueue : public BaseArray
// {
//     int len;
//     int start, end;
// public:
//     MyQueue(int capacity = 100) : BaseArray(capacity){
//         len = 0; 
//         start = -1;
//         end= -1;
//     }
//     void enqueue(int val);
//     int dequeue();
//     int capacity();
//     int length();
// };

// void MyQueue::enqueue(int val){
//     if(len == capacity()){
//         cout << "큐가 꽉 찼습니다.\n";
//         return;
//     }
//     put(++end,val);
//     len++;
// }

// int MyQueue::dequeue(){
//     if(len == 0){
//         cout << "큐가 비었습니다.\n";
//         return -1;
//     }
//     len--;
//     return get(++start);
    
// }

// int MyQueue::capacity(){
//     return getCapacity();
// }

// int MyQueue::length(){
//     return len;
// }

// int main()
// {
//     MyQueue mQ(100);
//     int n;
//     cout << "큐에 삽입할 5개의 정수를 입력하라>>";
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> n;
//         mQ.enqueue(n);
//     }
//     cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
//     cout << "큐의 원소를 순서대로 제거하여 출력한다>>";
//     while (mQ.length() != 0)
//     {
//         cout << mQ.dequeue() << ' ';
//     }
//     cout << endl
//          << "큐의 현재 크기 : " << mQ.length() << endl;
// }

// 6번

// #include <iostream>
// using namespace std;

// class BaseArray
// {
// private:
//     int capacity;
//     int *mem;

// protected:
//     BaseArray(int capacity = 100)
//     {
//         this->capacity = capacity;
//         mem = new int[capacity];
//     }
//     ~BaseArray() { delete[] mem; }
//     void put(int index, int val) { mem[index] = val; }
//     int get(int index) { return mem[index]; }
//     int getCapacity() { return capacity; }
// };

// class MyStack : public BaseArray{
//     int head;
// public:
//     MyStack(int capacity) : BaseArray(capacity){
//         head = -1;
//     }
//     void push(int n);
//     int pop();
//     int capacity();
//     int length();
// };

// void MyStack::push(int n){
//     if(head + 1 == capacity()){
//         return;    
//     }
//     put(++head,n);
// }

// int MyStack::pop(){
//     if(head == -1){
//         return -1;
//     }
//     return get(head--);
// }
// int MyStack::capacity(){
//     return getCapacity();
// }

// int MyStack::length(){
//     return head+1;
// }

// int main(){
//     MyStack mStack(100);
//     int n;
//     cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
//     for(int i=0;i<5;i++){
//         cin >> n;
//         mStack.push(n);
//     }
//     cout << "스택 용량: " << mStack.capacity() << ", 스택크기: " << mStack.length() << endl;
//     cout << "스택의 모든 원소를 팝하여 출력한다>> ";
//     while(mStack.length() != 0){
//         cout << mStack.pop() << ' ';
//     }
//     cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;
// }
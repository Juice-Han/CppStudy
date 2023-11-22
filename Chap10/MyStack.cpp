#include <iostream>
using namespace std;

template <class T>
class MyStack{
    int tos;
    T data [100];
public:
    MyStack();
    void push(T element);
    T pop();
};

template <class T>
MyStack<T>::MyStack(){
    this->tos = -1;
}

template <class T>
void MyStack<T>::push(T element){
    if (tos == 99){
        cout << "Stack Full\n";
        return;
    }
    tos++;
    this->data[tos] = element;
}

template <class T>
T MyStack<T>::pop(){
    if(tos == -1){
        cout << "Stack Empty\n";
        return 0;
    }
    return this->data[tos--];
}

int main(){
    MyStack<int> ms;
    for(int i = 1; i<11; i++){
        ms.push(i);
        cout << i << " push" << endl;
    }
    for(int i = 1; i<11; i++){
        int tmp = ms.pop();
        cout << tmp << " pop" << endl;
    }
    
}
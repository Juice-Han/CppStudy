#include <iostream>
using namespace std;

class Point{
    int x,y;
public:
    Point(int x=0, int y=0){this->x = x; this->y = y;}
    friend istream& operator>>(istream& stream, Point& a);
    friend ostream& operator<<(ostream& stream, Point a);
};

istream& operator>>(istream& stream, Point& a){
    cout << "x 좌표 >> ";
    stream >> a.x;
    cout << "y 좌표 >> ";
    stream >> a.y;
    return stream;
}

ostream& operator<<(ostream& stream, Point a){
    cout << '(' << a.x << ',' << a.y << ')';
    return stream;
}

int main(){
    Point p;
    cin >> p;
    cout << p << endl;
}
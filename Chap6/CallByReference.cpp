#include <iostream>
using namespace std;


bool average(int a[], int size, double& avg){
    if(size <= 0) return false;
    double sum = 0;
    for(int i = 0; i<size; i++){
        sum += a[i];
    }
    avg = sum/size;
    return true;
}
class Circle
{
    int radius;

public:
    Circle() { radius = 1; };
    Circle(int radius) { this->radius = radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};

int main()
{
    // Circle circle;
    // Circle &refc = circle;
    // refc.setRadius(10);
    // cout << refc.getArea() << ' ' << circle.getArea() << endl;

    int a[] = {1,2,3,4};
    double avg = 0;
    if(average(a,4,avg)){
        cout << "평균은 " << avg << " 입니다.\n";
    }else{
        cout << "매개변수 오류\n";
    }
}
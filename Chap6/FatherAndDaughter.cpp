#include <iostream>
#include <cstring>

using namespace std;

class Person
{
    char *name;
    int id;
    double grade;
public:
    Person(int id, const char *name);
    Person(int id, const char *name, double grade);
    ~Person();
    Person(const Person& p);
    void changeName(const char *name);
    void show() { cout << id << ',' << name << endl; }
    void showGrade() {cout << grade << endl;}
};

Person::Person(int id, const char *name)
{
    this->id = id;
    int len = strlen(name);
    this->name = new char[len + 1];
    strcpy(this->name, name);
}

Person::Person(int id, const char *name, double grade) : Person(id, name){
    this->grade = grade;
}
Person::~Person()
{
    if (name)
    {
        delete[] name;
    }
}

Person::Person(const Person& p){ //복사 생성자를 만들어줘야 예상치 못한 버그나 오류를 피할 수 있다. 항상 클래스를 만들 때 복사 생성자도 같이 만들어주자.
    this->id = p.id;
    int len = strlen(p.name);
    this->name = new char[len + 1];
    strcpy(this->name,p.name);
    cout << "복사 생성자 실행 직후" << endl;
}

void Person::changeName(const char *name)
{
    if (strlen(name) > strlen(this->name))
        return;
    strcpy(this->name, name);
}


int main()
{
    Person father(1, "Kitae");
    Person daughter(father);

    cout << "복사 직후" << endl;

    father.show();
    daughter.show();

    daughter.changeName("Grace");
    cout << "이름 변경 후" << endl;

    father.show();
    daughter.show();

    Person p1(2,"Juhan",4.4);
    p1.show();
    p1.showGrade();
}
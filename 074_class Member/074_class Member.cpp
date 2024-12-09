#include <iostream>
#include <cstring>
using namespace std;

class Member {
private:
    char* name;
    int age;
public:
    Member(const char* name, int age);  // 리턴 값이 없고 클래스와 이름이 같은 생성자 함수
    ~Member();  // 소멸자
    Member(const Member& rhs);  // 참조형 변수가 들어가 있어서 복사 생성자
    void changeName(const char* name);
    void Print();
};

int main()
{
    Member m1("sorong", 20);  // 생성자 실행
    Member m2("bongsu", 19);  // 생성자 실행
    Member m3(m1);   // m1이 m3에 복사됌, 복사생성자 실행
    m1.Print();
    m2.Print();
    m3.Print();
    m2.changeName("yongkil");
    m2.Print();
}

Member::Member(const char* name, int age) {
    this->age = age;
    //깊은 복사
    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);   
}

Member::~Member() {
    delete[] this->name;   // this를 안써줘도 되지만 써주는 것이 더 정확
}

Member::Member(const Member& rhs) {
    this->age = rhs.age;
    //깊은 복사
    name = new char[strlen(rhs.name) + 1];  // 길이는 strlen(rhs.name) + 1
    strcpy_s(name, strlen(rhs.name) + 1, rhs.name);
}

// 깊은 복사가 필요한데, 그 전에 할당되어 있던 이름을 delete 해주어야 한다
void Member::changeName(const char* name) {
    delete[] this->name;
    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
}

void Member::Print() {
    cout << "Name: " << name << endl << "Age: " << age << endl;
}
#include <iostream>
#include <cmath>
using namespace std;

class Exponential {
private:
    int base, exp;
public:
    Exponential() {  // return값이 없음
        base = 1;
        exp = 1;
    }
    Exponential(int a) {
        base = a;
        exp = 1;
    }
    Exponential(int a, int b) {
        base = a;
        exp = b;
    }
    int getValue() {
        return pow(base, exp);   // pow가 c++ 지수 계산하는 함수
    }
    int getBase() {
        return base;
    }
    int getExp() {
        return exp;
    }
    bool equals(Exponential other) {
        if (this->getValue() == other.getValue())
            return true;
        else
            return false;
        /*
        if (base == other.base && exp == other.exp)
            return true;
        else
            return false;
        */
    }
};

int main()
{
    Exponential a(4, 2);
    Exponential b(16);
    Exponential c;

    cout << a.getValue() << " " << b.getValue() << " " << c.getValue() << endl;
    cout << "a의 베이스 : " << a.getBase() << ", exp : " << a.getExp() << endl;
    
    if (a.equals(b))
        cout << "같다" << endl;
    else
        cout << "다르다" << endl;
}


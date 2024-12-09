#include <iostream>
using namespace std;

void calc(int a, int b) {
    cout << "더하기 : " << a + b << endl;
    cout << "빼기 : " << a - b << endl;
    cout << "곱하기 : " << a * b << endl;
    cout << "나누기 : " << a / b << endl;
}

void calc(double a, double b) {
    cout << "더하기 : " << a + b << endl;
    cout << "빼기 : " << a - b << endl;
    cout << "곱하기 : " << a * b << endl;
    cout << "나누기 : " << a / b << endl;
}

int main()
{
    int x, y;

    cout << "두 정수를 입력 : ";
    cin >> x >> y;

    calc(x, y);

    double a, b;
    cout << "두 실수 입력 : ";
    cin >> a >> b;

    calc(a, b);
}
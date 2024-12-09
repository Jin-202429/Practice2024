#include <iostream>
using namespace std;

void cycle(int& a, int& b, int& c) {
    int tmp = a;
    a = b;
    b = c;
    c = tmp;
}

int main()
{
    int x, y, z;

    cout << "세개의 숫자 입력 : ";
    cin >> x >> y >> z;

    cycle(x, y, z);
    cout << x << "," << y << "," << z << endl;
}


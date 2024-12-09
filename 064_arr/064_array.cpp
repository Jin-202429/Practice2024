#include <iostream>
using namespace std;

int main()
{
    int a[10];

    cout << "10개 숫자 입력 : ";
    for (int i = 0; i < 10; i++)
        cin >> a[i];

    // int min = INT_MAX, max = INT_MIN, sum = 0;   // 값이 처음에 세팅되면서 실행이 된다.
    int min = a[0], max = a[0], sum = 0;
    for (int x : a) {
        if (x < min)
            min = x;
        if (x > max)
            max = x;
        sum += x;
    }
    cout << "최소값 = " << min << endl;
    cout << "최대값 = " << max << endl;
    cout << "평균 = " << sum / 10.0 << endl;
}


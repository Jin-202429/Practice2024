#include <iostream>
using namespace std;

template<typename T>
T Sum(T a[], int n) {
    T sum = a[0];
    for (int i = 1; i < n; i++) 
        sum += a[i];
    return sum;
}
int main()
{
    int a[5] = { 3,1,5,1,4 };
    double b[5] = { 2.3, 4.5, 6.5, 7.6, 3.8 };
    string c[3] = { "Hello", "World", "Doodle" };
    
    cout << Sum<int>(a, 5) << endl;
    cout << Sum<double>(b, 5) << endl;
    cout << Sum<string>(c, 3) << endl;
}


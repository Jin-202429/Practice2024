#include <iostream>  // 결과값이 이상
using namespace std;

int square(int x) { 
    return x * x; 
}
int cube(int x) { 
    return x * x * x; 
}

int GetMax(int a[], int n, int (*fp)(int)) {
    int max = fp(a[0]);

    for (int i = 1; i < n; i++) {
        if (max < fp(a[i])) 
            max = fp(a[i]);
        return max;
    }
}

int main()
{
    int a[6] = { 1, -1, -2, 3, 4, 5 };

    cout << GetMax(a, 6, square) << endl;
    cout << GetMax(a, 6, cube) << endl;
}


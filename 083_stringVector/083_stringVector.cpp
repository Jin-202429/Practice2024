#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> v;
    string s;

    cout << "문자열 10개 입력 : ";
    for (int i = 0; i < 10; i++) {
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < 10; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

// 정열이 들어가는 것은 사전순으로 출력
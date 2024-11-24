#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n;
    // 1の位
    c = n % 10;
    b = (n % 100) / 10;
    a = n / 100;
    cout << b * 100 + c * 10 + a << " " << c * 100 + a * 10 + b << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, a;
    cin >> n >> t >> a;
    // a or t が過半数（n+1）/2以上をとっていれば確定
    if (a >= (n + 1) / 2 || t >= (n + 1) / 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

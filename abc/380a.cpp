#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // 6桁の整数
    cin >> n;
    // カウントの格納：0~9の10種類
    vector<int> mem(10, 0); // [0,0,0,0,0,0,0,0,0,0]
    // 1桁目から数えていく
    while (n > 0)
    {
        mem[n % 10]++;
        n /= 10;
    }
    //
    if (mem[1] == 1 && mem[2] == 2 && mem[3] == 3)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
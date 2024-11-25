#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // 上の桁から2進数に変換していく.
    // N<=1000なので、2^10(1024)より小さい.
    // 10桁で返すため、9~0でループ
    string answer = "";
    for (int x = 9; x >= 0; x--)
    {
        int two_x = 1 << x;          // 2のx乗. bit操作で作成
        int digit = (n / two_x) % 2; // 2のx乗で割って、商を偶奇にする（なぜ？）
        // 左から出力していく
        cout << digit;
    }
    // 最後に改行
    cout << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 色ごとのカウントをmapで管理する
    map<string, int> cmap;

    // 入力に対して色ごとに加算していく
    for (int i = 0; i < 4; i++)
    {
        string ai;
        cin >> ai;
        cmap[ai]++;
    }
    // 4個=>2回, 2個=>1回
    int ans = 0;
    for (auto p : cmap)
    {
        if (p.second == 4)
        {
            ans = 2;
        }
        else if (p.second >= 2)
        {
            ans += 1;
        }
    }
    // 出力
    cout << ans << endl;
    return 0;
}

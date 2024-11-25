#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int answer = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int count = i + j;
            if (k - count >= 1 && k - count <= n)
                answer += 1;
        }
    }
    cout << answer << endl;
    return 0;
}
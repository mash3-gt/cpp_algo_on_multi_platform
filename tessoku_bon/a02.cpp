#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    int a[n];

    for (int i = 0; i <= n - 1; i++)
        cin >> a[i];

    bool answer = false;

    for (int i = 0; i <= n - 1; i++)
    {
        if (a[i] == x)
            answer = true;
    }

    if (answer == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
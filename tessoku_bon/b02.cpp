#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    bool answer = false;
    for (int i = a; i <= b; i++)
    {
        if (100 % i == 0)
            answer = true;
    }

    if (answer == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
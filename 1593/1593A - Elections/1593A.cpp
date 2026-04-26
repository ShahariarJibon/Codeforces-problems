#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        long long mx = max({a, b, c});

        if (a == mx && a > b && a > c)
            cout << 0 << " ";
        else
            cout << mx - (a - 1) << " ";

        if (b == mx && b > a && b > c)
            cout << 0 << " ";
        else
            cout << mx - (b - 1) << " ";

        if (c == mx && c > a && c > b)
            cout << 0 << endl;
        else
            cout << mx - (c - 1) << endl;
    }
    return 0;
}

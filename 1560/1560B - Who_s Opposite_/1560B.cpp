#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c;

        long long n = abs(a - b) * 2;
        
        if (a > n || b > n || c > n || a == b)
        {
            cout << -1 << endl;
        }
        else
        {
            long long f = c + (n / 2);

            if (f > n)
            {
                d = c - (n / 2);
            }
            else
            {
                d = f;
            }

            cout << d << endl;
        }
    }
    return 0;
}

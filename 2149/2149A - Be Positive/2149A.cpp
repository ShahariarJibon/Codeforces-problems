#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], c = 0;

        int zero = 0, neg = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                zero++;
            else if (a[i] < 0)
                neg++;
        }

        c += zero;
        if (neg % 2 != 0)
            c += 2;

        cout << c << endl;
    }

    return 0;
}

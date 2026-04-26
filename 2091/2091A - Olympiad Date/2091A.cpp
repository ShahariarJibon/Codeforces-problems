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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c5 = 0;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                c0++;
            if (a[i] == 1)
                c1++;
            if (a[i] == 2)
                c2++;
            if (a[i] == 3)
                c3++;
            if (a[i] == 5)
                c5++;

            if (!ans && c0 >= 3 && c1 >= 1 && c2 >= 2 && c3 >= 1 && c5 >= 1)
            {
                ans = i + 1; 
            }
        }

        cout << ans << endl;
    }
    return 0;
}

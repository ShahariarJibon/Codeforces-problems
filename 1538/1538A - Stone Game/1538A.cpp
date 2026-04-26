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
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int mx = *max_element(arr, arr + n);
        int mn = *min_element(arr, arr + n);

        int p1, p2;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == mx)
            {
                p1 = i;
            }
            if (arr[i] == mn)
            {
                p2 = i;
            }
        }

        int a = max(p1, p2) + 1;
        int b = n - min(p1, p2);
        int c = min(p1, p2) + 1 + (n - max(p1, p2));

        cout << min({a, b, c}) << endl;
    }
    return 0;
}

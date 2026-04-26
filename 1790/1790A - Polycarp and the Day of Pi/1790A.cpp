#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1 = "314159265358979323846264338327";
        string s2;
        cin >> s2;
        int l = s2.length();
        int cnt = 0;
        for (int i = 0; i < l; i++)
        {
            if (s1[i] == s2[i])
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}

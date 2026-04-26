#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s[50], t[50];
        cin >> s >> t;

        int l1 = strlen(s);
        int l2 = strlen(t);

        if (l1 != l2)
        {
            cout << "NO" << endl;
            continue;
        }

        sort(s, s + l1);
        sort(t, t + l2);

        int flag = 0;
        for (int i = 0; i < l1; i++)
        {
            if (s[i] != t[i])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

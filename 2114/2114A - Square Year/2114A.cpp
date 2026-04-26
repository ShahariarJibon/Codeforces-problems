#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        int num = stoi(s);

        bool flag = false;

        int d = sqrt(num);

        for (int i = 0; i <= d; i++)
        {
            int b = d - i;
            if ((i + b) * (i + b) == num)
            {
                cout << i << " " << b << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << -1 << endl;
    }
    return 0;
}

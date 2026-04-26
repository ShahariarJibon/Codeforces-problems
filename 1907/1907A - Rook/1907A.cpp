#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        for (char j = 'a'; j <= 'h'; j++)
        {
            if (j == str[0])
            {
                continue;
            }
            else
            {
                cout << j << str[1] << endl;
            }
        }
        int a = stoi(str.substr(1));
        for (int i = 1; i <= 8; i++)
        {
            if (i == a)
            {
                continue;
            }
            else
            {
                cout << str[0] << i << endl;
            }
        }
    }
    return 0;
}

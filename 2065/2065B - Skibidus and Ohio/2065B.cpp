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
        int l=str.length();
        int flag = 0;
        for (int i = 0 ; i + 1 < l; i++)
        {
            if (str[i] == str[i + 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag==1)
            cout << 1 << endl;
        else
            cout << str.length() << endl;
    }
    return 0;
}

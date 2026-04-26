#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, a, b, c, s = 0, day = 0;
        cin >> n >> a >> b >> c;

        long long total = n / (a+b+c);

        if (total > 0)
        {
            s = total * (a+b+c);
            day = total * 3;
        }

        char flag = 'a';

        while (s < n)
        {
            if (flag == 'a')
            {
                s += a;
                flag = 'b';
                day++;
            }
            else if (flag == 'b')
            {
                s += b;
                flag = 'c';
                day++;
            }
            else if (flag == 'c')
            {
                s += c;
                flag = 'a';
                day++;
            }
        }

        cout << day << endl;
    }
    return 0;
}

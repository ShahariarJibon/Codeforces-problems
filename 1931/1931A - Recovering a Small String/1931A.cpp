#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;                   // 97-122 ..... 96
        int c = min(26,n-2);
        n -= c;
        int b = min(26,n-1);
        n -= b;
        int a = n;
        cout << char('a'+a-1)<<char('a'+b-1)<<char('a'+c-1)<<endl;
    }
    return 0;
}

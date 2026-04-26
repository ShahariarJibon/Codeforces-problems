#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;

    long long n = min(a, b);
    long long mul = 1;

    for (long long i = 1; i <= n; i++)
    {
        mul *= i;
    }

    cout << mul;
    return 0;
}

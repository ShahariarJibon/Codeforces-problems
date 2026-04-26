#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int y, w;
    cin >> y >> w;
    int mx = max(y, w);
    int num = 6 - mx + 1;
    int den = 6;
    int div = gcd(num, den);
    num /= div;
    den /= div;

    cout<< num << "/" << den << endl;

    return 0;
}

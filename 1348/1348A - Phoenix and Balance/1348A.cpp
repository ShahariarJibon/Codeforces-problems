#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        long long s1 = pow(2, n);
        long long s2 = 0;

        for (int i = 1 ; i <n/2 ; i++)
        {
            s1+=pow(2,i);
        }

        for (int i = n / 2; i < n; i++)
        {
            s2+=pow(2,i);
        }

        cout << abs(s1-s2) << endl;
    }
    return 0;
}

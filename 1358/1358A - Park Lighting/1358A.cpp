#include <iostream>
using namespace std;

int main()
{
    int n, m, t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        long long mul = n * m;
        if (mul % 2 != 0)
        {
            cout << (mul / 2) + 1 << endl;
        }
        else
        {
            cout << mul / 2 << endl;
        }
    }

    return 0;
}

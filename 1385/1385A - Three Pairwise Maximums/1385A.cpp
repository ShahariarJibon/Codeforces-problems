#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int mmax = x;
        if (y > mmax)
            mmax = y;
        if (z > mmax)
            mmax = z;

        int ccount = 0;
        if (x == mmax)
            ccount++;
        if (y == mmax)
            ccount++;
        if (z == mmax)
            ccount++;

        if (ccount < 2)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            int mmin = x;
            if (y < mmin)
                mmin = y;
            if (z < mmin)
                mmin = z;

            cout << mmax << " " << mmin << " " << mmin << endl;
        }
    }
    return 0;
}

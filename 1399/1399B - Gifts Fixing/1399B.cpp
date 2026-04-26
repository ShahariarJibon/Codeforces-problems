#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        long long a[100], b[100];
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%lld", &a[i]);
        for (int i = 0; i < n; i++)
            scanf("%lld", &b[i]);
        long long minA = a[0], minB = b[0];
        long long count = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < minA)
                minA = a[i];
            if (b[i] < minB)
                minB = b[i];
        }
        for (int i = 0; i < n; i++)
        {
            long long diffA = a[i] - minA;
            long long diffB = b[i] - minB;
            long long min, max;
            if (diffA > diffB)
            {
                min = diffB;
                max = diffA;
            }
            else
            {
                min = diffA;
                max = diffB;
            }
            count+=max;

        }

        printf("%lld\n",count);
    }
    return 0;
}

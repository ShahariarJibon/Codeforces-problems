#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, k;
        scanf("%lld %lld", &n, &k);
        if ((k <= n && ((n - k) % 2 == 0)) || (n % 2 == 0))
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}

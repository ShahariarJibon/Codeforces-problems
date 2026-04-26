#include <stdio.h>
int main()
{
    int k, l, m, n, d;
    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);
    getchar();
    int num[d+1];
    for (int i = 1; i <= d; i++)
        num[i] = i;
    for (int i = k; i <= d; i += k)
        num[i] = 0;
    for (int i = l; i <= d; i += l)
        num[i] = 0;
    for (int i = m; i <= d; i += m)
        num[i] = 0;
    for (int i = n; i <= d; i += n)
        num[i] = 0;

    int count = 0;
    for (int i = 1; i <= d; i++)
    {
        if (num[i] == 0)
            count++;
    }

    printf("%d", count);
    return 0;
}

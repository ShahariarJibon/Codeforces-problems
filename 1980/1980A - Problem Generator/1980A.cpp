#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        char a[100];
        scanf("%s", a);
        int count[7] = {0};
        for (int i = 0; i < n; i++)
        {
            count[a[i] - 'A']++;
        }

        int ans = 0;
        for (int i = 0; i < 7; i++)
        {
            if (count[i] < m)
            {
                ans += (m - count[i]);
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}

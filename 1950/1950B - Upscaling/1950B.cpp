#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (j % 2 != 0)
                        printf("##");
                    else
                        printf("..");
                }
                printf("\n");
                for (int j = 1; j <= n; j++)
                {
                    if (j % 2 != 0)
                        printf("##");
                    else
                        printf("..");
                }
                printf("\n");
            }
            if (i % 2 == 0)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (j % 2 != 0)
                        printf("..");
                    else
                        printf("##");
                }
                printf("\n");
                for (int j = 1; j <= n; j++)
                {
                    if (j % 2 != 0)
                        printf("..");
                    else
                        printf("##");
                }
                printf("\n");
            }
        }
    }
    return 0;
}

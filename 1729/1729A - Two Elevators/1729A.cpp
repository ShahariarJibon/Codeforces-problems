#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (b > c && b < a)
        {
            printf("2\n");
        }
        else if (b < c && ((c - b) + (c - 1)) < (a - 1))
        {
            printf("2\n");
        }

        else if (b > c && a < b)
        {
            printf("1\n");
        }
        else if (b < c && (a - 1) < ((c - b) + (c - 1)))
        {
            printf("1\n");
        }

        else
        {
            printf("3\n");
        }
    }
    return 0;
}
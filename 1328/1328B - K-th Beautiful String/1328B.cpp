#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n, k;
        scanf("%d %d",&n ,&k);
        char s[n+1];
        for (int i=0 ; i<n ; i++)
            s[i] ='a';
        int pos1 = 0, pos2 = 0, count = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            count+=(n - i - 1);
            if (count>= k)
            {
                pos1= i;
                int d= k - (count-(n-i-1));
                pos2 =n -d;
                break;
            }
        }

        s[pos1] ='b';
        s[pos2]='b';
        s[n] = '\0';

        printf("%s\n",s);
    }

    return 0;
}

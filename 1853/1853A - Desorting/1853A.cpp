#include <stdio.h>

int main()
{
    int t,j=0,ans[600];
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long a[n];
        for(int i=1 ; i<=n ; i++)
        {
            scanf("%lld", &a[i]);
        }
        int unsorted = 0;
        for(int i=1 ; i<n ; i++)
        {
            if(a[i]>a[i+1])
            {
                unsorted = 1;
                break;
            }
        }

        if(unsorted)
        {
            ans[j]=0;
            j++;
            continue;
        }

        long long mindiff = 1e9;
        for(int i = 1; i < n; i++)
        {
            long long diff = a[i+1]-a[i];
            if(diff < mindiff)
                mindiff = diff;
        }
        ans[j]=mindiff / 2 + 1;
        j++;
    }
    for(int i=0 ; i<j ; i++)
    {
        printf("%d\n",ans[i]);
    }
    return 0;
}

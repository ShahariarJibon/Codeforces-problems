#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n ,&k);
        int arr[n],robin=0,count=0;
        for(int i=0 ; i<n ; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]>=k)
            {
                robin+=arr[i];
            }
            else if(arr[i]==0 && robin>0)
            {
                count++;
                robin--;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}

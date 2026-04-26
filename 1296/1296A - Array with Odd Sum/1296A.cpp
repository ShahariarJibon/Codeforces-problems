#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n,num[2500],c=0,c1=0;
        scanf("%d",&n);
        for(int i=0 ; i<n ; i++)
        {
            scanf("%d",&num[i]);
            if(num[i]%2!=0) c++;
            else c1++;
        }
        if(c>0 && n%2!=0) printf("YES\n");
        else if(c>0 && c1>0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

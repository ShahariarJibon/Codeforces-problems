// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int j=0 ; j<t ; j++)
    {
        int n,c=0;
        scanf("%d",&n);
        long long a[1000];
        for(int i=0 ; i<n ; i++)
        {
            scanf("%lld",&a[i]);
        }
        for(int i=0 ; i<n ; i++)
        {
            int flag=0;
            for(int j=0 ; j<i ; j++)
            {
                if(a[i]==a[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) c++;
        }
        if(c==n) printf("YES\n");
        else printf("NO\n");
        
        
    }

    return 0;
}
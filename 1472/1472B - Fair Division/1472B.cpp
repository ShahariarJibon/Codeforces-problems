#include<stdio.h>
int main(){
    int t;

    scanf("%d",&t);
    for(int j=0 ; j<t ; j++)
    {
        int n,a[120],sum=0,c1=0,c2=0;
        scanf("%d",&n);
        for(int i=0 ; i<n ; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==1) c1++;
            else c2++;
            sum+=a[i];
        }
        if(sum%2!=0) printf("NO\n");
        else
        {
           if(c2%2==0)
           {
               if(c1%2==0) printf("YES\n");
               else printf("NO\n");
           }
           else
           {
               if(c1>=2) printf("YES\n");
               else printf("NO\n");
           }

        }
    }

return 0;
}


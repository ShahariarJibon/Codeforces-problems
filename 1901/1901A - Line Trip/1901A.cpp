// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,a[1000],sub[1000];
        scanf("%d %d",&n ,&x);
        a[0]=0;
        for(int i=1 ; i<=n ; i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0 ; i<n ; i++)
        {
            sub[i]=a[i+1]-a[i];
        }
        sub[n]=2*(x-a[n]);
        
        int max=sub[0];
        for(int j=0 ; j<=n ; j++)
        {
            if(sub[j]>max) max=sub[j];
        }
        printf("%d\n",max);
    }
    
    return 0;
}
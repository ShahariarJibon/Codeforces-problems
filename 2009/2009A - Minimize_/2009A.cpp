#include <stdio.h>

int main() {
    int t,i,j;
    scanf("%d",&t);
    int a[10000],b[10000],c[10000],sum[10000],ans[10000];
    for(i=0 ; i<t ; i++) 
    {
        scanf("%d %d",&a[i] ,&b[i]);    
        for(j=a[i] ; j<=b[i] ; j++) 
        {
            sum[j]=(c[j]-a[i])+(b[i]-c[j]);
        }
        int min=sum[a[i]];
        for(j=a[i] ; j<=b[i] ; j++)
        {
            if(sum[j]<min) min=sum[j];
        }
        ans[i]=min;
    }
    for(i=0 ; i<t ; i++) 
    {
        printf("%d\n",ans[i]);
    }
    
    return 0;
}

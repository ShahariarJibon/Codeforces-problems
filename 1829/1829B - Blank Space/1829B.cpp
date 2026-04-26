#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int i,j,k;
    for(i=0 ; i<t ; i++)
    {
        int n,a[1000],count[1000]={0},k=0;
        scanf("%d",&n);
        for(j=0 ; j<n ; j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0 ; j<n ; j++)
        {
           if(a[j]==0)
           {
               count[k]++;
           }
           else
           {
               k++;
           }
           
        }
        int max=count[0];
        for(j=0 ; j<=k ; j++)
        {
            if(count[j]>max)max=count[j];
        }
        printf("%d\n",max);
    }
        

    return 0;
}

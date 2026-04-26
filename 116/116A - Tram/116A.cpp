#include<stdio.h>
int main()
{
    int n,i,cap[1000];
    int a[1000],b[1000];
    scanf("%d",&n);
    int d=0;
    for(i=0 ; i<n ; i++)
    {
        scanf("%d %d",&a[i] ,&b[i]);
    }
    i=0;
    cap[i]=b[i];
    for(i=1 ; i<n ; i++)
    {
        cap[i]=cap[i-1]-a[i]+b[i];

    }
    int max=cap[0];
    for(i=1 ; i<n ; i++)
    {
        if(cap[i]>max){max=cap[i];}
    }
    printf("%d",max);
    return 0;
}

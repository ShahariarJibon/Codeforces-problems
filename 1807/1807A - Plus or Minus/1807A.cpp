#include <stdio.h>


int main()
{

    int t,a[11000],b[11000],c[11000],i,j;
    scanf("%d",&t);
    for(i=0 ; i<t ; i++)
    {
        scanf("%d %d %d",&a[i] ,&b[i] ,&c[i]);
    }

    for(i=0 ; i<t ; i++)
    {
        if(a[i]+b[i]==c[i])printf("+\n");
        if(a[i]-b[i]==c[i])printf("-\n");
    }
    return 0;
}

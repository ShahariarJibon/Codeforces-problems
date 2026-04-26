#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    long long int x,y,n,k;
    for(i=0 ; i<t ; i++)
    {
        scanf("%lld %lld %lld",&x,&y,&n);
        k=n-(n%x)+y;
        if(k>n)
        {
            k-=x;
        }
        printf("%lld\n",k);
    }

    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    long long int a[100000],b[100000],k,j;
    for(i=0 ; i<t ; i++)
    {
        scanf("%lld %lld",&a[i],&b[i]);
    }

    for(i=0 ; i<t ; i++)
    {
        j=a[i]%b[i];
        if(j==0){printf("%lld\n",j);}
        else
        {
            k=b[i]-j;
            printf("%lld\n",k);
        }

    }
    return 0;
}

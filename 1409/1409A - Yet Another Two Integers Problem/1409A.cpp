#include <stdio.h>


int main()
{

    int t,i;
    long long a[20500],b[20500];
    scanf("%d",&t);
    for(i=0 ; i<t ; i++)
    {
        scanf("%lld %lld",&a[i] ,&b[i]);
    }
    long long big,small,d,count=0,sum=0,digit=0;
    for(i=0 ; i<t ; i++)
    {
        count=0;sum=0,digit=0;
        if(a[i]>b[i])
        {
            big=a[i];
            small=b[i];
        }
        else if(a[i]<b[i])
        {
            big=b[i];
            small=a[i];
        }
        else if(a[i]==b[i])
        {
            printf("0\n");
            continue;
        }
        d=big-small;

        count=(d+9)/10;
        printf("%lld\n",count);

    }
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    long long int n;
    long long int sum=0;
    scanf("%lld",&n);
    if(n%2==0)
    {
        sum=n/2;
        printf("%lld",sum);
    }
    if(n%2!=0)
    {
        sum=((n/2)+1);
        printf("%lld",0-sum);
    }


    return 0;
}

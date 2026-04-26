#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long l,r;
        scanf("%lld %lld",&l ,&r);
        if(2 * l <= r)
        {
            printf("%lld %lld\n",l,2*l);
        }
        else
        {
            printf("-1 -1\n");
        }
    }
    return 0;
}

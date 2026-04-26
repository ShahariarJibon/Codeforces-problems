#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long a,b;
        scanf("%lld %lld",&a ,&b);
        long long diff=0;
        if(a<b)
        {
            diff=b-a;
            if(diff%2!=0) printf("1\n");
            else printf("2\n");
        }
        else if(b<a)
        {
            diff=a-b;
            if(diff%2!=0) printf("2\n");
            else printf("1\n");
        }
        else printf("0\n");
    }
    return 0;
}

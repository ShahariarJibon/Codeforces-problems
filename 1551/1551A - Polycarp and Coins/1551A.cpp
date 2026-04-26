// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int j=0 ; j<t ; j++)
    {
        long long sum=0,n;
        scanf("%lld",&n);
        int c1=0,c2=0;
        if(n%3==0)
        {
            c1=n/3;
            c2=n/3;
        }
        else if(n%3==1)
        {
            c1=ceil((n*1.0)/3);
            c2=floor((n*1.0)/3);
        }
        else
        {
            c1=floor((n*1.0)/3);
            c2=ceil((n*1.0)/3);
        }
        printf("%d %d\n",c1,c2);
    }

    return 0;
}
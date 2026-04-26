// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int j=0 ; j<t ; j++)
    {
        int n;
        long long a[100],sum=0;
        scanf("%d",&n);
        for(int i=0 ; i<n ; i++)
        {
            scanf("%lld",&a[i]);
        }
        long long min=a[0];
        for(int i=0 ; i<n ; i++)
        {
            if(a[i]<min) min=a[i];
        }
        for(int i=0 ; i<n ; i++)
        {
            sum+=(a[i]-min);
        }
        printf("%lld\n",sum);
    }

    return 0;
}
// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
 
int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long a[305000],sum=0;
        for(int i=0 ; i<n ; i++)
        {
            scanf("%lld",&a[i]);
            sum+=a[i];
        }
        double num= sqrt((double) sum);
        long long p=num/1;
        if(num==p) printf("YES\n");
        else printf("NO\n");
        
    }
    return 0;
}
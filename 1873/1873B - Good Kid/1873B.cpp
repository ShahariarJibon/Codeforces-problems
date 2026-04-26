// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,t;
    long long a[110],mul=1;
    scanf("%d",&t);
    for(int i=0 ; i<t ; i++)
    {
        mul=1;
        scanf("%d",&n);
        for(int j=0 ; j<n ; j++)
        {
            scanf("%lld",&a[j]);
        }
        long long min=a[0];
        for(int j=1 ; j<n ; j++)
        {
            if(a[j]<min) min=a[j];
        }
        for(int j=0 ; j<n ; j++)
        {
            if(a[j]==min) 
            {
                a[j]+=1;
                break;
            }
        }
        for(int j=0 ; j<n ; j++)
        {
            mul*=a[j];
        }
        
        printf("%lld\n",mul);
    }
    
    return 0;
}
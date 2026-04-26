// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    long long a[105000];
    for(int i=1 ; i<=n ; i++)
    {
        scanf("%d",&a[i]);
    }
    int c[105000]={0},j=0;
    
    for(int i=1 ; i<n ; i++)
    {
        if(a[i+1]-a[i]>0)
        {
            c[j]++;
        }
        if(a[i+1]-a[i]<=0)
        {
            j++;
        }
    }
    int max=c[0];
    for(int i=0 ; i<=j ; i++)
    {
        if(c[i]>max) max=c[i];
    }
    printf("%d",max+1);
    return 0;
}
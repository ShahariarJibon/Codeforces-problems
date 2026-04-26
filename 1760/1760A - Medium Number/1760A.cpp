// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d",&t);
    int i,j;
    int a[10000],b[10000],c[10000],mid[10000];
    for(i=0 ; i<t ; i++)
    {
        scanf("%d %d %d",&a[i] ,&b[i] ,&c[i]);
        if((a[i]<b[i] && b[i]<c[i]) || (a[i]>b[i] && b[i]>c[i]))
        {
            mid[i]=b[i];
        }
        else if((b[i]<c[i] && c[i]<a[i]) || (b[i]>c[i] && c[i]>a[i]))
        {
            mid[i]=c[i];
        }
        else
        {
            mid[i]=a[i];
        }
        printf("%d\n",mid[i]);
    }
    
    return 0;
}
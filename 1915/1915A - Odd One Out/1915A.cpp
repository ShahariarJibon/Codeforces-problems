// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d",&t);
    int i,j,n[10000],a[10000],b[10000],c[10000];
    int diff;
    
    for(i=0 ; i<t ; i++)
    {
       scanf("%d %d %d",&a[i] ,&b[i] ,&c[i]);
       if(a[i]!=b[i] && b[i]==c[i]) diff=a[i];
       else if(b[i]!=c[i] && a[i]==c[i]) diff=b[i];
       else diff=c[i];
       printf("%d\n",diff);
    }
    
    return 0;
}
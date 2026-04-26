#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    int a[10000],b[10000],c[10000];
    for(int i=0 ; i<t ; i++) 
    {
        scanf("%d %d %d",&a[i] ,&b[i] ,&c[i]);
    }
    for(int i=0 ; i<t ; i++) 
    {
        if(a[i]+b[i]>=10) printf("YES\n");
        else if(b[i]+c[i]>=10) printf("YES\n");
        else if(a[i]+c[i]>=10) printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}

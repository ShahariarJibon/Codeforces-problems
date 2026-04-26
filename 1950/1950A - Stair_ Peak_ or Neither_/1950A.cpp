#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int i,j;
    for(i=0 ; i<t ; i++)
    {
       int a[10000],b[10000],c[10000];
       scanf("%d %d %d",&a[i] ,&b[i] ,&c[i]);
       if(a[i]<b[i] && b[i]<c[i]) printf("STAIR\n");
       else if(a[i]<b[i] && b[i]>c[i]) printf("PEAK\n");
       else printf("NONE\n");
    }
        

    return 0;
}

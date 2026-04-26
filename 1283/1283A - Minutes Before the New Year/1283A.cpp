// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t,h,m,r=0;
    scanf("%d",&t);
    while(t--)
    {
        r=0;
        scanf("%d %d",&h ,&m);
        r=((24-h)*60)-m;
        printf("%d\n",r);
    }
    
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {

    int a,b,d;
    scanf("%d %d",&a ,&b);
    if(a>b)
    {
        d=(a-b)/2;
        printf("%d %d",b,d);
    }
    if(a<b)
    {
        d=(b-a)/2;
        printf("%d %d",a,d);
    }
    if(a==b)
    {
        printf("%d",a);
        printf(" 0");
    }

    return 0;
}

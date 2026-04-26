#include <stdio.h>

int main() {
    int t,i,a,d[1000],b,sum=0;;
    scanf("%d", &t);
    for(i=0 ; i<t ; i++) 
    {
        sum=0;
        scanf("%d",&a);
        while(a>0)
        {
            b=a%10;
            a/=10;
            sum+=b;
        }
        d[i]=sum;
    }
    for(i=0 ; i<t ; i++) 
    {
       printf("%d\n",d[i]);
    }
    return 0;
}

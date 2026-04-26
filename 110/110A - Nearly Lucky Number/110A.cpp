#include<stdio.h>

int main()
{    
    long long n;
    int d,count=0;
    scanf("%lld",& n);
    while(n>0)
    {
         d=n%10;
         if(d==4 || d==7)
         {
             count++;
             
         }
         n=n/10;
    }
    if(count==4 || count==7)
    {
        printf("YES");
    }
    else{printf("NO");}
       return 0;
}
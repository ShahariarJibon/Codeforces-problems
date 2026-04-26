// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
   int n,m;
   scanf("%d %d",&n ,&m);
   int a=0,b=0,count=0;
  
   for(a=0 ; a<(m+n) ; a++)
   {
       for(b=0 ; b<(m+n) ; b++)
       {
           if((a*a)+b==n && (b*b)+a==m)
           {
               count++;
           }
       }
   }
   printf("%d",count);

    return 0;
}
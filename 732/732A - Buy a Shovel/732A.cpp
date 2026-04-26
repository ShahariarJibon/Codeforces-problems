// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int k,r;
   scanf("%d %d",&k ,&r);
   int i=1,j,a,b;
   for(i=1 ; i<20 ; i++)
   {
       a=(i*k)%10;
       if(a==0)
       {
           printf("%d",i);
           return 0;
       }
       if(a==r)
       {
           b=1;
           printf("%d",i);
           break;
       }
       
   }
  
    return 0;
}
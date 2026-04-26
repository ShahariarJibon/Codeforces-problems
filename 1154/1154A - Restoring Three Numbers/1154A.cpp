// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
   int a[4],max,i;
   for(i=0 ; i<4 ; i++)
   {
       scanf("%d",&a[i]);
   }
   max=a[0];
   for(i=1 ; i<4 ; i++)
   {
       if(a[i]>max)max=a[i];
   }
   int b,q,j=0;
    for(i=0 ; i<4 ; i++)
   {
       if(a[i]!=max)
       {
           b=max-a[i];
           printf("%d ",b);
       }
       
   }  
   
   return 0;
}
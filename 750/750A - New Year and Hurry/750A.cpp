// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n,k;
   scanf("%d %d",&n ,&k);
   int i=1,left,count=0,need=0;
   left=240-k;
   while(i<=n && left>=i*5)
   {
       left-=(i*5);
       i++;
       if(left>=0)
            count++;
   }
   printf("%d",count);
   
   return 0;
}
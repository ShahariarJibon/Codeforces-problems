#include <stdio.h>

int main() {
   int n,h,w=0;
   int ar[1000];
   scanf("%d %d",&n ,&h);
   for(int i=0 ; i<n ; i++)
   {
       scanf("%d",&ar[i]);
   }
   for(int i = 0 ; i<n ; i++)
   {
       if(ar[i]<=h){
          w++; 
       }
       if(ar[i]>h){
           w=w+2;
       }
   }
   printf("%d",w);

    return 0;
}
#include <stdio.h>
int main() {

   int n,num[100100],i,j;
   scanf("%d",&n);
   for(i=0 ; i<n ; i++)
   {
       scanf("%d",&num[i]);
   }
   int c=0,p=0;
   for(j=0 ; j<n ; j++)
   {
       if(num[j]== -1)
       {
          if(p>0)p--;
          else c++;
       }
       else
       {
           p+=num[j];
       }
   }
   
   printf("%d\n",c);
    return 0;
}

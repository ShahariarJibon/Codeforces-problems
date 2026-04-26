// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int t,i,num[1000],ans[1000];
   scanf("%d",&t);
   for(i=0 ; i<t ; i++)
   {
       scanf("%d",&num[i]);
       ans[i]=num[i]/2;
   }
   for(i=0 ; i<t ; i++)
   {
       printf("%d\n",ans[i]);
   }

    return 0;
}
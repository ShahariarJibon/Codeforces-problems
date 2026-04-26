#include <stdio.h>


int main() {

   int t,num[11000];
   scanf("%d",&t);
   int i;
   for(i=0 ; i<t ; i++)
   {
       scanf("%d",&num[i]);
   }
    for(i=0 ; i<t ; i++)
   {
       if(num[i]>=1900)printf("Division 1");
       else if(num[i]>=1600 && num[i]<=1899)printf("Division 2");
       else if(num[i]>=1400 && num[i]<=1599)printf("Division 3");
       else printf("Division 4");
       printf("\n");
   }

    return 0;
}

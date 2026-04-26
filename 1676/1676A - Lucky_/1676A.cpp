#include <stdio.h>


int main() {

   int t,a[11000],i,j;
   scanf("%d",&t);
   for(i=0 ; i<t ; i++)
   {
      scanf("%d",&a[i]);
   }
   int s1=0,s2=0;
   for(i=0 ; i<t ; i++)
   {
       s1=0;s2=0;
       for(j=0 ; j<3 ; j++)
       {
           s1+=(a[i]%10);
           a[i]=a[i]/10;
       }
       for(j=0 ; j<3 ; j++)
       {
           s2+=(a[i]%10);
           a[i]=a[i]/10;
       }
       if(s1==s2)printf("YES\n");
       else printf("NO\n");
   }
    return 0;
}

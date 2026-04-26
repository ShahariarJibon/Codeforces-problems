#include <stdio.h>
int main() {

   int t,a[10000],b[10000],c[10000];
   int i;
   scanf("%d",&t);
   for(i=0 ; i<t ; i++)
   {
       scanf("%d %d %d",&a[i] ,&b[i] ,&c[i]);
   }
   int count;
   for(int i=0 ; i<t ; i++)
   {
       count=0;
       if(a[i]+b[i]==c[i] || a[i]+c[i]==b[i] || b[i]+c[i]==a[i])
       {
           printf("YES");
       }
       else
       {
           printf("NO");
       }
      printf("\n");
   }

    return 0;
}

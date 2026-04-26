#include <stdio.h>


int main() {

   int t,a[11000],b[11000],c[11000],d[11000],i;
   scanf("%d",&t);
   for(i=0 ; i<t ; i++)
   {
       scanf("%d %d %d %d",&a[i] , &b[i] , &c[i] , &d[i] );
   }
   int count=0;
   for(i=0 ; i<t ; i++)
   {
       count=0;
       if(a[i]-b[i]<0){count++;}
       if(a[i]-c[i]<0){count++;}
       if(a[i]-d[i]<0){count++;}
       printf("%d\n",count);
   }
    return 0;
}

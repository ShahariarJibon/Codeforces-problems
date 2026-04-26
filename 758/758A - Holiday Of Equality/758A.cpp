#include<stdio.h>

int main()
{
   int n,i,num[105];
   scanf("%d",&n);
   for(i=0 ; i<n ; i++)
   {
       scanf("%d",&num[i]);
   }
   int max=num[0];
   for(i=1 ; i<n ; i++)
   {
      if(num[i]>max)max=num[i];
   }
   int sum=0;
   i=0;
   for(i=0 ; i< n ; i++)
   {
       sum+=(max-num[i]);
   }
   printf("%d",sum);
   

    return 0;
}

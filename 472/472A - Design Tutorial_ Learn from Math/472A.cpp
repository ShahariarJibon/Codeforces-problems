#include<stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   
   if(n%2==0)
   {
       printf("6 %d",n-6);
   }
   else
   {
       printf("9 %d",n-9);
   }
   
  // printf("%d %d",x,y);

    return 0;
}

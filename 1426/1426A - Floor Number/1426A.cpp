// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int t;
  scanf("%d",&t);
  while(t--)
  {
      int n,x,f=0;
      scanf("%d %d",&n ,&x);
      if(n<=2)
      {
          printf("1\n");
          continue;
      }
      else
      {
          n-=2;
          f++;
          while(n>x)
          {
              n-=x;
              f++;
          }
           printf("%d\n",f+1);
      }
     
  }
    return 0;
}
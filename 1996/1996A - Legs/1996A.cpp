// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int t;
  scanf("%d",&t);
  while(t--)
  {
      long long n,c=0;
      scanf("%lld",&n);
      while(n>=4)
      {
          n-=4;
          c++;
      }
      if(n>0) c++;
      printf("%lld\n",c);
  }
    return 0;
}
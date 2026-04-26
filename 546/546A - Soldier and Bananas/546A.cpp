#include <stdio.h>

int main() {
   int k,w;
   long long int n;
   scanf("%d %lld %d",&k ,&n ,&w);
   long long int sum=0;
   for(int i = k; i <= w * k; i += k)
   {
       sum+=i;
   }
   if(sum>n){
   printf("%lld",sum-n);}
    else if(sum<=n){
        printf("0");
    }
    return 0;
}
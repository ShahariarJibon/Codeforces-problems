// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
   int n,k,l,c,d,p,nl,np;
   scanf("%d %d %d %d %d %d %d %d",&n ,&k ,&l ,&c ,&d ,&p ,&nl ,&np );
   int all=k*l;
   int a1=all/nl;
   int a2=c*d;
   int a3=p/np;
   int min=a1;
   if(a2<min)min=a2;
   if(a3<min)min=a3;
   printf("%d",min/n);
    return 0;
}
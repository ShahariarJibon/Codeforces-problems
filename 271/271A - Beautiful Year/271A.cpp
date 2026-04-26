
#include <stdio.h>

int main() {
 int n,i,j;
 scanf("%d",&n);
 int ar[4];
 for(j=n+1 ; ; j++){
 int k=j;
 for(i=3 ; i>=0 ; i--)
 {   
     ar[i]=k%10;
     k=k/10;
 }
 if(ar[0]!=ar[1] && ar[0]!=ar[2] && ar[0]!=ar[3] && ar[1]!=ar[2] && ar[1]!=ar[3] && ar[2]!=ar[3] ){
     printf("%d",j);
     break;
 }
 }
 

    return 0;
}
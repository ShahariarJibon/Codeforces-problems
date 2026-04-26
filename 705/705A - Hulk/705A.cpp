
#include <stdio.h>

int main() {
   char str1[20]="I hate";
   char str2[20]="I love";
   int n,i;
   scanf("%d",&n);
   if(n==1){
       printf("%s it",str1);
   }
   if(n>=2){
       for(i=1 ; i<=n ; i++){
           if(i%2!=0){printf("%s",str1);
           if(i<n){
           printf(" that ");}}
           
           if(i%2==0){printf("%s",str2);
            if(i<n){
           printf(" that ");}}
           
       }
       printf(" it");
   }
   
    return 0;
}
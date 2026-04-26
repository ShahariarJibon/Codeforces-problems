#include <stdio.h>

int main() {
   
   int mat[5][5];
   int i,j,r=0,c=0;
   for(i=0 ; i<5 ; i++)
   {
       for(j=0 ; j<5 ; j++)
       {
           scanf("%d",&mat[i][j]);
       }
         
   }
    for(i=0 ; i<5 ; i++)
   {
       for(j=0 ; j<5 ; j++)
       {
           if(mat[i][j]==1){
             r=i+1;
             c=j+1;
           }
       }
         
   }
   int rd,cd;
   if(r>3){
       rd=r-3;
   }
   else{
       rd=3-r;
   }
   if(c>3){
       cd=c-3;
   }
   else{
       cd=3-c;
   }
   
   printf("%d",rd+cd);

    return 0;
}
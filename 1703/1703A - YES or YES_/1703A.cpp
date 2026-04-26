// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {
   
   int t,i,j;
   scanf("%d",&t);
   char str[1010][4];
   
   for(i=0 ; i<t ; i++)
   {    
       scanf("%s",str[i]);
   }
   for(i=0 ; i<t ; i++)
   {
       int count=0;
       int l=strlen(str[i]);
                if(l==3 && (str[i][0]=='y' ||str[i][0]=='Y')
                && (str[i][1]=='e' ||str[i][1]=='E')
                && (str[i][2]=='s' ||str[i][2]=='S'))
                {printf("YES");}
            else
            {
                printf("NO");
            }
    printf("\n");
   }
   
   return 0;
}
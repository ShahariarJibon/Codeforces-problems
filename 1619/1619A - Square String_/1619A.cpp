// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
   int t,i;
   scanf("%d",&t);
   for(i=0 ; i<t ; i++)
   {
       char str[1000];
       scanf("%s",str);
       int l=strlen(str);
       int j=l/2,k=0,count=0;
       if(l%2!=0)
       {
           printf("NO\n");
           continue;
       }
       while(k<(l/2) && j<l)
       {
           if(str[k]==str[j])
           {
               count++;
           }
           k++;
           j++;
       }
       if(count==(l/2))
       {
           printf("YES\n");
       }
       else printf("NO\n");
   }

    return 0;
}
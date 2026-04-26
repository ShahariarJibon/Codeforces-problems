// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {
   char str1[200],str2[200],str3[200];
   char temp[200];
   scanf("%s %s %s",str1,str2,str3);
   int i,j,l1,l2,l3;
   int c1=0, c2=0,c3=0,real=0;
   l1=strlen(str1);l2=strlen(str2);l3=strlen(str3);
   if(l1+l2==l3)
   {
       for(i=0 ; i<l3 ; i++)
       {   c1=0;
           c2=0;
           c3=0;
           for(j=0 ; j<l1 ; j++)
           {
               if(str3[i]==str1[j])
               {
                   c1++;
               }
           }
           for(j=0 ; j<l2 ; j++)
           {
               if(str3[i]==str2[j])
               {
                   c2++;
               }
           }
           for(j=0 ; j<l3 ; j++)
           {
               if(str3[i]==str3[j])
               {
                   c3++;
               }
           }
           if(c1+c2==c3)
           {
               real++;
           }
       }
       if(real==l3)
       {
           printf("YES");
       }
       else{printf("NO");}
   }
   
   else
   {
       printf("NO");
   }

    return 0;
}
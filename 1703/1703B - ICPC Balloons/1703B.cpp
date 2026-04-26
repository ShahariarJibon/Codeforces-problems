// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int t,i,sum[1000];
   scanf("%d",&t);
   for(i=0 ; i<t ; i++)
   {
       int n,j,k,count=0;
       char str[1000];
       scanf("%d",&n);
       scanf("%s",str);
       str[n]='\0';
       for(j=0 ; j<n ; j++)
       {
           int flag=0;
           for(k=0 ; k<j ; k++)
           {
               if(str[j]==str[k])
               {
                   flag=1;
                   break;
               }
           }
           if(flag==0) count++;
       }
       sum[i]=n+count;
   }
   for(i=0 ; i<t ; i++)
   {
       printf("%d\n",sum[i]);
   }

    return 0;
}
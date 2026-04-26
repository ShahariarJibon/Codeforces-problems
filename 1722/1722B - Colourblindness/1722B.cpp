// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int i,n,flag=0;
       scanf("%d",&n);
       char str1[1000],str2[1000];
       scanf("%s",str1);
       scanf("%s",str2);
       for(i=0 ; i<n ; i++)
       {
           if(str1[i]=='R' && str2[i]=='R') flag=0;
           else if((str1[i]=='G' || str1[i]=='B') && (str2[i]=='G' || str2[i]=='B')) flag=0;
           else 
           {
               flag=1;
               break;
           }
       }
       if(flag==0) printf("YES\n");
       if(flag==1) printf("NO\n");
   }
    return 0;
}
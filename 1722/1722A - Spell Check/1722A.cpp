// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
   int t,i;
   scanf("%d",&t);
   for(i=0 ; i<t ; i++)
   {
      int n,a1=0,a2=0,a3=0,a4=0,a5=0;
      scanf("%d",&n);
      char str[1000];
      scanf("%s",str);
      int i,j=0;
      j=strlen(str);
      if(j!=5)
      {
          printf("NO\n");
          continue;
      }
      for(i=0 ; str[i]!='\0' ; i++)
      {
          if(str[i]=='T') a1++;
          else if(str[i]=='i') a2++;
          else if(str[i]=='m') a3++;
          else if(str[i]=='u') a4++;
          else if(str[i]=='r') a5++;
      }
      if(a1==1 && a2==1 && a3==1 && a4==1 && a5==1)
      {
          printf("YES\n");
      }
      else
      {
          printf("NO\n");
      }
   }

    return 0;
}
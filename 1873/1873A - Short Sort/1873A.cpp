// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d",&t);
    int i,j;
    char a[10]="",b[10]="abc";
    for(i=0 ; i<t ; i++)
    {
       scanf("%s",a);
       if(a[0]=='a' && a[1]=='b' && a[2]=='c')
       {
           printf("YES\n");
       }
       else if(a[0]=='a' && a[1]!='b')
       {
           printf("YES\n");
       }
       else if (a[1]=='b' && a[0]!='a')
       {
           printf("YES\n");
       }
       else if(a[2]=='c' && a[0]!='a')
       {
           printf("YES\n");
       }
       else printf("NO\n");
    }
    return 0;
}
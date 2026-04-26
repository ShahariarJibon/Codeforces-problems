// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d",&t);
    int i,j;
    char a[10]="",b[10]="",temp[10],str[1000]={0};
    for(i=0 ; i<t ; i++)
    {
       scanf("%s %s",a,b);
       temp[0]=a[0];
       a[0]=b[0];
       b[0]=temp[0];
       strcat(str,a);
       strcat(str," ");
       strcat(str,b);
       printf("%s\n",str);
       str[0]='\0';
    }
    return 0;
}
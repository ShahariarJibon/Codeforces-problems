#include <stdio.h>
#include <string.h>
int main() {
    char str[3000],d[1000];
    fgets(str, 3000, stdin);
    int i,l,j=0;
    l=strlen(str);
    if(l<=3)
    {
        printf("0");
        return 0;
    }
    for(i=1 ; i<l ; i=i+3)
    {
        d[j]=str[i];
        j++;
    }
    int count=0;
    for(i=0 ; i<j ; i++)
    {
       int flag=0;
       for(int k=0 ; k<i ; k++)
       {
           if(d[i]==d[k])
           {
               flag=1;
               break;
           }
       }
       if(flag==0)
       {
           count++;
       }
    }
    printf("%d",count);

    return 0;
}
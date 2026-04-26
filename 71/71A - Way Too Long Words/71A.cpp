#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,len,j;
    char temp[100];
    char str[100];
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {   len=0;

        scanf("%s",str);

        len=strlen(str);
        if(len>10)
        {
           printf("%c",str[0]);
           printf("%d",len-2);
           printf("%c",str[len-1]);
        }
        else{printf("%s\n",str); }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    char str[100];
    int i,b=0,s=0;
    scanf("%s",&str);
    for(i=0 ; str[i]!='\0' ; i++)
    {
        if(str[i]>=65 && str[i]<=90){b++;}
        if(str[i]>=97 && str[i]<=122){s++;}
    }
    if(b>s)
    {
        for(i=0 ; str[i]!='\0' ; i++)
        {
            if(str[i]>=97 && str[i]<=122){str[i]=str[i]-32;}
        }
        printf("%s",str);
    }
    if(b<s || b==s)
    {
        for(i=0 ; str[i]!='\0' ; i++)
        {
            if(str[i]>=65 && str[i]<=90){str[i]=str[i]+32;}
        }
        printf("%s",str);
    }

    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char a[102],b[102];
    int i;
    scanf("%s %s",a,b);
    int l1=strlen(a);
    int l2=strlen(b);
    if(l1==l2)
    {
        for(i=0 ; i<l1 ; i++)
        {
            if(a[i]!=b[i])
            {
                printf("1");
            }
            if(a[i]==b[i])
            {
                printf("0");
            }
        }
    }

    return 0;
}

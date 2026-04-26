#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count=0;
    char str[100];
    scanf("%s",str);
    for(i=0 ; str[i]!='\0' ; i++)
    {
        int flag=0;
        for(j=0 ; j<i ; j++)
        {
            if(str[i]==str[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0){count++;}
    }
    if(count%2==0){printf("CHAT WITH HER!");}
    else{printf("IGNORE HIM!");}

    return 0;
}

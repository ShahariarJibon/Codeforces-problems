#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,count=0;
    scanf("%d",&n);
    char str[102];
    scanf("%s",str);
    for(i=0 ; i<n ; i++)
        {
            if(str[i]>='A' && str[i]<='Z'){str[i]=str[i]+32;}
        }
    for(i=0 ;i<n ; i++)
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
    if(count>=26){printf("YES");}
    else{printf("NO");}

    return 0;
}

// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    char ch[1000],str[]="codeforces";
    scanf("%d",&t);
    int i,j;
    for(i=0 ; i<t ; i++)
    {
        scanf(" %c",&ch[i]);
    }
    
    for(i=0 ; i<t ; i++)
    {
        int flag=0;
        for(j=0 ; str[j]!='\0' ; j++)
        {
            if(ch[i]==str[j])
            {
                printf("YES\n");
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("NO\n");
        }
    }
    
    return 0;
}
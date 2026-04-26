#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[6];
        int a=0,b=0;
        scanf("%s",str);
        for(int i=0 ; str[i]!='\0' ; i++)
        {
            if(str[i]=='A') a++;
            else b++;
        }
        if(a>b) printf("A\n");
        else printf("B\n");
    }

return 0;
}


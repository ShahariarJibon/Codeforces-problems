// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char str[100];
        scanf("%s",str);
        int x=0,y=0,flag=0;
        for(int i=0 ; str[i]!='\0' ; i++)
        {
            if(str[i]=='U') y++;
            else if(str[i]=='D') y--;
            else if(str[i]=='R') x++;
            else if(str[i]=='L') x--;
            
            if(x==1 && y==1) 
            {
                flag=1;
                printf("YES\n");
                break;
            }
        }
        if(flag==0) printf("NO\n");
    }
    return 0;
}
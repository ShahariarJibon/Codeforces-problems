// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,m,i;
    scanf("%d %d",&n ,&m);
    char c[15000];
    int flag=0;
    for(i=0 ; i<(n*m) ; i++)
    {
        scanf(" %c",&c[i]);
    }
    for(i=0 ; i<(n*m) ; i++)
    {
        if(c[i]=='C' || c[i]=='M' || c[i]=='Y')
            {
                flag=1;
                printf("#Color");
                //return 0;
                break;
            }
        else if(c[i]=='B' || c[i]=='G' || c[i]=='W')
        {
            flag=0;
        }
    }
    if(flag==0)
    {
        printf("#Black&White");
    }
    return 0;
}
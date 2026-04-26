// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,f,l;
        scanf("%d",&n);
        char str[100];
        scanf("%s",str);
        for(int i=0 ; i<n ; i++)
        {
            if(str[i]=='B')
            {
                f=i;
                break;
            }
        }
        for(int i=(n-1) ; i>=0 ; i--)
        {
            if(str[i]=='B')
            {
                l=i;
                break;
            }
        }
        int r=(l-f)+1;
        printf("%d\n",r);
        
    }

    return 0;
}
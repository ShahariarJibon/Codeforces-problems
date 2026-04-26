// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char str[800][4];
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<4 ; j++)
            {
                scanf(" %c",&str[i][j]);
            }
        }
        
        for(int i=(n-1) ; i>=0 ; i--)
        {
            for(int j=0 ; j<4 ; j++)
            {
                if(str[i][j]=='#') printf("%d ",j+1);
            }
        }
        printf("\n");
    }
    return 0;
}

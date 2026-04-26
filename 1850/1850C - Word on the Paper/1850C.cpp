// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[100];
        for(int i=0 ; i<64 ; i++)
        {
            scanf(" %c",&str[i]);
        }
        for(int i=0 ; i<64 ; i++)
        {
            if(str[i]!='.') printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}

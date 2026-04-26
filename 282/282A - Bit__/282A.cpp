#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    int m=0;
    for(int i=1 ; i<=n ; i++)
    {
        char str[4];
        fgets(str,4,stdin);
        getchar();

        if(str[1]=='+') m++;
        if(str[1]=='-') m--;
    }

    printf("%d",m);
    return 0;
}

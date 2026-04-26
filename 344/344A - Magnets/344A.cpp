#include<stdio.h>
#include <string.h>
int main()
{
    int n,i;
    char num[100000][3];
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%s",&num[i]);
    }
    int count=1;
    for(i=0 ; i<n-1 ; i++)
    {
        if(strcmp(num[i], num[i+1]) != 0) count++;
    }
    printf("%d",count);
    return 0;
}

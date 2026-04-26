// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int i,num[10];
    for(i=1 ; i<=4 ; i++)
    {
        scanf("%d",&num[i]);
    }
    char n[105000];
    int d,sum=0,l;
    scanf("%s",n);
    l=strlen(n);
    for(i=0 ; i<l ; i++)
    {
        int d = n[i] - '0';
        sum += num[d];
    }
    printf("%d",sum);

    return 0;
}
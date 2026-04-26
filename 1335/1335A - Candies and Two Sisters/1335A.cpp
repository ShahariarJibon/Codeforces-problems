// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t,i;
    long int num[10000];
    scanf("%d",&t);
    for(i=1 ; i<=t ; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=1 ; i<=t ; i++)
    {   
       printf("%d\n",(num[i]-1)/2);
    }
    return 0;
}
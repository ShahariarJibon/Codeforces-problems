#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n%2!=0){printf("-1");}
    else {
    for(i=2 ; i<=n ; i=i+2)
    {
        printf("%d ",i);
        printf("%d ",i-1);
    }
   
    }
    
    return 0;
}

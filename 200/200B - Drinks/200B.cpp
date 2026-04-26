#include<stdio.h>

int main()
{
    int n,i;
    double sum=0,num;
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        scanf("%lf",&num);
        sum+=num;
    }
    
    printf("%.12f",sum/n*1.0);

    return 0;
}

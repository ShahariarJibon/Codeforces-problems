#include<stdio.h>
int main()
{
    int n,num[100],j,i;
    int count=0,k;

    scanf("%d",&n);
    k=0;
    for(j=1 ; j<=n ; j++)
    {

        count=0;
        for(i=1 ; i<=3 ; i++)
        {
            scanf("%d",&num[i]);
            if(num[i]==1)
            {
                count++;
            }

        }
        if(count>=2)
        {
            k++;
        }
    }
    printf("%d",k);


    return 0;
}

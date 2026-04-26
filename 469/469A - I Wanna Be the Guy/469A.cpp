#include<stdio.h>
#include<string.h>
int main()
{
    int n,p,q,i,j,k=0;
    int num1[105],num2[105],str[210];
    scanf("%d",&n);
    scanf("%d",&p);
    for(i=0 ; i<p ; i++)
    {
        scanf("%d",&num1[i]);
        str[k]=num1[i];
        k++;
    }
    scanf("%d",&q);
    for(i=0 ; i<q ; i++)
    {
        scanf("%d",&num2[i]);
        str[k]=num2[i];
        k++;
    }
    int count=0;
    for(i=0 ; i<(p+q) ; i++)
    {
        int flag=0;
        for(j=0 ; j<i ; j++)
        {
            if(str[i]==str[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0){count++;}
    }
    if(count==n){printf("I become the guy.");}
    else{printf("Oh, my keyboard!");}

    return 0;
}

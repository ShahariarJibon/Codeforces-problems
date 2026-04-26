// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,i=1,sum=0,total=0,j=1;
    scanf("%d",&n);
    while(1)
    {
        sum=0;
        for(i=1 ; i<=j ; i++)
        {
            sum+=i;
        }
        total+=sum;
        if(total>n) break;
       j++;
    }
    printf("%d",j-1);

    return 0;
}
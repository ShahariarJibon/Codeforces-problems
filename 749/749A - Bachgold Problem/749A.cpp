// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum=0,c=0;
    if(n%2==0)
    {
        while(sum!=n)
        {
            sum+=2;
            c++;
        }
        printf("%d\n",c);
        for(int i=0 ; i<c ; i++)
        {
            printf("2 ");
        }
    }
    if(n%2!=0)
    {
        n-=3;
        while(sum!=n)
        {
            sum+=2;
            c++;
        }
        printf("%d\n",c+1);
        for(int i=0 ; i<c ; i++)
        {
            printf("2 ");
        }
        printf("3");
    }

    return 0;
}
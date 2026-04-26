// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int a,b;
    scanf("%d %d",&a ,&b);
    int i,j,count=0;
    for(i=a+1 ; ; i++)
    {
        count=0;
        for(j=2 ; j*j<=i ; j++)
        {
            if(i%j==0)
            {
                count=1;
                break;
            }
        }
        if(count==0)
        {
            if(i==b)
            printf("YES\n");
            else 
            printf("NO\n");
            break;
        }
    }

    return 0;
}
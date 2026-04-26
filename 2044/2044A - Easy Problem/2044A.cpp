// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i=0,j=n;
        int c=0;
        while(i!=n)
        {

            if(i+j==n) c++;
            i++;
            j--;
        }
        printf("%d\n",c-1);
    }
    return 0;
}

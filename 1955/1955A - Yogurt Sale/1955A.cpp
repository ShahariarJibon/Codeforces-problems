// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b,m;
        scanf("%d %d %d",&n ,&a ,&b);
        if(b<2*a)
        {
             if(n%2==0)
            {
                m=(n/2)*b;
            }
             else if (n%2!=0)
            {
                m=((n/2)*b)+a;
            }
        printf("%d\n",m);
        }
        else //if(b>2*a)
        {
            m=n*a;
            printf("%d\n",m);
        }
        
    }

    return 0;
}
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,n;
        scanf("%d %d %d %d",&a ,&b ,&c ,&n);
        if(n==0 && a==b && b==c)
        {
            printf("YES\n");
            continue;
        }
        else
        {
            int max=a;
            if(b>max) max=b;
            if(c>max) max=c;
            int d=(max-a)+(max-b)+(max-c);
            int remain=n-d;
            if (remain >= 0 && remain % 3 == 0)
                printf("YES\n");
            else
                printf("NO\n");
         }
    }

    return 0;
}
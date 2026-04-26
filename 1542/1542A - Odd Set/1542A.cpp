// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a[1000],e=0,o=0;;
        scanf("%d",&n);
        for(int i=0 ; i<2*n ; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0) e++;
            else o++;
        }
        if(e==n && o==n) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
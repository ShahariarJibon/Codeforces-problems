// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        int digits=0;
        long long num = n;
        while (num > 0)
        {
            num /= 10;
            digits++;
        }
        long long base = 0;
        for (int i=0 ; i<digits ; i++) 
        {
            base=base*10+1;  
        }
        int ans=9*(digits-1);
        for (int i=1; i<=9 ; i++)
        {
            if (i*base<=n) ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}

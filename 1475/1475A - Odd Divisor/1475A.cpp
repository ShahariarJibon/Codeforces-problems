#include <stdio.h>

int main() {
    int t,i;
    scanf("%d", &t);
    long long int n[1000090];
    for(i=0 ; i<t ; i++)
    {
        scanf("%lld", &n[i]);
    }
     for(i=0 ; i<t ; i++)
    {
        while (n[i] % 2 == 0)
        {
            n[i] /= 2;
        }
        if (n[i] > 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

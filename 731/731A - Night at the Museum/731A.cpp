// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[105];
    scanf("%s", s);
    char fir = 'a';
    int ans = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        int d=abs(s[i]-fir);
        if (d<26-d)
        {
            ans+=d;
        }
        else
        {
            ans+=26-d;
        }
        fir=s[i];
    }

    printf("%d\n",ans);
    return 0;
}

// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char str[100];
        scanf("%s",str);
        int max=str[0];
        for(int i=1 ; i<n ; i++)
        {
            if(str[i]>max) max=str[i];
        }
        printf("%d\n",max-96);
    }
    return 0;
}

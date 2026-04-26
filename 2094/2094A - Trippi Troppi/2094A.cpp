// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str1[100],str2[100],str3[100];
        scanf("%s",str1);
        scanf("%s",str2);
        scanf("%s",str3);
        printf("%c%c%c",str1[0] ,str2[0] ,str3[0]);
        
        
        printf("\n");
    }

    return 0;
}
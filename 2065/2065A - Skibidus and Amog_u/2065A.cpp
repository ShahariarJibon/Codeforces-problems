// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[100];
        scanf("%s",str);
        int l=strlen(str);
        if(str[l-1]=='s' && str[l-2]=='u')
        {
            str[l-2]='i';
            str[l-1]='\0';
        }
        printf("%s\n",str);
    }
    return 0;
}

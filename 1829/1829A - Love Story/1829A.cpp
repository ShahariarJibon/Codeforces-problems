// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d",&t);
    char str[]="codeforces",str2[1000];
    int i,j;
    for(i=0 ; i<t ; i++)
    {
        int count=0;
        scanf("%s",str2);
        for(j=0 ; j<10 ; j++)
        {
            if(str[j]!=str2[j])
            {
                count++;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
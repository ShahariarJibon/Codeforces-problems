#include <stdio.h>
#include <string.h>

int main() {
    
    char str[250];
    scanf("%s",str);
    int i,j;
    for(i=0 ; str[i]!='\0' ; i++)
    {
        if(str[i]=='.')
        {
            printf("0");
            continue;
        }
        if(str[i]=='-' && str[i+1]=='.')
        {
            printf("1");
            i+=1;
            continue;
        }
         if(str[i]=='-' && str[i+1]=='-')
        {
            printf("2");
           i+=1;
            continue;
        }
    }
    
    
    return 0;
}

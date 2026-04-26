// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    scanf("%s",str);
    int count=0,i,l;
    l=strlen(str);
    for(i=0 ; i<l ; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            count++;
        }
    }
     if(count==l)
        {
           for(int j=0 ; j<l ; j++)
           {
               str[j]=str[j]+32;
               printf("%c",str[j]);
           }
           return 0;
        }
        count=0;
     if(str[0]>='a' && str[0]<='z')
        {
            for(int j=1 ; j<l ; j++)
            {
                if(str[j]>='A' && str[j]<='Z')
                {   
                    count++;
                }
            }
            if(count==(l-1))
            {
                str[0]=str[0]-32;
                for(int j=1 ; j<l ; j++)
                {
                    str[j]=str[j]+32;
                }
            }
            for(int k=0 ; k<l ; k++)
            {
                printf("%c",str[k]);
            }
            return 0;
        }
        else
        {
            printf("%s",str);
        }
        

    return 0;
}
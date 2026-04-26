#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l1,l2,count=0;
    char s[1200],t[1200];
    scanf("%s",s);
    scanf("%s",t);

    l1=strlen(s);l2=strlen(t);
    i=0;j=l2-1;
     if(l1 != l2) {
        printf("NO");
       return 0;
    }
    if(l1==l2)
    {
        while(i<l1 && j>=0)
        {
            if(s[i]!=t[j])
            {
                printf("NO");
                return 0;
            }
            i++;
            j--;
        }
    }
    printf("YES");

    return 0;
}


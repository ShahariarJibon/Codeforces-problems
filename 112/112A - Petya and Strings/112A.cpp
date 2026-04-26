#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0;
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
        for(i=0 ; str1[i] != '\0' && str2[i] != '\0' ; i++){
            if(str1[i]>=65 &&str1[i]<=90)
            {
                str1[i]=str1[i]+32;
            }
             if(str2[i]>=65 &&str2[i]<=90)
            {
                str2[i]=str2[i]+32;
            }
                   if(str1[i]<str2[i]){printf("-1");return 0;}
                   if(str1[i]>str2[i]){printf("1"); return 0;}
            }
        if(str1[i]) printf("1");
    else if(str2[i]) printf("-1");
    else printf("0");
        return 0;
}

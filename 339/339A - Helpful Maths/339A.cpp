#include<stdio.h>
#include<string.h>
int main()
{
    int i,l1,j,m=0,n=0,l=0;
    char str[100],ch1[100],ch2[100],ch3[100],d='+';
    scanf("%s",str);
    l1=strlen(str);

    for(i=0 ; i<l1 ; i=i+2)
    {
        if(str[i]=='1'){ch1[m]=str[i];m++;}
        if(str[i]=='2'){ch2[n]=str[i];n++;}
        if(str[i]=='3'){ch3[l]=str[i];l++;}
    }
    ch1[m] = '\0';
    ch2[n] = '\0';
    ch3[l] = '\0';

    strcat(ch1,ch2);
   strcat(ch1,ch3);

    for(i=0; ch1[i]!='\0'; i++) {
        printf("%c", ch1[i]);
        if(ch1[i+1] != '\0') printf("+");
    }


    return 0;
}

#include<stdio.h>
int main()
{
    int n,i,t;
    scanf("%d %d",&n,&t);
    char str[100];
    scanf("%s",str);
    int j=0;
    for(j=0 ; j<t; j++)
    {
        for(i=0 ; i<n-1 ; i++)
        {
            if(str[i]=='B' && str[i+1]=='G')
            {
                char temp=str[i+1];
                str[i+1]=str[i];
                str[i]=temp;
                i++;

            }

        }
    }
    printf("%s",str);

    return 0;
}

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int x[4];
        for(int i=0 ; i<3 ; i++)
        {
            scanf("%d",&x[i]);
        }
        int min=x[0];
        for(int i=1 ; i<3 ; i++)
        {
            if(x[i]<min) min=x[i];
        }
        int max=x[0];
        for(int i=1 ; i<3 ; i++)
        {
            if(x[i]>max) max=x[i];
        }
        printf("%d\n",max-min);

    }
    return 0;
}

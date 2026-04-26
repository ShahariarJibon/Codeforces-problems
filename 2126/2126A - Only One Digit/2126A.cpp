#include<stdio.h>
int main()
    {
        int t,num[1000];
        scanf("%d",&t);
        for(int i=0 ; i<t ; i++)
        {
            scanf("%d",&num[i]);
        }
        int d[100];
        for(int i=0 ; i<t ; i++)
        {   int j=0;
            while(num[i]>0)
            {
                d[j]=num[i]%10;
                num[i]=num[i]/10;
                j++;
            }
            int min=d[0];
            for(int k=1 ; k<j ; k++)
            {
                if(d[k]<min){min=d[k];}
            }
            printf("%d\n",min);
        }

        return 0;
    }

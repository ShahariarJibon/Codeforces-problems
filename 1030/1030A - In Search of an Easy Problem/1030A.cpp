#include<stdio.h>
int main()
    {
        int n,num[100];
        scanf("%d",&n);
        for(int i=0 ; i<n ; i++)
        {
            scanf("%d",&num[i]);
        }
        int count=0;
        for(int i=0 ; i<n ; i++)
        {
            if(num[i]==1)
            {
                printf("HARD");
                break;
            }
            if(num[i]==0)
            {
                count++;
            }
        }
        if(count==n){printf("EASY");}

        return 0;
    }

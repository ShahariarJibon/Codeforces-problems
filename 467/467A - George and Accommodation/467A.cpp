#include<stdio.h>
int main()
    {
        int n,p[100],q[100];
        scanf("%d",&n);
        for(int i=0 ; i<n ; i++)
        {
            scanf("%d %d",&p[i] ,&q[i]);
        }
        int count=0;
        for(int i=0 ; i<n ; i++)
        {
            if(q[i]-p[i]>=2)
            {
                count++;
            }
        }
        printf("%d",count);

        return 0;
    }

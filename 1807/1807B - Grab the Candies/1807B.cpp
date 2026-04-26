#include <stdio.h>

int main()
     {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            int n,num[150],s1=0,s2=0;
            scanf("%d",&n);
            for(int i=0 ; i<n ; i++)
            {
                scanf("%d",&num[i]);
                if(num[i]%2==0) s1+=num[i];
                else s2+=num[i];
            }
           if(s1>s2) printf("YES\n");
           else printf("NO\n");

        }
        return 0;
    }

    

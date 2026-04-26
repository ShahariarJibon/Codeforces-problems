// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int s[10];
        for(int i=0 ; i<4 ; i++)
        {
            scanf("%d",&s[i]);
        }
        int m1,m2;
        if(s[0] > s[1]) m1=s[0];
        else if (s[0]<s[1]) m1=s[1];
        if(s[2]>s[3]) m2=s[2];
        else if(s[2]<s[3]) m2=s[3];
        int c1=0,c2=0;
        for(int i=0 ; i<4 ; i++)
        {
            if(s[i]>m1) c1++;
            if(s[i]>m2) c2++;
        }
        if((c1==0 || c1==1) && (c2==0 || c2==1)) printf("YES\n");
        else printf("NO\n");
        
    }
    
    return 0;
}
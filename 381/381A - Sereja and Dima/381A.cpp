#include <stdio.h>
#include <string.h>

int main() {

    int n,num[10000];
    scanf("%d",&n);
    int i,l,r,s1=0,s2=0,a=0;
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&num[i]);
    }
    l=0;r=n-1;
    for(i=0 ; i<n ; i++)
    {
        if(num[l]>=num[r])
        {
            a=num[l];
            l++;
        }
        else
        {
            a=num[r];
            r--;
        }
        if(i%2!=0)
        {
            s2+=a;
        }
        else
        {
            s1+=a;
        }
    }
    printf("%d %d",s1,s2);

    return 0;
}

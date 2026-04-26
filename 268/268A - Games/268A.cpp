#include <stdio.h>
#include <string.h>
int main() {
    
    int n,j;
    scanf("%d",&n);
    int i,a[100],h[100];
    for(i=0 ; i<n ; i++)
    {
        scanf("%d %d",&a[i] ,&h[i]);
    }
    int count=0;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            if(a[i]==h[j])
            {
                count++;
            }
        }
    }
    printf("%d",count);

    return 0;
}
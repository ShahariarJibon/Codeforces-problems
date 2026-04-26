#include <stdio.h>

int main() {

    int t,i,j;
    scanf("%d",&t);
    int x[101],n[101];
    for(i=0 ; i<t ; i++)
    {
        scanf("%d %d",&x[i] ,&n[i]);
    }
    for(i=0 ; i<t ; i++)
    {
        if(n[i]%2==0)
        {
          printf("0\n");
        }
        else
        {
            printf("%d\n",x[i]);
        }
    }
    return 0;
}

// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,max,min;
        scanf("%d %d",&x ,&y);
        if(x>y)
        {
            max=x;
            min=y;
        }
        else if(x<y)
        {
            max=y;
            min=x;
        }
        else if(x==y)
        {
            min=x;
            max=x;
        }
        printf("%d %d\n",min,max);
    }
    
    return 0;
}
// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a ,&b);
        int min,max;;
        min = (a < b) ? a : b;
        max = (a > b) ? a : b;
        
        int s = (2 * min > max) ? 2 * min : max;
        printf("%d\n",s*s);
    }
    
    return 0;
}
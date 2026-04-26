// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int a,b,c;
       scanf("%d %d %d",&a ,&b ,&c);
       if(c%2==0)
       {
           if(a>b)
           {
               printf("First\n");
           }
           else if(a<b)
           {
               printf("Second\n");
           }
           else if(a==b)
           {
                printf("Second\n");   
           }
       }
       if(c%2!=0)
       {
           if(a>b)
           {
               printf("First\n");
           }
           else if(a<b)
           {
               printf("Second\n");
           }
           else if(a==b)
           {
                printf("First\n");   
           }
       }
    }
    return 0;
}

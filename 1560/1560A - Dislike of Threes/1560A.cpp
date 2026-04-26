#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    int k[10000];
    for(int i=0 ; i<t ; i++) 
    {
        scanf("%d",&k[i]);
    }

    
    int seq[2000], count=0;  
    for(int num=1; count<2000; num++) 
    {
        if(num%3!=0 && num%10!=3) 
        {
            seq[count] = num;
            count++;
        }
    }

    
    for(int i=0; i<t; i++) 
    {
        printf("%d\n", seq[k[i]-1]);
    }
    return 0;
}

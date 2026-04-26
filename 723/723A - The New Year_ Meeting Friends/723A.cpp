// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {
  
    int x[5],i,temp;
    for(i=0 ; i<3 ; i++)
    {
        scanf("%d",&x[i]);
    }
        for(i = 0; i < 2; i++)
        {
            for(int j = i+1; j < 3; j++)
            {
                if(x[i] > x[j])
                {
                    temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                }
            }
        }
    int d[5],r=0;
    r = (x[1]-x[0]) + (x[2]-x[1]);
    printf("%d",r);
    
  
    return 0;
}
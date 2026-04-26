#include <stdio.h>
#include <string.h>
int main() {            
    
    int a,b;
    scanf("%d %d",&a ,&b);
    int i,j,k;
    int flag=0;
    
        for(i=1 ; i<=a ; i++)
        {
            if(i%2!=0)
            {
                for(j=1 ; j<=b ; j++)
                {
                    printf("#");
                }
                
            }
            else if(i%4==0)
            {
                printf("#");
                for(k=1 ; k<b ; k++)
                {
                    printf(".");
                }
               
                
            }
            
            else
            { 
                
                for(k=1 ; k<b ; k++)
                {
                    printf(".");
                }
                printf("#");
            }
            printf("\n");
        }
        
   

    return 0;
}
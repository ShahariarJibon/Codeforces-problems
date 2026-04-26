// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,i,total=0;
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<2 ; j++){
        char exp[100],d;
        scanf("%s",exp);
        d=exp[0];
        switch(d)
        {
            case'T':
                total+=4;
                break;
            case'C':
                total+=6;
                break;
            case'O':
                total+=8;
                break;
            case'D':
                total+=12;
                break;
            case'I':
                total+=20;
                break;

        }
        }
        
    }
    printf("%d",total);
}
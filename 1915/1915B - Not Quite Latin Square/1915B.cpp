#include <stdio.h>
#include <string.h>

int main() {

    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char mat[3][3];
        for(int i=0 ; i<3 ; i++)
        {
            for(int j=0 ; j<3 ; j++)
            {
                scanf(" %c",&mat[i][j]);
            }
        }
        int c1=0,c2=0,c3=0,d=0;
        for(int i=0 ; i<3 ; i++)
        {
            for(int j=0 ; j<3 ; j++)
            {
                if(mat[i][j]=='A') c1++;
                if(mat[i][j]=='B') c2++;
                if(mat[i][j]=='C') c3++;
                if(mat[i][j]=='?') d++;
            }
        }
        if(c1!=3 && d==1) printf("A\n");
        else if(c2!=3 && d==1) printf("B\n");
        else if(c3!=3 && d==1) printf("C\n");
    }


    return 0;
}



#include <stdio.h>

int main() {
    
    int n,A=0,D=0;
    scanf("%d",&n);
    char str[n+1];
        scanf("%s",&str);
    
    for(int i=0 ; i<n ; i++)
    {
        if(str[i]=='A'){ A++;}
        if(str[i]=='D'){ D++;}
    }
    if(D>A){printf("Danik");}
    if(A==D){printf("Friendship");}
    if(A>D){printf("Anton");}
    return 0;
}

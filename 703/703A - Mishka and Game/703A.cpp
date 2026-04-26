#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i;
    int m,c;
    int cm=0,cc=0,not=0;
    for(i=0 ; i<n ; i++)
    {
        scanf("%d %d",&m ,&c);
        if(m>c)cm++;
        if(m<c)cc++;
        if(m==c)not++;
    }
    if(cm>cc)printf("Mishka");
    if(cm<cc)printf("Chris");
    if(cm==cc) printf("Friendship is magic!^^");
     return 0;
}

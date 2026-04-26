// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
    int a,b;
    char c;
    int t;
    scanf("%d",&t);
    while(t--){
    scanf("%d %c %d",&a ,&c ,&b);
    printf("%d\n",(a+b));
    }
    return 0;
}
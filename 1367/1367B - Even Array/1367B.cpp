#include <stdio.h>

int main() {
    int t,n,i,c1,c2;
    scanf("%d", &t);  

    while (t--) {
        
        scanf("%d", &n);

        int a[n];
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

         c1 = 0;  
         c2 = 0;  

        for (i=0 ; i<n; i++) 
        {
            if ((i%2== 0) && (a[i]%2!= 0)) 
            {
                c1++;
            }
            else if ((i%2== 1) && (a[i]%2== 0)) 
            {
                c2++;
            }
        }

        if (c1 == c2)
        {
            printf("%d\n",c1);
        }
        else 
        {
            printf("-1\n");
        }
    }

    return 0;
}

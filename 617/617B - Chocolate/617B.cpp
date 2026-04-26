#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num[n];
    for (int i =0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    int arr[n], k = 0;
    for (int i = 0; i < n; i++)
    {
        if (num[i]== 1)
        {
            arr[k] = i;
            k++;
        }
    }
    if (k ==0)
    {
        printf("0\n");
        return 0;
    }
    long long mul = 1;
    for (int i = 0 ; i < k-1; i++)
    {
        int d =arr[i + 1]-arr[i];
        mul*=d;
    }
    printf("%lld", mul);
    return 0;
}

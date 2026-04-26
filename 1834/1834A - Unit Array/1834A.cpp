#include <bits/stdc++.h>
using namespace std;

int suma(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

int multia(int a[], int n)
{
    int mul = 1;
    for (int i = 0; i < n; i++)
    {
        mul *= a[i];
    }
    return mul;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum=suma(a,n);
        int mul=multia(a,n);
        int cnt=0;

        while(sum<0 || mul!=1){
            for(int i=0 ; i<n ; i++)
            {
                if(a[i]<0)
                {
                    a[i]=abs(a[i]);
                    cnt++;
                    break;
                }
            }
            sum=suma(a,n);
            mul=multia(a,n);
        }
        cout<<cnt<<endl;
    }
    return 0;
}

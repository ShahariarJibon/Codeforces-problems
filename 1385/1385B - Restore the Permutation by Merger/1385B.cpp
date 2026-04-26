#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;  
        int a[2*n];                
        for(int i=0 ; i<2*n ; i++)
        {
            cin>>a[i];
        }


        for(int i=0 ; i<2*n ; i++)
        {
            for(int j=0 ; j<i ; j++)
            {
                if(a[i]==a[j])
                {
                    cout<<a[i]<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}

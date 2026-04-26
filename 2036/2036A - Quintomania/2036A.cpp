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
        int a[n];
        for(int i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        int flag=0;
        for(int i=0 ; i<n-1 ; i++)
        {
            int d=a[i+1]-a[i];
            if(d<0) d*=(-1);
            if(d==5 || d==7)
            {
                flag=0;
            }else{
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        if(flag ==0) cout<<"YES"<<endl;
    }

    return 0;
}

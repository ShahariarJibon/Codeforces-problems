#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,s,m;
        cin >>n>>s>>m;
        long long l[n],r[n];
        for(int i=0 ; i<n ; i++)
        {
            cin >>l[i]>>r[i];
        }
        if(l[0]>=s){
            cout <<"YES"<<endl;
            continue;
        }
        if(m-r[n-1]>=s)
        {
            cout <<"YES"<<endl;
            continue;
        }
        int flag=0;
        for(int i=0 ; i<n-1 ; i++)
        {
            if(l[i+1]-r[i]>=s)
            {
                cout <<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0) cout<<"NO"<<endl;

    }
    return 0;
}

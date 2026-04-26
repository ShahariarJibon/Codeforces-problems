#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int num[n][n];
        string raw;
        for(int i =0 ; i<n ; i++){
            cin>>raw;
            for(int j=0 ; j<n ; j++){
                num[i][j]= raw[j]-'0';
            }
        }

        for(int i=0 ; i<n ; i+=k)
        {
            for(int j=0; j<n ; j+=k)
            {
                cout<<num[i][j];
            }
            cout<<"\n";
        }

        
        
    }
    return 0;
}

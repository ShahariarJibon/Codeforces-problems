#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int l[n];
        string s;
        int sum=0,c=0;
        for(int i=0 ; i<n ; i++){
            cin>>s;
            l[i]=s.length();
        }
        for(int i=0 ; i<n ; i++){
            sum+=l[i];
            if(sum<=m){
                c++;
            }else{
                break;
            }
        }
        cout<<c<<endl;
        
    }

    return 0;
}

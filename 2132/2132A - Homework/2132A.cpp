#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,j=0;;
        string a,b,c;
        cin>>n>>a>>m>>b>>c;
        int l=c.length();
        for(int i=0 ; i<l ; i++)
        {
            if(c[i]=='D')
            {
                a.push_back(b[j]);
                j++;
            }
            if(c[i]=='V')
            {
                a=b[j]+a;
                j++;
            }
        }
        cout<<a<<endl;
    }

    return 0;
}

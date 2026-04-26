#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n],m;
        string s;
        for(int i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        for(int i=0 ; i<n ; i++)
        {
             cin>>m;
             cin>>s;
             int l=s.length();
             for(int j=0 ; j<l ; j++)
             {
                if(s[j]=='D')
                {
                    if(a[i]==9)
                    {
                        a[i]=0;
                    }else{
                        a[i]++;
                    }
                }if(s[j]=='U')
                {
                    if(a[i]==0)
                    {
                        a[i]=9;
                    }else{
                        a[i]--;
                    }
                }
             }
        }
        for(int x:a)
        {
            cout<<x<<" ";
        }
        cout<<"\n";
    }

    return 0;
}


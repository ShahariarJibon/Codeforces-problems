#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string key;
        string str;
        cin>>key>>str;
        int l= str.length();
        int sum=0;
       
        for(int i=1 ; i<l ; i++)
        {
            size_t p1= key.find(str[i-1]);
            size_t p2=key.find(str[i]);
            int d=p2-p1;
            if(d<0)d*=(-1);
            sum+=d;
        }
        cout<<sum<<endl;

    }

    return 0;
}

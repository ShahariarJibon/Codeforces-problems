#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int cnt=0;
    for(int i=0 ; i<n-2 ; i++)
    {
        if(str[i]=='x' && str[i]==str[i+1] && str[i+1]==str[i+2])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}

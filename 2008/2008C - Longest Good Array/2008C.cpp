#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l,r,i=1;
        cin>>l>>r;
        long long sum=l;

        while(sum<=r){
            sum+=i;
            i++;
        }

        cout<<i-1<<endl;
        
    }

    return 0;
}

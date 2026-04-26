#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long m,temp;
        cin>>m;
        temp=m;
        int l=0;
        while(temp>0){
            temp/=10;
            l++;
        }
        long long mul=1;
        for(int i=1 ; i<l ; i++){
            mul*=10;
        }
        cout<<m-mul<<endl;

    }
    return 0;
}

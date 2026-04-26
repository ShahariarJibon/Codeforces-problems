#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        bool yes=true;
        if((a+b+c)<(x+y)){
            cout<<"NO"<<endl;
            continue;
        } 
        else{
            if((a+c)>=x){
                yes=true;
                if(x>a)
                c=c-(x-a);
            }else{
                yes=false;
            }

            if((b+c)>=y && yes==true){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }

        }
        
    }
    return 0;
}

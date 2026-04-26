#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >>a >> b>> c;
        if(a==b)
        {
            cout << "0" << endl;
            continue;
        }
        int mx=max(a,b);
        int mn=min(a,b);
        int cnt=0;

        while(mx!=mn && mx>mn)
        {
            cnt++;
            mx-=c;
            mn+=c;
        }
        
        if(mx>mn) cnt++;

        cout << cnt << endl;

    }
    return 0;
}

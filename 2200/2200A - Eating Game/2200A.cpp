#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i=0; i < n; i++) 
        {
            cin >> a[i];
        }
        int ans=0,m=a[0];

        for(int i=1 ; i<n ; i++){
            m=max(m,a[i]);
        }

        for(int i=0 ; i<n ; i++){
            if(a[i]==m) ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
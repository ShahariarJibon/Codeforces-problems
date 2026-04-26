#include <bits/stdc++.h>
using namespace std;

void solve(const vector<int> &a,int n) {
    
    bool isSort = true;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            isSort = false;
            break;
        }
    }

    if (isSort) {
        cout << n << endl;
    } else {
        cout << 1 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
          cin >> a[i];
         }

        solve(a,n);
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        stack<char> ch;
        for (char c : s) {
        if (!ch.empty() && ch.top() == c) {
           
            ch.pop();
        } else {
            ch.push(c);
        }
        }

        if (ch.empty()) {
            cout << "YES" << endl;
         } else {
        cout << "NO" << endl;
        }
    }
    return 0;
}
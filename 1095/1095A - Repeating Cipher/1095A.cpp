#include <bits/stdc++.h>
using namespace std;

int main()
 {
    int n;
    string str;
    cin >> n >> str;

    string s = "";
    int i = 0, st = 1;

    while (i < n) {
        s += str[i];
        i += st;
        st++;
    }

    cout << s << endl;
    return 0;
}

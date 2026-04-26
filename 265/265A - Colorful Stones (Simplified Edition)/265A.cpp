#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    char s[60],t[60];

    cin >>s>>t;
    int i=0,pos=0,l=strlen(t);
    for(i=0 ; i<l ; i++)
    {
        if(t[i]==s[pos])
        {
            pos++;
        }
    }
    cout << pos+1 << endl;

    return 0;
}

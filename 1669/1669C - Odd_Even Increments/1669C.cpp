#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (arr[0] % 2 == 0)
        {
            for (int j = 2; j < n; j += 2)
            {
                if (arr[j] % 2 != 0)
                {
                    cout << "NO" << endl;
                    flag = 1;
                    break;
                }
                else
                {
                    flag = 0;
                }
            }
        }
        else
        {
            for (int j = 2; j < n; j += 2)
            {
                if (arr[j] % 2 == 0)
                {
                    cout << "NO" << endl;
                    flag = 1;
                    break;
                }
                else
                {
                    flag = 0;
                }
            }
        }
        if (arr[1] % 2 == 0 && flag==0)
        {
            for (int j = 1; j < n; j += 2)
            {
                if (arr[j] % 2 != 0)
                {
                    cout << "NO" << endl;
                    flag = 1;
                    break;
                }
                else
                {
                    flag = 0;
                }
            }
        }
        else if(arr[1]%2!=0 && flag==0)
        {
            for (int j = 1; j < n; j += 2)
            {
                if (arr[j] % 2 == 0)
                {
                    cout << "NO" << endl;
                    flag = 1;
                    break;
                }
                else
                {
                    flag = 0;
                }
            }
        }
        if(flag==0)cout<<"YES"<<endl;
    }

    return 0;
}

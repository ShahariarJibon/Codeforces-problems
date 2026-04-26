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
        int arr[n][n];
        string s;
        

        for (int i = 0; i < n; i++)
        {
            cin>>s;
            for(int j=0;j<n;j++){
                arr[i][j]=s[j]-'0';
            }
        }
        bool yes=true;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==1){
                    if(arr[i][j+1]==1 && arr[i+1][j]==1){
                        cout<<"SQUARE"<<endl;
                        yes=false;
                        break;
                    }else{
                        cout<<"TRIANGLE"<<endl;
                        yes=false;
                        break;
                    }
                }
            }
            if(!yes){
                break;
            }
        }

    }

    return 0;
}

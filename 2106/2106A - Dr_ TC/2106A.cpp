#include <bits/stdc++.h>
using namespace std;

int main(){
  
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        string s,temp;
        cin>>s;
        
        int count=0;
        for(int i=0 ; i<n ; i++){
            temp=s;
            if(s[i]=='0'){
                temp[i]='1';
            }else{
                temp[i]='0';
            }

            for(int j=0 ; j<n ; j++){
                if(temp[j]=='1'){
                    count++;
                }
            }
        }
        cout<<count<<endl;;
    }
    return 0;
}
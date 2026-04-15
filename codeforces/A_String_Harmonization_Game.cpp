#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        string s; cin>>s;
        int cnt=0 , i=0;
        while(i<n-1){
            if((s[i]=='a' &&s[i+1]=='b' )|| (s[i]=='b'&& s[i+1]=='a'))
            {
            cnt++;
            i+=2; 
        }
            else
            i++;
        }
        if(cnt%2==1) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
}
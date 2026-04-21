#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>freq(26,0);
        for(int i=0;i<n;i++)
        freq[s[i]-'a']++;
        long long oddcnt=0;
        for(int i=0;i<26;i++)
        oddcnt += freq[i]%2;
        if(oddcnt>k+1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
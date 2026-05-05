#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin>>s;
    string res="hello";
    int j=0;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch==res[j])
        j++;
    }
    if(j==res.size()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();
    

    return 0;
}
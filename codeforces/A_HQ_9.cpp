#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    string s; cin>>s;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch=='H'||ch=='Q'|| ch=='9'){
            cout<<"YES"<<endl;
            return ;
        }
        
    }
    cout<<"NO"<<endl;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();
    

    return 0;
}
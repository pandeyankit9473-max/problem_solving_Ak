#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    for(auto&i:a) cin>>i;
    sort(a.begin(),a.end());
    for(auto i:a)cout<<i<<" ";
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

   

    
        solve();
    

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    for(auto&i:a) cin>>i;
    int maxi=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
       maxi=max(maxi,a[i]^a[j]);
        }
    }
    cout<<maxi<<endl;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
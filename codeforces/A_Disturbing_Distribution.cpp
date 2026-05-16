#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]!=1) ans+=a[i];
    }
    if(a[n-1]==1) ans++;
    cout<<ans<<endl;
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
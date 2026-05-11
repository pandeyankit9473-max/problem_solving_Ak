#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    for(int &x :a){
        cin>>x;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]<=i+1) cnt++;
    }
    cout<<cnt<<endl;
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
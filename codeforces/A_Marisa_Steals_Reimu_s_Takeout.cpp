#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    int c0=0, c1=0, c2=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x==0) c0++;
        else if(x==1) c1++;
        else c2++;

    }
    int ans=0;
    ans+=c0;
     int pairs=min(c2,c1);
     ans +=pairs;
     c1-=pairs;
     ans+=c1/3;
     c2-=pairs;
     ans+=c2/3;

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
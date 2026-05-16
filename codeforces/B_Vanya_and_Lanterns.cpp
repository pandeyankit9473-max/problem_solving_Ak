#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n,l; cin>>n>>l;
    vector<int>arr(n);
    for(auto&i:arr) cin>>i;
    sort(arr.begin(),arr.end());
    // firstly take first and last lanterns case
    int d=2*max(arr[0],l-arr[n-1]);
    for(int i=1;i<n;i++){
        d=max(d,arr[i]-arr[i-1]);

    }
    cout<<fixed<<setprecision(10)<<(double)d/2;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

   

   
        solve();
    

    return 0;
}
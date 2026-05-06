#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n; cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt=0; 
    for(int i=n-2;i>=0;i--){
        if(a[i+1]>0)
        a[i]+= a[i+1];
    }
 for(int i=0;i<n;i++){
    if(a[i]>0) cnt++;
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
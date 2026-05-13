#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    int sum=0;
    for(auto &i:a){
        cin>>i;
        sum+=i;
    }
    sort(a.begin(),a.end(),greater<int>());
    int coinsum=0, cnt=0;
    for(int i=0;i<n;i++){
        coinsum+=a[i];
        cnt++;
        int rem=sum-coinsum;
        if(coinsum>rem) break;
        
        
    }
    cout<<cnt<<endl;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

   
   
        solve();
    

    return 0;
}
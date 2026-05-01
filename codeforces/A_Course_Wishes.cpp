#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(k+1);
    for(int i=1;i<=k;i++)cin>>a[i];
    vector<int>b(n+1);
    for(int i=1;i<=n;i++)cin>>b[i];
   int sum = 0;
   for(int i=1;i<=n;i++){
    sum += k+1-b[i];
   }
   cout<<sum<<endl;
   for(int i=k;i>=0;i--){
    for(int j=1;j<=n;j++){
        if(b[j] == i){
            for(int s = b[j] ;s<= k ;s++){
                cout<<j<<" ";
            }
        }
    }
   }
    
   
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
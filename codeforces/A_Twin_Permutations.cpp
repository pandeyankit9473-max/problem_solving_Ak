#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int >a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
       for(int i=0;i<n;i++)
       b[i]=n+1-a[i];
       for(int i:b) cout<<i<<" ";
       cout<<endl;
    }
}
// a[i] + b[i]
// = a[i] + (n+1 - a[i])
// = n + 1
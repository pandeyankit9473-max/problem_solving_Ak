#include <bits/stdc++.h>
using namespace std;

void solve() {
     int X=0,Y=0,Z=0;
     
    int n; cin>>n;
    while(n--)
    {
   
    int x,y,z;
    cin>>x>>y>>z;
    X+=x; Y+=y; Z+=z;
    }
    if(X==0 && Y==0&& Z==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();
    

    return 0;
}
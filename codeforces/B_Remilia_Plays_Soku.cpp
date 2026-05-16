#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    ll n,x1,x2,k;
    cin>>n>>x1>>x2>>k;
    //just think abt the way of cathing in circle...2 way..
    //if n<=3 me circle is small ...
    if(n<=3){
        cout<<1<<endl;
        return;
    }
    int d1=abs(x2-x1);
    int d2=n-d1;
    // Reimu wants shortest path...
    int distance=min(d1,d2);
    cout<<distance+k<<endl;
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
// distance = min(abs(a-b), n-abs(a-b))---->Circular distance pattern
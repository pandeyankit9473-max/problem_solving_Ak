#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

ll lcm(ll a,ll b ){
    return (a/gcd(a,b))*b;
}

void solve() {
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll A=6*(d/a)-3*(d/lcm(a,b))-3*(d/lcm(a,c))+2*(d/lcm(a,lcm(b,c)));
    ll B=6*(d/b)-3*(d/lcm(b,c))-3*(d/lcm(b,a))+2*(d/lcm(b,lcm(a,c)));
     ll C=6*(d/c)-3*(d/lcm(c,a))-3*(d/lcm(c,b))+2*(d/lcm(c,lcm(a,b)));

     cout<<A<<" "<<B<<" "<<C<<endl;
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
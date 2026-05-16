#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

vector<ll>prime;
void genprime(){
    int limit=200000;
    vector<bool>isprime(limit+1,true);
    isprime[0]=false;
    isprime[1]=false;
    for(int i=2;i<=limit;i++){
        if(isprime[i]){
            prime.push_back(i);
            for(long long j= (ll)i*i;j<=limit;j+=i){
                isprime[j]=false;
            }
        }
    }
}



void solve() {
    int n; cin>>n;
    for(int i=0;i<n;i++){
        ll val=prime[i]*prime[i+1];
        cout<<val<<" ";
    }
    cout<<endl;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    // prime generte karo by calling funtion..
    genprime();

    while(t--) {
        solve();
    }

    return 0;
}
// actually here we have to think about the prime numbers because prime number has there own factors..
// Idea:
// We use prime numbers because
// adjacent numbers should share
// exactly one common factor.
//
// Prime numbers help us control gcd cleanly.
// We want all adjacent gcds to be different.
//
// Prime numbers help because:
// a prime has only two factors -> 1 and itself.
//
// So if we make:
//
// ai = prime[i] * prime[i+1]
//
// then adjacent numbers will have
// exactly ONE common prime.
//
// Example:
//
// 6  = 2 * 3
// 15 = 3 * 5
//
// gcd(6,15) = 3
//
// Only 3 is common.
//
// Since all primes are different,
// all gcds will also be different

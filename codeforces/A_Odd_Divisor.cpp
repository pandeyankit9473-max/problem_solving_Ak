#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n;
        cin>>n;
        while(n%2==0){
            n=n/2;
        }
        if(n==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}







// Agar number power of 2 hai: then uska divisor kewal ek even number hi hoga 
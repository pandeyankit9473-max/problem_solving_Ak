#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n; cin>>n;
   int a=0,b=0,c=0,d=0,taxi=0;
   for(int i=0;i<n;i++){
    int x; cin>>x;
    if(x==1)a++;
    else if(x==2)b++;
    else if(x==3)c++;
    else d++;
   } 
   taxi+=d;
   taxi+=c;
   a-=min(a,c);
   taxi+=b/2;
   if(b%2==1){ // if count of b is odd we balance it from count of 1...
    taxi++;
    a-=min(a,2);
   }
   taxi+=(a+3)/4; // ceil value for froups of 1....

   cout<<taxi<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   
        solve();
    

    return 0;
}
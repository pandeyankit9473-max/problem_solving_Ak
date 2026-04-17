#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
       int maxi=0,cnt=0;
       for(int i=0;i<n;i++){
         int x; cin>>x;
         if(x==0)cnt++;
         else cnt=0;
         maxi=max(cnt,maxi);
       }
     cout<<maxi<<endl;
       
    }
     
    }
    

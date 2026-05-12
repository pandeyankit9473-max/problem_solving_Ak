#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    n=2*n;
    vector<int> arr(n), vis(n,0), index(n,0);
    for(auto&i:arr) cin>>i;
    // store index...
    for(int i=0;i<n;i++) index[arr[i]]=i;
     int ans =1;
     for(int i=0;i<n;i++){
        set<int>presentNum;
        int flag=0;
        int mex=0;
        if(!vis[arr[i]]){
            int left=i , right=index[arr[i]]; //its last posn.
            while(left<=right){
                if(arr[left]==arr[right]){
                    presentNum.insert(arr[left]);
                    vis[arr[left]]++;
                    left++;
                    right--;
                }
                // if pallindrome broked then...
                else{
                    flag=1;
                    break;
                }
            }
            // now we will cal mex by conting in set..
            if(flag==0){
            while(presentNum.count(mex)) mex++;
            }

        }
        ans=max(ans,mex);
     }
     cout<<ans<<endl;
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
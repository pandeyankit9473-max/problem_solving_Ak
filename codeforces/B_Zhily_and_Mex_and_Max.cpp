#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    for(int &x:a) cin>>x;
    int maxi=*max_element(a.begin(),a.end());

    map<int,int>mp;
    for(int x:a) mp[x]++;

    vector<int>res;
    
    res.push_back(maxi);
    mp[maxi]--; // dec count from map...
    
    // now we will make the continuous mex chain in res
    int mexi=0;
    while(mp[mexi]>0){
        res.push_back(mexi);
        mp[mexi]--;
        mexi++;
    }
// now remaing element at the end as mex will be same for these all 

    for(auto &it:mp){
        while(it.second>0){
            res.push_back(it.first);
            it.second--;
        }
    }


    set<int>st;
    long long ans=0;
    int mex=0;

    // now cal ans for each prefix
    // set operations for mex (maximize karne ke liye)
    for(int x: res){
        st.insert(x);
        // calculate mex..
        while(st.count(mex)) mex++;
        ans+=maxi+mex;
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
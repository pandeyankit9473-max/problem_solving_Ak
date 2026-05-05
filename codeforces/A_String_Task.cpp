#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    string ans="";
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
   for(int i=0;i<s.size();i++){
    char ch=s[i];
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y')
      continue;
    else{
      ans += '.';
      ans += ch;
    }
   }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();
    

    return 0;
}
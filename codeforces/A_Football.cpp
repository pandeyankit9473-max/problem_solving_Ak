#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int cnt=1; // we will do indexing from 1 as we look at loop conditions ....
    for(int i=1;i<str.length();i++){
        if(str[i]==str[i-1]) cnt++;
        else cnt=1;

        if(cnt>=7){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
// actually this one is the approches that came into my mind and i applied..
// int i=0;
//     int cnt0=0 , cnt1=0,max0=0,max1=0;
//     while(i<str.length()){
//         char ch=str[i];
//         if(ch=='0') cnt0++;
//         else cnt0=0;
//         max0=max(cnt0,max0);
//         if(ch=='1') cnt1++;
//         else cnt1=0;
//         max1=max(cnt1,max1);
//         i++;
//     }
//     if(max0>=7 || max1>=7) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
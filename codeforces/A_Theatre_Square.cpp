#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a;
    cin>>n>>m>>a;
   // actually here we can go with the ceil logics as we have to think on putting sq on lenght and width sides 
   long long x= (n+a-1)/a;
   long long y=(m+a-1)/a;
   cout<<x*y<<endl;
}
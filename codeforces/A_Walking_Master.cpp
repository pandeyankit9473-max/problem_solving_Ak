#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int Sx,Sy,Dx,Dy;
        cin>>Sx>>Sy>>Dx>>Dy;
        if(Dy<Sy){cout<<"-1"<<endl; continue;}
        else{
            int moves=Dy-Sy;
            Sx+= moves;
            if(Dx>Sx){cout<<"-1"<<endl; continue;}
            else moves+=Sx-Dx;
            
            cout<<moves<<endl;
        }
       
    }
}
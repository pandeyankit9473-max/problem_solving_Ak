#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> d2, d3, d6, d;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if(x % 6 == 0) d6.push_back(x);
            else if(x % 3 == 0) d3.push_back(x);
            else if(x % 2 == 0) d2.push_back(x);
            else d.push_back(x);
        }
        for(int x : d6) cout << x << " ";
        for(int x : d2) cout << x << " ";
        for(int x : d)  cout << x << " ";
        for(int x : d3) cout << x << " ";

        cout << endl;
    }
}
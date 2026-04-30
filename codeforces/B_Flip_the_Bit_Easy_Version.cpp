#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n + 1);

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int p;
        cin >> p;

        int x = a[p];
        int ans = 0;

        // left side
        int i = 1;
        while(i < p) {
            if(a[i] != x) {
                ans++;
                while(i < p && a[i] != x) i++;
            }
            else i++;
        }

        // right side
        i = p + 1;
        while(i <= n) {
            if(a[i] != x) {
                ans++;
                while(i <= n && a[i] != x) i++;
            }
            else i++;
        }

        cout << ans << endl;
    }
}
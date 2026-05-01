#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> pos(n);

        for (int i = 1; i <= 2 * n; i++) {
            int x;
            cin >> x;
            pos[x].push_back(i);
        }

        int L = 0;
        int R = 2 * n + 1;
        int ans = 0;

        for (int x = 0; x < n; x++) {
            int p1 = pos[x][0];
            int p2 = pos[x][1];

            if (p1 > L && p2 < R) {
                ans++;
                L = p1;
                R = p2;
            } else {
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
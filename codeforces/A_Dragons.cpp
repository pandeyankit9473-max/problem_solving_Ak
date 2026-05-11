#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void solve() {

    int s, n;
    cin >> s >> n;

    vector<pair<int,int>> dragons;

    for (int i = 0; i < n; i++) {

        int x, y;
        cin >> x >> y;

        dragons.push_back({x, y});
    }

    sort(dragons.begin(), dragons.end());

    for (auto dragon : dragons) {

        int x = dragon.first;
        int y = dragon.second;

        if (s > x) {
            s += y;
        }
        else {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
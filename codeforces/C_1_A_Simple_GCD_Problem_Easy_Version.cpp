#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll findGcd(ll a, ll b) {
    if (b == 0) return a;
    return findGcd(b, a % b);
}

ll findLcm(ll a, ll b) {
    return (a / findGcd(a, b)) * b;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<ll> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int ans = 0;

        if (a[0] != findGcd(a[0], a[1])) {
            ans++;
        }

        for (int i = 1; i <= n - 2; i++) {

            ll leftGcd = findGcd(a[i], a[i - 1]);
            ll rightGcd = findGcd(a[i], a[i + 1]);

            ll need = findLcm(leftGcd, rightGcd);

            if (a[i] != need) {
                ans++;
            }
        }

        if (a[n - 1] != findGcd(a[n - 1], a[n - 2])) {
            ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}
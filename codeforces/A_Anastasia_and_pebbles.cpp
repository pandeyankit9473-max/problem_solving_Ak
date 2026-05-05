#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long total = 0;

    for(int i = 0; i < n; i++) {
        long long w;
        cin >> w;

        total += (w + k - 1) / k;  // n0 of pockets that will be used
    }

    cout << (total + 1) / 2; // counting no of days ..
}
// whenevr ceil(a/b) uses (a+b-1)/b.. just simple 
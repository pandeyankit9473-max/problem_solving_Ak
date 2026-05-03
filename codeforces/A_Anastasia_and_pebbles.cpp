#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long total = 0;

    for(int i = 0; i < n; i++) {
        long long w;
        cin >> w;

        total += (w + k - 1) / k;   // ceil(w/k)
    }

    cout << (total + 1) / 2;       // ceil(total/2)
}
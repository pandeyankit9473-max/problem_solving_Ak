#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long sum = 0;

    while (n > 1) {
        sum += n;

        long long d = 2;

        
        while (d * d <= n) {
            if (n % d == 0) break;
            d++;
        }

        
        if (n % d != 0) {
            d = n;
        }

        n = n / d;
    }

    sum += 1; 

    cout << sum << endl;
}
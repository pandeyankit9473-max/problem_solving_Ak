#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;

        int count = 0;

        for(long long i = 1; ; i++) {
            if(n % i == 0)
                count++;
            else
                break;
        }

        cout << count << endl;
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// long long get_lcm(long long a, long long b)
// {
//     return a / __gcd(a, b) * b;
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while(t--)
//     {
//         long long n;
//         cin >> n;

//         long long lcm = 1;
//         int ans = 0;

//         for(int i = 1; i <= 50; i++)
//         {
//             lcm = get_lcm(lcm, (long long)i);

//             if(n % lcm == 0)
//                 ans = i;
//             else
//                 break;
//         }

//         cout << ans << endl;
//     }
// }
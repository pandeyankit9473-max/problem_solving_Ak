#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        long long xk, yk, xq, yq;
        cin >> xk >> yk;
        cin >> xq >> yq;

        set<pair<long long, long long>> king, queen;

        vector<pair<long long, long long>> moves = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};

        // king ke positions
        for (auto move : moves)
        {
            king.insert({xk + move.first, yk + move.second});
        }

        // queen ke positions
        for (auto move : moves)
        {
            queen.insert({xq + move.first, yq + move.second});
        }

        int ans = 0;

        for (auto pos : king)
        {
            if (queen.count(pos))
                ans++;
        }

        cout << ans << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<long long> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        int greaterCount = 0;
        int smallerCount = 0;

        for(int j = i + 1; j < n; j++)
        {
            if(a[j] > a[i])
                greaterCount++;
            else if(a[j] < a[i])
                smallerCount++;
        }

        cout << max(greaterCount, smallerCount) << " ";
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}
// actually here is 2 cases when the k is to large the smaller one will be the more farther and if k is to smaller the larger will be too farther and 
// the biffer will be to near
// thats why we can take any sign of k so we have calculated the max of smaller and neg element of the elemnet next to the all element
// and we solve in this ways actually this question made me irritate....
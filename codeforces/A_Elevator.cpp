#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string door;
    cin >> door;

    int a;
    cin >> a;

    if (door == "front") {
        if (a == 1) cout << "L";
        else cout << "R";
    }
    else {
        if (a == 1) cout << "R";
        else cout << "L";
    }
}
// actually ha ha i have tried the very old one questions .....
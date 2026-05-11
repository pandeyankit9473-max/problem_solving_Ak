#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    cin >> s;

    int upper = 0, lower = 0;

    for(char ch : s) {

        if(isupper(ch))
            upper++;
        else
            lower++;
    }

    if(upper > lower) {

        for(char &ch : s)
            ch = toupper(ch);

    } else {

        for(char &ch : s)
            ch = tolower(ch);
    }

    cout << s << endl;

    return 0;
}
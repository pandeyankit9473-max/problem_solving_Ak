#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    long long oddCount = (n + 1) / 2;

    if(k <= oddCount)
        cout << 2 * k - 1;
    else
        cout << 2 * (k - oddCount);

    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long n,k;
//     cin>>n>>k;
//     vector<long>arr(n);
//     int index=1;
    
//     for(int i=1;i<=n;i++){
//         if(i%2!=0) arr[index++]=i;
//     }
//     for(int i=1;i<=n;i++){
//         if(i%2==0) arr[index++]=i;
//     }
//     cout<<arr[k]<<endl;
// }
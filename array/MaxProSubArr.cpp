#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Input arr
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxi = 1;
    int pre = 1;
    int suff = 1;

    for (int i = 0; i < n; i++){
        if (pre == 0) pre = 1;
        if (suff == 0) suff = 1;

        pre *= arr[i];
        suff *= arr[n - 1 - i];

        maxi = max(maxi, max(pre, suff));
    }

    cout << maxi << endl; 
}
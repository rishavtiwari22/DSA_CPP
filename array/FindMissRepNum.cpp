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

    long long S = (n * (n + 1)) / 2;
    long long SN = (n * (n + 1) * (2 * n + 1)) / 6;
    long long s = 0, sn = 0;

    for (int i = 0; i < n; i++){
        s += arr[i];
        sn += (long long)arr[i] * (long long)arr[i];
    }
    long long eq1 = s - S;
    long long eq2 = sn - SN;
    eq2 = eq2 / eq1;
    

    long long x = (eq1 + eq2) / 2;
    long long y = eq2 - x;

    cout << "Repet : " << (int)x << " " << "Missing : " << (int)y << endl;
}
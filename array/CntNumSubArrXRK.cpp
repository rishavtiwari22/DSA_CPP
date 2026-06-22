#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int xr = 0;
    int cnt = 0;
    map<int, int> mpp;
    mpp[xr]++;

    for (int i = 0; i < n; i++){
        xr ^= arr[i];
        int x = xr ^ k;
        cnt += mpp[x];
        mpp[xr]++;
    }

    cout << "Count is - " << cnt << endl;
}
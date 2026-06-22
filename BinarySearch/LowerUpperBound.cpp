#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    // Input arr
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int low = 0;
    int high = n - 1;
    int ans = n;
    while (low < high){
        int mid = (high + low) / 2;
        
        if (arr[mid] >= k){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    cout << ans << endl;
}
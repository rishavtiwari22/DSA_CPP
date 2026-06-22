#include <bits/stdc++.h>
using namespace std;

int binSearch(vector<int> &arr, int low, int high, int k){
    if (low > high) return -1;

    int mid = (high + low) / 2;
    if (arr[mid] == k) return arr[mid];
    else if (arr[mid] < k) return binSearch(arr, mid + 1, high, k);

    return binSearch(arr, low, mid - 1, k);
}

int main()
{
    int n, k;
    cin >> n >> k;

    // Input arr
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int low = 0;
    int high = n - 1;
    // while (low < high){
    //     int mid = (high + low) / 2;
    //     if (arr[mid] == k){
    //         cout << arr[mid] << endl;
    //         return 0;
    //     }else if (arr[mid] < k){
    //         low = mid + 1;
    //     }else{
    //         high = mid - 1;
    //     }
    // }

    cout << binSearch(arr, low, high, k) << endl;
}
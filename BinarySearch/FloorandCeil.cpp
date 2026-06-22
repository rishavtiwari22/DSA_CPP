#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int low = 0;
    int high = n - 1;
    int f = -1;
    int s = -1;

    while(low <= high){
        int mid = (high + low) / 2;

        if (arr[mid] >= k){
            s = arr[mid];
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    low = 0;
    high = n - 1;

    while (low <= high){
        int mid = (high + low) / 2;

        if (arr[mid] <= k){
            f = arr[mid];
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    cout << f << ", " << s << endl;
}
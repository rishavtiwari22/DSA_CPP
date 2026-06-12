#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int curr = arr[0];
    int maxi = 0;
    int l = 0;
    int r = 0;

    for (int i = 0; i < n; i++){

        if (curr+arr[i] > arr[i]){
            curr = curr + arr[i];
        }else{
            curr = arr[i];
        }

        if (curr  > maxi){
            maxi = curr;
        }

        // curr = max(curr + arr[i], arr[i]);
        // maxi = max(curr, maxi);
    }

    cout << "Max array sum - " << maxi << " and i , j - " << r << l << endl;
}
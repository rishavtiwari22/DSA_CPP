#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    unordered_map<int, int> mpp;
    int maximum = 0;
    int ans = 0;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
        if (mpp[arr[i]] > maximum){
            maximum = mpp[arr[i]];
            ans = arr[i];
        }
    }
    
    cout << "Max element - " << ans << " - " << mpp[ans] << " times!"<< endl;
}
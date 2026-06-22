#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++){
        cin >> vec[i];
    }
    

    int maxLen = 0;
    int sam = 0;
    // Update this value with k
    int k = 6;

    map<int, int> mpp;
    for (int i = 0; i < n; i++){

        sam += vec[i];
        if (sam == k){
            maxLen = max(maxLen, i + 1);
        }

        int res = sam - k;
        if (mpp.find(res) != mpp.end()){
            int len = i - mpp[res];
            maxLen = max(maxLen, len);
        }

        if (mpp.find(sam) == mpp.end()){
            mpp[sam] = i;
        }
    }

    cout << "Max subarray len - " << maxLen << endl;
}
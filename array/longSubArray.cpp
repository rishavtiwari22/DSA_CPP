#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++){
        cin >> vec[i];
    }
    int k;
    cout << "Enter value of K - ";
    cin >> k;

    int j = 0;
    int maxi = 0;
    int sam = 0;

    for (int i = 0; i < n; i++){
        sam += vec[i];
        if (sam >= k){
            if (sam == k){
                maxi = max(maxi, i - j + 1);
            }
            sam -= vec[j];
            j++;
        }
    }

    cout << "Max subarray len - " << maxi << endl;
}
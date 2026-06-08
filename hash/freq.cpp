#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;

    int arr[n] = {0};
    // Prefare to use it
    unordered_map<int, int> mpp;

    // If un_map is giving tle use this
    // map<int, int> mpp;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    // Itrate the map
    for (auto it : mpp){
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}
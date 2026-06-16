#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    map<int, int> mpp;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    int ele = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (cnt == 0){
            ele = arr[i];
            cnt = 1;
        }else if (ele == arr[i]){
            cnt++;
        }else{
            cnt--;
        }
    }

    cout << "Mejority element is - " << ele << endl;
}
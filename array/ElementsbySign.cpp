#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Input arr
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int p = 0, ne = 1;
    for (int i = 0; i < n; i++){
        if (arr[i] < 0){
            swap(arr[i], arr[ne]);
            ne += 2;
        }else{
            swap(arr[i], arr[p]);
            p += 2;
        } 
    }

    // Output array
    for (int i = 0; i < n; i++){
        cout << arr[i];
    }
    cout << endl;
}
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

    vector<int> vec(n);
    int p = 0, ne = 1;
    for (int i = 0; i < n; i++){
        if (arr[i] < 0){
            vec[ne] = arr[i];
            ne += 2;
        }else{
            vec[p] = arr[i];
            p += 2;
        } 
    }

    // Output array
    for (int i = 0; i < n; i++){
        cout << vec[i];
    }
    cout << endl;
}
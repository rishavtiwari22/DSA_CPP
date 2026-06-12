#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Input arr
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxi = 0;
    int val = arr[0];
    for (int i = 0; i < n; i++){
        // if(val > arr[i]){
        //     val = arr[i];
        // }
        val = min(val, arr[i]);
        maxi = max(arr[i] - val, maxi);
        // if (arr[i] - val > maxi)
        // {
        //     maxi = arr[i] - val;
        // }
    }

    // Output array
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    // }
    cout << "MAX DIFFRENCE - " << maxi << endl;
}
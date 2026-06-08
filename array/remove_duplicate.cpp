#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Input Array
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // removeing duplicate
    int idx = 0;
    for (int i = 0; i < n-1; i++){
        if (arr[i] != arr[i+1]){
            idx++;
            arr[idx] = arr[i + 1];
        }
    }

    // Print Array
    for (int i = 0; i <= idx; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int zeroIdx = 0;
    for (int i = 0; i < n; i++)
    {
       if (arr[i] != 0){
           swap(arr[i], arr[zeroIdx]);
           zeroIdx++;
       }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

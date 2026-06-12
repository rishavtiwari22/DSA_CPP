#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int targate;
    cout << "Enter targate val - ";
    cin >> targate;

    // Input arr
    vector<int> arr(n);
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int need = targate - arr[i];
        if (mpp.find(arr[i]) != mpp.end())
        {
            cout << "Exist Number - " << need << " + " << arr[i] << " = "<< targate << endl;
            break;
        }
        mpp[need] = i;
    }
}
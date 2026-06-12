#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    for (auto it: mpp){
        if (it.second > (n / 3)){
            cout << "Mejority Element -> " << it.first << " - " << it.second << endl;
        }
    }


}
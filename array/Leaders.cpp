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

    int large = arr[n - 1];
    cout << "Leader - " << large << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > large)
        {
            cout << "Leaders - " << arr[i] << endl;
            large = arr[i];
        }
    }


}
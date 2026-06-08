#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // Input arr
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    vector<int> arr;
    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (a[i] == b[j]){
            arr.push_back(a[i]);
            i++;
            j++;
        }else if (a[i] < b[j])
        {
            i++;
        }else{
            j++;
        }
    }

    

    // Output array
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
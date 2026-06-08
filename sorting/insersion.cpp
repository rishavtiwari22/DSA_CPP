#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}
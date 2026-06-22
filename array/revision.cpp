#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> vec;

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            vec.push_back(arr[left]);
            left++;
        }
        else
        {
            vec.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        vec.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        vec.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = vec[i - low];
    }
}

void inversion(vector<int> &arr, int low, int mid, int high)
{
    int j = mid+1;
    for (int i = low; i <= mid; i++){
        while (j < high && arr[i] <= arr[j]){
            cnt += j - (mid + 1);
            j++;
        }
    }
}

void ms(vector<int> &arr, int low, int high){
    if (low >= high)
        return;

    int mid = (low + high) / 2;
    ms(arr, low, mid);
    ms(arr, mid + 1, high);
    inversion(arr, low, mid, high);
    merge(arr, low, mid, high);
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ms(arr, 0, n - 1);




    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    // }
    cout << cnt <<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int st, int end){
    int idx = st - 1, pivot = arr[end];

    for (int j = st; j < end; j++){
        if (arr[j] <= pivot){
            idx++;
            swap(arr[idx], arr[j]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

void quick(vector<int> &arr, int st, int end)
{
    if (st < end){
        int pivIdx = partition(arr, st, end);

        quick(arr, st, pivIdx - 1);
        quick(arr, pivIdx + 1, end);
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++){
        cin >> vec[i];
    }

    quick(vec, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << vec[i];
    }
    cout << endl;
}
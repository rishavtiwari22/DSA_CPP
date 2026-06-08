#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int low = i;
        for (int j = i + 1; j < n; j++)
        {
           if (arr[low] > arr[j]){
               low = j;
           }
        }
        int temp = arr[low];
        arr[low] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "After sorted array : " << arr[i] << endl;
    }

    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the length od array : ";
    cin >> n;
    int arr[n] = {0};
    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i+1 << "st element : ";
        cin >> arr[i];
    }
    int len = sizeof(arr) / sizeof(arr[0]);
    int *max = max_element(arr, arr+len);
    int num = *max;
    int hash[num] = {0};

    for (int i = 0; i < n; i++){
        hash[arr[i]-1]++;
    }

    for (int i = 0; i < num; i++){
        cout << "Number : " << i+1 << " Occure : " << hash[i] << endl;
    }

    return 0;
}
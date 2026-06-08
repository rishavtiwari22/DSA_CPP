#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cout << "Enter the number of element in array : ";
    cin >> n;

    int arr[n] = {0};
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int num;
    cout << "Enter the number for freq : ";
    cin >> num;

    // Compute the freq
    int new_arr[n] = {0};

    for (int i = 0; i < n; i++){
        new_arr[arr[i]]++;
    }

    cout << new_arr[num] << endl;
}

#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cout << "Enter the lenght of arr - ";
    cin >> n;

    // Input arr
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int l = 0;
    int r = n - 1;
    int i = 0;

    while (i <= r){
        if (arr[i] == 0){
            swap(arr[i], arr[l]);
            i++;
            l++;

        }else if (arr[i] == 1){
            i++;
            
        }else if (arr[i] == 2){
            swap(arr[i], arr[r]);
            r--;
        }
    }

    for (int i = 0; i < n; i++){
        cout << arr[i];
    }
    cout << endl;
}

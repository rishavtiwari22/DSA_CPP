// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the len of array ";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++){
        cout << "Enter the element ";
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++){
        cout << "Array element " << arr[i] << endl;
    }

    return 0;
}
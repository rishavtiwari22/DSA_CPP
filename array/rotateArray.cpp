#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++){
        cin >> vec[i];
    }

    int d;
    cout << "Enter the rotation of array - ";
    cin >> d;

    int arr[d];
    for (int i = 0; i < d; i++){
        arr[i] = vec[i];
    }

    for (int i = d; i < n; i++){
        vec[i - d] = vec[i];
    }

    for (int i = n-d; i < n; i++){
        vec[i] = arr[i-(n-d)];
    }

    for (int i = 0; i < n; i++){
        cout << vec[i];
    }
    cout << endl;
}
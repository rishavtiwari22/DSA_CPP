#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // Input arr
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }

    vector<int> arr;
    int i = 0;
    int j = 0;

    while (i < n && j < m){
        if (a[i] < b[j]){
            if (arr.size() == 0 || arr.back() != a[i]){
                arr.push_back(a[i]);
            }
            i++;

        }else{
            if (arr.size() == 0 || arr.back() != b[j]){
                arr.push_back(b[j]);
            }
            j++;
        }
    }

    while(i < n){
        if (arr.back() != a[i] || arr.size() == 0){
            arr.push_back(a[i]);
        }
        i++;
    }

    while (j < m){
        if (arr.back() != b[j] || arr.size() == 0){
            arr.push_back(b[j]);
        }
        j++;
    }

    // Output array
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i];
    }
    cout << endl;
}
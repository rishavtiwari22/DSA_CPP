#include <bits/stdc++.h>
using namespace std;

void row(vector<vector<int>> &arr, int m, int i){
    for (int j = 0; j < m; j++){
        if (arr[i][j] != 0){
            arr[i][j] = -1;
        }
    }
}

void col(vector<vector<int>> &arr, int n, int j){
    for (int i = 0; i < n; i++){
        if (arr[i][j] != 0){
            arr[i][j] = -1;
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    

    // Input arr
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] == 0){
                row(arr, m, i);
                col(arr, n, j);
            }
        }
    }

    // Output array
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] == -1){
                cout << 0 << " ";
            }else{
                cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
    }
    cout << endl;
}


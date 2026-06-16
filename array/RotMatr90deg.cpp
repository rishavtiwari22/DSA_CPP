#include <bits/stdc++.h>
using namespace std;

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
            if (j <= i){
                swap(arr[i][j], arr[j][i]);
            }
        }
    }

    for (int i = 0; i < n; i++){
        reverse(arr[i].begin(), arr[i].end());
    }

        // Output array
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == -1)
                {
                    cout << 0 << " ";
                }
                else
                {
                    cout << arr[i][j] << " ";
                }
            }
            cout << "\n";
        }
    cout << endl;
}

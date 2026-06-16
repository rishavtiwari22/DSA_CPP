#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Input arr
    vector<vector<int>> arr(n, vector<int>(n, 0));
    int count = 1;
    for (int i = 0; i <= n/2; i++){

        int left = i;
        int right = n - i;
        for (int j = i; j < right; j++){
            arr[left][j] = count;
            count++;
        }

        for (int j = i + 1; j < right; j++){
            arr[j][right - 1] = count;
            count++;
        }

        for (int j = right - 2; j >= i; j--){
            arr[right-1][j] = count;
            count++;
        }
        right = n - i - 1;
        for (int j = right - 1; j > i; j--){
            arr[j][i] = count;
            count++;
        }
    }

    // Output array
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
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
